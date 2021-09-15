// this file is automatically generated
// Copyright 2021 SourceGear

#include <stdint.h>

#ifndef INCLUDE_System_Net_WebSockets
#define INCLUDE_System_Net_WebSockets

#ifdef __cplusplus
extern "C" {
#endif

typedef const void* _Nonnull SG_HNDL_NONNULL;
typedef const void* _Nullable SG_HNDL_NULLABLE;
typedef const void* _Nonnull TYP;
typedef uint64_t GVAL;

TYP System_Net_WebSockets_ValueWebSocketReceiveResult_get_type_handle(void);

SG_HNDL_NONNULL System_Net_WebSockets_ValueWebSocketReceiveResult_ctor_0__3__i32_WebSocketMessageType_bool(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t count, int32_t messageType, int32_t endOfMessage);

int32_t System_Net_WebSockets_ValueWebSocketReceiveResult_i32__get_Count_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Net_WebSockets_ValueWebSocketReceiveResult_bool__get_EndOfMessage_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Net_WebSockets_ValueWebSocketReceiveResult_WebSocketMessageType__get_MessageType_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Net_WebSockets_ValueWebSocketReceiveResult_implicit_ctor(void);

TYP System_Net_WebSockets_WebSocket_get_type_handle(void);

void System_Net_WebSockets_WebSocket_void__Abort_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Net_WebSockets_WebSocket_Task__CloseAsync_0__3__WebSocketCloseStatus_String_CancellationToken(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t closeStatus, SG_HNDL_NULLABLE statusDescription, SG_HNDL_NONNULL cancellationToken);

SG_HNDL_NONNULL System_Net_WebSockets_WebSocket_Task__CloseOutputAsync_0__3__WebSocketCloseStatus_String_CancellationToken(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t closeStatus, SG_HNDL_NULLABLE statusDescription, SG_HNDL_NONNULL cancellationToken);

SG_HNDL_NONNULL System_Net_WebSockets_WebSocket_System_ArraySegment_u8___CreateClientBuffer_0__2__i32_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t receiveBufferSize, int32_t sendBufferSize);

SG_HNDL_NONNULL System_Net_WebSockets_WebSocket_WebSocket__CreateClientWebSocket_0__7__Stream_String_i32_i32_TimeSpan_bool_System_ArraySegment_u8_(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL innerStream, SG_HNDL_NULLABLE subProtocol, int32_t receiveBufferSize, int32_t sendBufferSize, SG_HNDL_NONNULL keepAliveInterval, int32_t useZeroMaskingKey, SG_HNDL_NONNULL internalBuffer);

SG_HNDL_NONNULL System_Net_WebSockets_WebSocket_WebSocket__CreateFromStream_0__4__Stream_bool_String_TimeSpan(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL stream, int32_t isServer, SG_HNDL_NULLABLE subProtocol, SG_HNDL_NONNULL keepAliveInterval);

SG_HNDL_NONNULL System_Net_WebSockets_WebSocket_WebSocket__CreateFromStream_0__2__Stream_WebSocketCreationOptions(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL stream, SG_HNDL_NONNULL options);

SG_HNDL_NONNULL System_Net_WebSockets_WebSocket_System_ArraySegment_u8___CreateServerBuffer_0__1__i32(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t receiveBufferSize);

void System_Net_WebSockets_WebSocket_void__Dispose_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Net_WebSockets_WebSocket_bool__IsApplicationTargeting45_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Net_WebSockets_WebSocket_System_Threading_Tasks_Task_System_Net_WebSockets_WebSocketReceiveResult___ReceiveAsync_0__2__System_ArraySegment_u8__CancellationToken(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL buffer, SG_HNDL_NONNULL cancellationToken);

SG_HNDL_NONNULL System_Net_WebSockets_WebSocket_System_Threading_Tasks_ValueTask_System_Net_WebSockets_ValueWebSocketReceiveResult___ReceiveAsync_0__2__System_Memory_u8__CancellationToken(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL buffer, SG_HNDL_NONNULL cancellationToken);

void System_Net_WebSockets_WebSocket_void__RegisterPrefixes_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Net_WebSockets_WebSocket_Task__SendAsync_0__4__System_ArraySegment_u8__WebSocketMessageType_bool_CancellationToken(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL buffer, int32_t messageType, int32_t endOfMessage, SG_HNDL_NONNULL cancellationToken);

