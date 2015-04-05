// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is generated by print_log_list.py
#ifndef NET_CERT_CT_KNOWN_LOGS_STATIC_H_
#define NET_CERT_CT_KNOWN_LOGS_STATIC_H_

struct CTLogInfo {
  const char log_key[92];
  const char* const log_name;
};

const CTLogInfo kCTLogList[] = {
  {"\x30\x59\x30\x13\x06\x07\x2a\x86\x48\xce\x3d\x02\x01\x06\x08\x2a\x86"
    "\x48\xce\x3d\x03\x01\x07\x03\x42\x00\x04\x7d\xa8\x4b\x12\x29\x80\xa3"
    "\x3d\xad\xd3\x5a\x77\xb8\xcc\xe2\x88\xb3\xa5\xfd\xf1\xd3\x0c\xcd\x18"
    "\x0c\xe8\x41\x46\xe8\x81\x01\x1b\x15\xe1\x4b\xf1\x1b\x62\xdd\x36\x0a"
    "\x08\x18\xba\xed\x0b\x35\x84\xd0\x9e\x40\x3c\x2d\x9e\x9b\x82\x65\xbd"
    "\x1f\x04\x10\x41\x4c\xa0",
    "Google 'Pilot' log"
  },
  {"\x30\x59\x30\x13\x06\x07\x2a\x86\x48\xce\x3d\x02\x01\x06\x08\x2a\x86"
    "\x48\xce\x3d\x03\x01\x07\x03\x42\x00\x04\xd7\xf4\xcc\x69\xb2\xe4\x0e"
    "\x90\xa3\x8a\xea\x5a\x70\x09\x4f\xef\x13\x62\xd0\x8d\x49\x60\xff\x1b"
    "\x40\x50\x07\x0c\x6d\x71\x86\xda\x25\x49\x8d\x65\xe1\x08\x0d\x47\x34"
    "\x6b\xbd\x27\xbc\x96\x21\x3e\x34\xf5\x87\x76\x31\xb1\x7f\x1d\xc9\x85"
    "\x3b\x0d\xf7\x1f\x3f\xe9",
    "Google 'Aviator' log"
  },
  {"\x30\x59\x30\x13\x06\x07\x2a\x86\x48\xce\x3d\x02\x01\x06\x08\x2a\x86"
    "\x48\xce\x3d\x03\x01\x07\x03\x42\x00\x04\xa2\xf7\xed\x13\xe1\xd3\x5c"
    "\x02\x08\xc4\x8e\x8b\x9b\x8b\x3b\x39\x68\xc7\x92\x6a\x38\xa1\x4f\x23"
    "\xc5\xa5\x6f\x6f\xd7\x65\x81\xf8\xc1\x9b\xf4\x9f\xa9\x8b\x45\xf4\xb9"
    "\x4e\x1b\xc9\xa2\x69\x17\xa5\x78\x87\xd9\xce\x88\x6f\x41\x03\xbb\xa3"
    "\x2a\xe3\x77\x97\x8d\x78",
    "SSLWatcher.com CT log 'alpha'"
  }
};

const size_t kNumKnownCTLogs = 3;

#endif  // NET_CERT_CT_KNOWN_LOGS_STATIC_H_