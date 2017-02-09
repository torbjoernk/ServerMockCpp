from conans import ConanFile, CMake


class MockedServer(ConanFile):
    settings = "os", "compiler", "build_type", "arch"
    requires = (
        "Poco/1.7.5@lasote/stable",
        "googletest/1.8.0@torbjoernk/staging"
    )
    generators = "cmake"
    options = {
        "shared": [True, False]
    }
    default_options = (
        "shared=True",
        "Poco:shared=False",
        "Poco:enable_xml=False",
        "Poco:enable_json=True",
        "Poco:enable_mongodb=False",
        "Poco:enable_pdf=False",
        "Poco:enable_util=True",
        "Poco:enable_net=True",
        "Poco:enable_netssl=True",
        "Poco:enable_netssl_win=True",
        "Poco:enable_crypto=True",
        "Poco:enable_data=False",
        "Poco:enable_data_sqlite=False",
        "Poco:enable_data_mysql=False",
        "Poco:enable_data_odbc=False",
        "Poco:enable_sevenzip=False",
        "Poco:enable_zip=False",
        "Poco:enable_apacheconnector=False",
        "Poco:enable_cppparser=False",
        "Poco:enable_pocodoc=False",
        "Poco:enable_pagecompiler=False",
        "Poco:enable_pagecompiler_file2page=False",
        "Poco:force_openssl=True",
        "Poco:enable_tests=False",
        "Poco:poco_unbundled=False",
        "Poco:cxx_14=False",
        "OpenSSL:shared=True",
        "OpenSSL:no_electric_fence=True"
    )

    def imports(self):
        self.copy("*.dll", dst="bin", src="bin")  # From bin to bin
        self.copy("*.dylib*", dst="bin", src="lib")  # From lib to bin

    def build(self):
        shared_option = "-DBUILD_SHARED_LIBS=%s" % ('ON' if self.options.shared else 'OFF')
        cmake = CMake(self.settings)
        self.run('cmake "%s" %s %s' % (self.conanfile_directory, shared_option, cmake.command_line))
        self.run('cmake --build . %s' % (cmake.build_config))