SG_HNDL_NONNULL System_Net_WebSockets_WebSocket_ValueTask__SendAsync_0__4__System_ReadOnlyMemory_u8__WebSocketMessageType_bool_CancellationToken(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL buffer, int32_t messageType, int32_t endOfMessage, SG_HNDL_NONNULL cancellationToken);

SG_HNDL_NONNULL System_Net_WebSockets_WebSocket_ValueTask__SendAsync_0__4__System_ReadOnlyMemory_u8__WebSocketMessageType_WebSocketMessageFlags_CancellationToken(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL buffer, int32_t messageType, int32_t messageFlags, SG_HNDL_NONNULL cancellationToken);

SG_HNDL_NULLABLE System_Net_WebSockets_WebSocket_System_Nullable_System_Net_WebSockets_WebSocketCloseStatus___get_CloseStatus_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NULLABLE System_Net_WebSockets_WebSocket_String__get_CloseStatusDescription_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Net_WebSockets_WebSocket_TimeSpan__get_DefaultKeepAliveInterval_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

int32_t System_Net_WebSockets_WebSocket_WebSocketState__get_State_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NULLABLE System_Net_WebSockets_WebSocket_String__get_SubProtocol_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Net_WebSockets_WebSocket_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Net_WebSockets_WebSocketCloseStatus_get_type_handle(void);

int32_t System_Net_WebSockets_WebSocketCloseStatus_get_NormalClosure(void);

int32_t System_Net_WebSockets_WebSocketCloseStatus_get_EndpointUnavailable(void);

int32_t System_Net_WebSockets_WebSocketCloseStatus_get_ProtocolError(void);

int32_t System_Net_WebSockets_WebSocketCloseStatus_get_InvalidMessageType(void);

int32_t System_Net_WebSockets_WebSocketCloseStatus_get_Empty(void);

int32_t System_Net_WebSockets_WebSocketCloseStatus_get_InvalidPayloadData(void);

int32_t System_Net_WebSockets_WebSocketCloseStatus_get_PolicyViolation(void);

int32_t System_Net_WebSockets_WebSocketCloseStatus_get_MessageTooBig(void);

int32_t System_Net_WebSockets_WebSocketCloseStatus_get_MandatoryExtension(void);

int32_t System_Net_WebSockets_WebSocketCloseStatus_get_InternalServerError(void);

TYP System_Net_WebSockets_WebSocketContext_get_type_handle(void);

SG_HNDL_NONNULL System_Net_WebSockets_WebSocketContext_CookieCollection__get_CookieCollection_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Net_WebSockets_WebSocketContext_NameValueCollection__get_Headers_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Net_WebSockets_WebSocketContext_bool__get_IsAuthenticated_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Net_WebSockets_WebSocketContext_bool__get_IsLocal_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Net_WebSockets_WebSocketContext_bool__get_IsSecureConnection_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Net_WebSockets_WebSocketContext_String__get_Origin_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Net_WebSockets_WebSocketContext_Uri__get_RequestUri_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Net_WebSockets_WebSocketContext_String__get_SecWebSocketKey_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Net_WebSockets_WebSocketContext_System_Collections_Generic_IEnumerable_string___get_SecWebSocketProtocols_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Net_WebSockets_WebSocketContext_String__get_SecWebSocketVersion_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NULLABLE System_Net_WebSockets_WebSocketContext_IPrincipal__get_User_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Net_WebSockets_WebSocketContext_WebSocket__get_WebSocket_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Net_WebSockets_WebSocketContext_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Net_WebSockets_WebSocketCreationOptions_get_type_handle(void);

SG_HNDL_NONNULL System_Net_WebSockets_WebSocketCreationOptions_ctor_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

int32_t System_Net_WebSockets_WebSocketCreationOptions_bool__get_IsServer_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Net_WebSockets_WebSocketCreationOptions_void__set_IsServer_0__1__bool(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value);

SG_HNDL_NULLABLE System_Net_WebSockets_WebSocketCreationOptions_String__get_SubProtocol_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Net_WebSockets_WebSocketCreationOptions_void__set_SubProtocol_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE value);

SG_HNDL_NONNULL System_Net_WebSockets_WebSocketCreationOptions_TimeSpan__get_KeepAliveInterval_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Net_WebSockets_WebSocketCreationOptions_void__set_KeepAliveInterval_0__1__TimeSpan(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL value);

