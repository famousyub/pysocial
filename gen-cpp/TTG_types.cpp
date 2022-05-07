/**
 * Autogenerated by Thrift Compiler (0.16.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "TTG_types.h"

#include <algorithm>
#include <ostream>

#include <thrift/TToString.h>

namespace TTG {

int _kResponseStateValues[] = {
  ResponseState::StateOk,
  ResponseState::StateError,
  ResponseState::StateEmpty
};
const char* _kResponseStateNames[] = {
  "StateOk",
  "StateError",
  "StateEmpty"
};
const std::map<int, const char*> _ResponseState_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(3, _kResponseStateValues, _kResponseStateNames), ::apache::thrift::TEnumIterator(-1, nullptr, nullptr));

std::ostream& operator<<(std::ostream& out, const ResponseState::type& val) {
  std::map<int, const char*>::const_iterator it = _ResponseState_VALUES_TO_NAMES.find(val);
  if (it != _ResponseState_VALUES_TO_NAMES.end()) {
    out << it->second;
  } else {
    out << static_cast<int>(val);
  }
  return out;
}

std::string to_string(const ResponseState::type& val) {
  std::map<int, const char*>::const_iterator it = _ResponseState_VALUES_TO_NAMES.find(val);
  if (it != _ResponseState_VALUES_TO_NAMES.end()) {
    return std::string(it->second);
  } else {
    return std::to_string(static_cast<int>(val));
  }
}


Request::~Request() noexcept {
}


void Request::__set_studentID(const int32_t val) {
  this->studentID = val;
}
std::ostream& operator<<(std::ostream& out, const Request& obj)
{
  obj.printTo(out);
  return out;
}


uint32_t Request::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->studentID);
          this->__isset.studentID = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t Request::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("Request");

  xfer += oprot->writeFieldBegin("studentID", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->studentID);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Request &a, Request &b) {
  using ::std::swap;
  swap(a.studentID, b.studentID);
  swap(a.__isset, b.__isset);
}

Request::Request(const Request& other0) noexcept {
  studentID = other0.studentID;
  __isset = other0.__isset;
}
Request& Request::operator=(const Request& other1) noexcept {
  studentID = other1.studentID;
  __isset = other1.__isset;
  return *this;
}
void Request::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "Request(";
  out << "studentID=" << to_string(studentID);
  out << ")";
}


Response::~Response() noexcept {
}


void Response::__set_studentID(const int32_t val) {
  this->studentID = val;
}

void Response::__set_name(const std::string& val) {
  this->name = val;
}

void Response::__set_infos(const std::vector<std::string> & val) {
  this->infos = val;
}

void Response::__set_state(const ResponseState::type val) {
  this->state = val;
}
std::ostream& operator<<(std::ostream& out, const Response& obj)
{
  obj.printTo(out);
  return out;
}


uint32_t Response::read(::apache::thrift::protocol::TProtocol* iprot) {

  ::apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          xfer += iprot->readI32(this->studentID);
          this->__isset.studentID = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->name);
          this->__isset.name = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_LIST) {
          {
            this->infos.clear();
            uint32_t _size2;
            ::apache::thrift::protocol::TType _etype5;
            xfer += iprot->readListBegin(_etype5, _size2);
            this->infos.resize(_size2);
            uint32_t _i6;
            for (_i6 = 0; _i6 < _size2; ++_i6)
            {
              xfer += iprot->readString(this->infos[_i6]);
            }
            xfer += iprot->readListEnd();
          }
          this->__isset.infos = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast7;
          xfer += iprot->readI32(ecast7);
          this->state = static_cast<ResponseState::type>(ecast7);
          this->__isset.state = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t Response::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  ::apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("Response");

  xfer += oprot->writeFieldBegin("studentID", ::apache::thrift::protocol::T_I32, 1);
  xfer += oprot->writeI32(this->studentID);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("name", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->name);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("infos", ::apache::thrift::protocol::T_LIST, 3);
  {
    xfer += oprot->writeListBegin(::apache::thrift::protocol::T_STRING, static_cast<uint32_t>(this->infos.size()));
    std::vector<std::string> ::const_iterator _iter8;
    for (_iter8 = this->infos.begin(); _iter8 != this->infos.end(); ++_iter8)
    {
      xfer += oprot->writeString((*_iter8));
    }
    xfer += oprot->writeListEnd();
  }
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("state", ::apache::thrift::protocol::T_I32, 4);
  xfer += oprot->writeI32(static_cast<int32_t>(this->state));
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(Response &a, Response &b) {
  using ::std::swap;
  swap(a.studentID, b.studentID);
  swap(a.name, b.name);
  swap(a.infos, b.infos);
  swap(a.state, b.state);
  swap(a.__isset, b.__isset);
}

Response::Response(const Response& other9) {
  studentID = other9.studentID;
  name = other9.name;
  infos = other9.infos;
  state = other9.state;
  __isset = other9.__isset;
}
Response& Response::operator=(const Response& other10) {
  studentID = other10.studentID;
  name = other10.name;
  infos = other10.infos;
  state = other10.state;
  __isset = other10.__isset;
  return *this;
}
void Response::printTo(std::ostream& out) const {
  using ::apache::thrift::to_string;
  out << "Response(";
  out << "studentID=" << to_string(studentID);
  out << ", " << "name=" << to_string(name);
  out << ", " << "infos=" << to_string(infos);
  out << ", " << "state=" << to_string(state);
  out << ")";
}

} // namespace
