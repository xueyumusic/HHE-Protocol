#pragma once

#include "../../common/kats.h"
#include "rasta_6_plain.h"

using namespace RASTA_6;

// build an array of KnownAnswerTests for RASTA_128
KnownAnswerTest<RASTA_128> KNOWN_ANSWER_TESTS[] = {
    {
        {0x76, 0xad, 0x7b, 0x3f, 0x23, 0xe9, 0x58, 0x09, 0x47, 0x7c, 0xb8,
         0x14, 0xcc, 0x35, 0xec, 0x1e, 0xa6, 0x1e, 0xba, 0xfe, 0x80, 0x43,
         0x22, 0x62, 0x87, 0x65, 0x59, 0x58, 0x56, 0x2e, 0x6c, 0x98, 0x6e,
         0x45, 0xdc, 0xed, 0x34, 0x43, 0x0d, 0xc7, 0x87, 0x13, 0x0c, 0x04},
        {0x84, 0x35, 0xd9, 0x7c, 0x41, 0x20, 0xc0, 0x4f, 0xcf, 0xf1, 0x6a,
         0x94, 0x1e, 0xbd, 0x5c, 0xf7, 0xe8, 0xe7, 0x48, 0x85, 0xd9, 0x33,
         0xf4, 0xdb, 0x97, 0x0a, 0xc4, 0x38, 0x54, 0x84, 0x7a, 0xcf, 0xeb,
         0xc9, 0x00, 0x33, 0xec, 0xf2, 0xf4, 0xba, 0x5f, 0x1f, 0xbf, 0xf0},
        {0xd8, 0xfa, 0x0d, 0xef, 0x78, 0xc8, 0x4d, 0xaf, 0x25, 0x45, 0xe5,
         0xe3, 0x66, 0x36, 0xfc, 0xf6, 0xca, 0x69, 0x85, 0x20, 0xe2, 0x14,
         0x89, 0x37, 0xde, 0x0d, 0x40, 0x9f, 0x3a, 0x90, 0x88, 0x0f, 0x37,
         0x49, 0xaf, 0x26, 0x6d, 0xc3, 0xd8, 0xfb, 0x38, 0xed, 0x60, 0x88},
        KnownAnswerTest<RASTA_128>::Testcase::DEC,
    },
    {

        {0x76, 0xad, 0x7b, 0x3f, 0x23, 0xe9, 0x58, 0x09, 0x47, 0x7c, 0xb8,
         0x14, 0xcc, 0x35, 0xec, 0x1e, 0xa6, 0x1e, 0xba, 0xfe, 0x80, 0x43,
         0x22, 0x62, 0x87, 0x65, 0x59, 0x58, 0x56, 0x2e, 0x6c, 0x98, 0x6e,
         0x45, 0xdc, 0xed, 0x34, 0x43, 0x0d, 0xc7, 0x87, 0x13, 0x0c, 0x04},
        {0x00},
        {0x00},
        KnownAnswerTest<RASTA_128>::Testcase::USE_CASE,
        5,
        16,
    },
    {

        {0x76, 0xad, 0x7b, 0x3f, 0x23, 0xe9, 0x58, 0x09, 0x47, 0x7c, 0xb8,
         0x14, 0xcc, 0x35, 0xec, 0x1e, 0xa6, 0x1e, 0xba, 0xfe, 0x80, 0x43,
         0x22, 0x62, 0x87, 0x65, 0x59, 0x58, 0x56, 0x2e, 0x6c, 0x98, 0x6e,
         0x45, 0xdc, 0xed, 0x34, 0x43, 0x0d, 0xc7, 0x87, 0x13, 0x0c, 0x04},
        {0x00},
        {0x00},
        KnownAnswerTest<RASTA_128>::Testcase::PREP,
    }};