SG_HNDL_NULLABLE System_Net_WebSockets_WebSocketCreationOptions_WebSocketDeflateOptions__get_DangerousDeflateOptions_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Net_WebSockets_WebSocketCreationOptions_void__set_DangerousDeflateOptions_0__1__WebSocketDeflateOptions(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NULLABLE value);

SG_HNDL_NONNULL System_Net_WebSockets_WebSocketCreationOptions_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Net_WebSockets_WebSocketDeflateOptions_get_type_handle(void);

SG_HNDL_NONNULL System_Net_WebSockets_WebSocketDeflateOptions_ctor_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

int32_t System_Net_WebSockets_WebSocketDeflateOptions_i32__get_ClientMaxWindowBits_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Net_WebSockets_WebSocketDeflateOptions_void__set_ClientMaxWindowBits_0__1__i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value);

int32_t System_Net_WebSockets_WebSocketDeflateOptions_bool__get_ClientContextTakeover_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Net_WebSockets_WebSocketDeflateOptions_void__set_ClientContextTakeover_0__1__bool(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value);

int32_t System_Net_WebSockets_WebSocketDeflateOptions_i32__get_ServerMaxWindowBits_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Net_WebSockets_WebSocketDeflateOptions_void__set_ServerMaxWindowBits_0__1__i32(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value);

int32_t System_Net_WebSockets_WebSocketDeflateOptions_bool__get_ServerContextTakeover_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

void System_Net_WebSockets_WebSocketDeflateOptions_void__set_ServerContextTakeover_0__1__bool(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, int32_t value);

SG_HNDL_NONNULL System_Net_WebSockets_WebSocketDeflateOptions_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Net_WebSockets_WebSocketError_get_type_handle(void);

int32_t System_Net_WebSockets_WebSocketError_get_Success(void);

int32_t System_Net_WebSockets_WebSocketError_get_InvalidMessageType(void);

int32_t System_Net_WebSockets_WebSocketError_get_Faulted(void);

int32_t System_Net_WebSockets_WebSocketError_get_NativeError(void);

int32_t System_Net_WebSockets_WebSocketError_get_NotAWebSocket(void);

int32_t System_Net_WebSockets_WebSocketError_get_UnsupportedVersion(void);

int32_t System_Net_WebSockets_WebSocketError_get_UnsupportedProtocol(void);

int32_t System_Net_WebSockets_WebSocketError_get_HeaderError(void);

int32_t System_Net_WebSockets_WebSocketError_get_ConnectionClosedPrematurely(void);

int32_t System_Net_WebSockets_WebSocketError_get_InvalidState(void);

TYP System_Net_WebSockets_WebSocketException_get_type_handle(void);

SG_HNDL_NONNULL System_Net_WebSockets_WebSocketException_ctor_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown);

SG_HNDL_NONNULL System_Net_WebSockets_WebSocketException_ctor_0__1__i32(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t nativeError);

SG_HNDL_NONNULL System_Net_WebSockets_WebSocketException_ctor_0__2__i32_Exception(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t nativeError, SG_HNDL_NULLABLE innerException);

SG_HNDL_NONNULL System_Net_WebSockets_WebSocketException_ctor_0__2__i32_String(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t nativeError, SG_HNDL_NULLABLE message);

SG_HNDL_NONNULL System_Net_WebSockets_WebSocketException_ctor_0__1__WebSocketError(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t error);

SG_HNDL_NONNULL System_Net_WebSockets_WebSocketException_ctor_0__2__WebSocketError_Exception(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t error, SG_HNDL_NULLABLE innerException);

SG_HNDL_NONNULL System_Net_WebSockets_WebSocketException_ctor_0__2__WebSocketError_i32(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t error, int32_t nativeError);

SG_HNDL_NONNULL System_Net_WebSockets_WebSocketException_ctor_0__3__WebSocketError_i32_Exception(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t error, int32_t nativeError, SG_HNDL_NULLABLE innerException);

SG_HNDL_NONNULL System_Net_WebSockets_WebSocketException_ctor_0__3__WebSocketError_i32_String(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t error, int32_t nativeError, SG_HNDL_NULLABLE message);

