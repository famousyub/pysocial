<?php
namespace TTG;

/**
 * Autogenerated by Thrift Compiler (0.16.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
use Thrift\Base\TBase;
use Thrift\Type\TType;
use Thrift\Type\TMessageType;
use Thrift\Exception\TException;
use Thrift\Exception\TProtocolException;
use Thrift\Protocol\TProtocol;
use Thrift\Protocol\TBinaryProtocolAccelerated;
use Thrift\Exception\TApplicationException;

final class ResponseState
{
    const StateOk = 0;

    const StateError = 1;

    const StateEmpty = 2;

    static public $__names = array(
        0 => 'StateOk',
        1 => 'StateError',
        2 => 'StateEmpty',
    );
}
