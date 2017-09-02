//
// Created by Good_Pudge.
//

#ifndef OKHTTPFORK_EXCEPTION_HPP
#define OKHTTPFORK_EXCEPTION_HPP

#include "../util/include/string.hpp"

namespace ohf {
    class Exception {
    public:
        static enum Code {
            HEADER_NOT_EXISTS,
            INVALID_HEADER_LINE,
            INVALID_MIME_TYPE,
            FAILED_TO_READ_STREAM,
            OPENSSL_INIT_ERROR,
            OPENSSL_CREATE_CONTEXT_ERROR,
            FAILED_TO_CREATE_SSL_CONNECTION,
            OPENSSL_ERROR,
            INVALID_QUERY_PARAMETER,
            UNSUPPORTED_PROTOCOL,
            INVALID_URI,
            AUTHORITY_PASSWORD_IS_EMPTY,
            AUTHORITY_USERNAME_IS_EMPTY,
            INVALID_PORT,
            INVALID_HOST,
            INVALID_URI_HEX_CODE,
            HOST_IS_EMPTY
        };

        Exception(const int &code, const std::string &what);

        int code();

        std::string what();

    private:
        int code_;
        std::string what_;
    };
}

#endif //OKHTTPFORK_EXCEPTION_HPP