SG_HNDL_NONNULL System_Net_WebSockets_WebSocketException_ctor_0__4__WebSocketError_i32_String_Exception(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t error, int32_t nativeError, SG_HNDL_NULLABLE message, SG_HNDL_NULLABLE innerException);

SG_HNDL_NONNULL System_Net_WebSockets_WebSocketException_ctor_0__2__WebSocketError_String(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t error, SG_HNDL_NULLABLE message);

SG_HNDL_NONNULL System_Net_WebSockets_WebSocketException_ctor_0__3__WebSocketError_String_Exception(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t error, SG_HNDL_NULLABLE message, SG_HNDL_NULLABLE innerException);

SG_HNDL_NONNULL System_Net_WebSockets_WebSocketException_ctor_0__1__String(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE message);

SG_HNDL_NONNULL System_Net_WebSockets_WebSocketException_ctor_0__2__String_Exception(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NULLABLE message, SG_HNDL_NULLABLE innerException);

void System_Net_WebSockets_WebSocketException_void__GetObjectData_0__2__SerializationInfo_StreamingContext(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h, SG_HNDL_NONNULL info, SG_HNDL_NONNULL context);

int32_t System_Net_WebSockets_WebSocketException_i32__get_ErrorCode_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Net_WebSockets_WebSocketException_WebSocketError__get_WebSocketErrorCode_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Net_WebSockets_WebSocketException_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Net_WebSockets_WebSocketMessageFlags_get_type_handle(void);

int32_t System_Net_WebSockets_WebSocketMessageFlags_get_None(void);

int32_t System_Net_WebSockets_WebSocketMessageFlags_get_EndOfMessage(void);

int32_t System_Net_WebSockets_WebSocketMessageFlags_get_DisableCompression(void);

TYP System_Net_WebSockets_WebSocketMessageType_get_type_handle(void);

int32_t System_Net_WebSockets_WebSocketMessageType_get_Text(void);

int32_t System_Net_WebSockets_WebSocketMessageType_get_Binary(void);

int32_t System_Net_WebSockets_WebSocketMessageType_get_Close(void);

TYP System_Net_WebSockets_WebSocketReceiveResult_get_type_handle(void);

SG_HNDL_NONNULL System_Net_WebSockets_WebSocketReceiveResult_ctor_0__3__i32_WebSocketMessageType_bool(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t count, int32_t messageType, int32_t endOfMessage);

SG_HNDL_NONNULL System_Net_WebSockets_WebSocketReceiveResult_ctor_0__5__i32_WebSocketMessageType_bool_System_Nullable_System_Net_WebSockets_WebSocketCloseStatus__String(SG_HNDL_NULLABLE * _Nonnull __thrown, int32_t count, int32_t messageType, int32_t endOfMessage, SG_HNDL_NULLABLE closeStatus, SG_HNDL_NULLABLE closeStatusDescription);

SG_HNDL_NULLABLE System_Net_WebSockets_WebSocketReceiveResult_System_Nullable_System_Net_WebSockets_WebSocketCloseStatus___get_CloseStatus_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NULLABLE System_Net_WebSockets_WebSocketReceiveResult_String__get_CloseStatusDescription_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Net_WebSockets_WebSocketReceiveResult_i32__get_Count_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Net_WebSockets_WebSocketReceiveResult_bool__get_EndOfMessage_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

int32_t System_Net_WebSockets_WebSocketReceiveResult_WebSocketMessageType__get_MessageType_0__0(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __self_h);

SG_HNDL_NONNULL System_Net_WebSockets_WebSocketReceiveResult_cast(SG_HNDL_NULLABLE * _Nonnull __thrown, SG_HNDL_NONNULL __h);

TYP System_Net_WebSockets_WebSocketState_get_type_handle(void);

int32_t System_Net_WebSockets_WebSocketState_get_None(void);

int32_t System_Net_WebSockets_WebSocketState_get_Connecting(void);

int32_t System_Net_WebSockets_WebSocketState_get_Open(void);

int32_t System_Net_WebSockets_WebSocketState_get_CloseSent(void);

int32_t System_Net_WebSockets_WebSocketState_get_CloseReceived(void);

int32_t System_Net_WebSockets_WebSocketState_get_Closed(void);

int32_t System_Net_WebSockets_WebSocketState_get_Aborted(void);


#ifdef __cplusplus
}
#endif

#endif // INCLUDE_System_Net_WebSockets

