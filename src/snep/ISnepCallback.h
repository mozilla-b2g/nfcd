/*
 * Copyright (C) 2013-2014  Mozilla Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef mozilla_nfcd_ISnepCallback_h
#define mozilla_nfcd_ISnepCallback_h

class SnepMessage;
class NdefMessage;

class ISnepCallback {
public:
  virtual SnepMessage* doPut(NdefMessage* msg) = 0;
  virtual SnepMessage* doGet(int acceptableLength, NdefMessage* msg) = 0;

  virtual ~ISnepCallback(){};
};

#endif
