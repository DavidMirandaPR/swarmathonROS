# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from ublox_msgs/CfgPRT.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class CfgPRT(genpy.Message):
  _md5sum = "3679d3ad278d5329fb8543226a55acca"
  _type = "ublox_msgs/CfgPRT"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """# CFG-PRT (0x06 0x00)
# Port Configuration for UART
#
# Several configurations can be concatenated to one input message. In this case the payload
# length can be a multiple of the normal length (see the other versions of CFG-PRT). Output
# messages from the module contain only one configuration unit.
#

uint8 CLASS_ID = 6
uint8 MESSAGE_ID = 0

uint8 portID              # Port Identifier Number (= 1 or 2 for UART ports)
uint8 PORT_ID_UART1 = 1
uint8 PORT_ID_UART2 = 2
uint8 PORT_ID_USB = 3

uint8 reserved0           # Reserved

uint16 txReady            # reserved (Alwyas set to zero) up to Firmware 7.01,
                          # TX ready PIN configuration (since Firmware 7.01)
uint16 TX_READY_EN = 1                    # Enable TX ready feature for this port
uint16 TX_READY_POLARITY_HIGH_ACTIVE = 0  # Polarity High-active
uint16 TX_READY_POLARITY_LOW_ACTIVE = 2   # Polarity Low-active
uint16 TX_READY_PIN_SHIFT = 2             # PIO to be used (must not be in use already by another function)
uint16 TX_READY_PIN_MASK = 124            #
uint16 TX_READY_THRES_SHIFT = 7           # Threshold
uint16 TX_READY_THRES_MASK = 65408        # The given threshold is multiplied by 8 bytes.
                                          # The TX ready PIN goes active after >= thres*8 bytes are pending for the port and going inactive after the last
                                          # pending bytes have been written to hardware (0-4 bytes before end of stream).

uint32 mode               # A bit mask describing the UART mode
uint32 MODE_RESERVED1 = 16                # Default 1 for compatibility with A4
uint32 MODE_CHAR_LEN_MASK = 192           # Character Length
uint32 MODE_CHAR_LEN_5BIT = 0               # 5bit (not supported)
uint32 MODE_CHAR_LEN_6BIT = 64              # 6bit (not supported)
uint32 MODE_CHAR_LEN_7BIT = 128             # 7bit (supported only with parity)
uint32 MODE_CHAR_LEN_8BIT = 192             # 8bit
uint32 MODE_PARITY_MASK = 3584            #
uint32 MODE_PARITY_EVEN = 0                 # Even Parity
uint32 MODE_PARITY_ODD = 512                # Odd Parity
uint32 MODE_PARITY_NO = 2048                # No Parity
uint32 MODE_STOP_BITS_MASK = 12288        # Number of Stop Bits
uint32 MODE_STOP_BITS_1 = 0                 # 1 Stop Bit
uint32 MODE_STOP_BITS_15 = 4096             # 1.5 Stop Bit
uint32 MODE_STOP_BITS_2 = 8192              # 2 Stop Bit
uint32 MODE_STOP_BITS_05 = 12288            # 0.5 Stop Bit

uint32 baudRate           # Baudrate in bits/second [bits/s]

uint16 inProtoMask        # A mask describing which input protocols are active.
                          # Each bit of this mask is used for a protocol.
                          # Through that, multiple protocols can be defined
                          # on a single port.

uint16 outProtoMask       # A mask describing which output protocols are active.
                          # Each bit of this mask is used for a protocol.
                          # Through that, multiple protocols can be defined
                          # on a single port.

uint16 PROTO_UBX = 1
uint16 PROTO_NMEA = 2
uint16 PROTO_RTCM = 4

uint16 reserved4          # Always set to zero
uint16 reserved5          # Always set to zero
"""
  # Pseudo-constants
  CLASS_ID = 6
  MESSAGE_ID = 0
  PORT_ID_UART1 = 1
  PORT_ID_UART2 = 2
  PORT_ID_USB = 3
  TX_READY_EN = 1
  TX_READY_POLARITY_HIGH_ACTIVE = 0
  TX_READY_POLARITY_LOW_ACTIVE = 2
  TX_READY_PIN_SHIFT = 2
  TX_READY_PIN_MASK = 124
  TX_READY_THRES_SHIFT = 7
  TX_READY_THRES_MASK = 65408
  MODE_RESERVED1 = 16
  MODE_CHAR_LEN_MASK = 192
  MODE_CHAR_LEN_5BIT = 0
  MODE_CHAR_LEN_6BIT = 64
  MODE_CHAR_LEN_7BIT = 128
  MODE_CHAR_LEN_8BIT = 192
  MODE_PARITY_MASK = 3584
  MODE_PARITY_EVEN = 0
  MODE_PARITY_ODD = 512
  MODE_PARITY_NO = 2048
  MODE_STOP_BITS_MASK = 12288
  MODE_STOP_BITS_1 = 0
  MODE_STOP_BITS_15 = 4096
  MODE_STOP_BITS_2 = 8192
  MODE_STOP_BITS_05 = 12288
  PROTO_UBX = 1
  PROTO_NMEA = 2
  PROTO_RTCM = 4

  __slots__ = ['portID','reserved0','txReady','mode','baudRate','inProtoMask','outProtoMask','reserved4','reserved5']
  _slot_types = ['uint8','uint8','uint16','uint32','uint32','uint16','uint16','uint16','uint16']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       portID,reserved0,txReady,mode,baudRate,inProtoMask,outProtoMask,reserved4,reserved5

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(CfgPRT, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.portID is None:
        self.portID = 0
      if self.reserved0 is None:
        self.reserved0 = 0
      if self.txReady is None:
        self.txReady = 0
      if self.mode is None:
        self.mode = 0
      if self.baudRate is None:
        self.baudRate = 0
      if self.inProtoMask is None:
        self.inProtoMask = 0
      if self.outProtoMask is None:
        self.outProtoMask = 0
      if self.reserved4 is None:
        self.reserved4 = 0
      if self.reserved5 is None:
        self.reserved5 = 0
    else:
      self.portID = 0
      self.reserved0 = 0
      self.txReady = 0
      self.mode = 0
      self.baudRate = 0
      self.inProtoMask = 0
      self.outProtoMask = 0
      self.reserved4 = 0
      self.reserved5 = 0

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_struct_2BH2I4H.pack(_x.portID, _x.reserved0, _x.txReady, _x.mode, _x.baudRate, _x.inProtoMask, _x.outProtoMask, _x.reserved4, _x.reserved5))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 20
      (_x.portID, _x.reserved0, _x.txReady, _x.mode, _x.baudRate, _x.inProtoMask, _x.outProtoMask, _x.reserved4, _x.reserved5,) = _struct_2BH2I4H.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_struct_2BH2I4H.pack(_x.portID, _x.reserved0, _x.txReady, _x.mode, _x.baudRate, _x.inProtoMask, _x.outProtoMask, _x.reserved4, _x.reserved5))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 20
      (_x.portID, _x.reserved0, _x.txReady, _x.mode, _x.baudRate, _x.inProtoMask, _x.outProtoMask, _x.reserved4, _x.reserved5,) = _struct_2BH2I4H.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_2BH2I4H = struct.Struct("<2BH2I4H")
