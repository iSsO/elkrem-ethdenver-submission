/* Automatically generated nanopb header */
/* Generated by nanopb-0.4.0-dev at Sun Feb 18 00:49:35 2018. */

#ifndef PB_MESSAGES_PB_H_INCLUDED
#define PB_MESSAGES_PB_H_INCLUDED
#include <pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Enum definitions */
typedef enum _MessageType {
    MessageType_ping = 0,
    MessageType_pong = 1,
    MessageType_init_request = 2,
    MessageType_init_response = 3,
    MessageType_ethereum_address_subscription_request = 4,
    MessageType_ethereum_address_unsubscription_request = 5,
    MessageType_ethereum_all_addresses_unsubscription_request = 6,
    MessageType_ethereum_address_subscription_response = 7,
    MessageType_ethereum_address_balance_request = 8,
    MessageType_ethereum_address_balance_response = 9,
    MessageType_current_block_number_request = 10,
    MessageType_current_block_number_response = 11,
    MessageType_error = 12,
    MessageType_serial_request = 13,
    MessageType_serial_response = 14,
    MessageType_whisper_subscribe = 15,
    MessageType_whisper_unsubscribe_all = 16,
    MessageType_whisper_transmitted_message = 17,
    MessageType_whisper_received_message = 18
} MessageType;
#define _MessageType_MIN MessageType_ping
#define _MessageType_MAX MessageType_whisper_received_message
#define _MessageType_ARRAYSIZE ((MessageType)(MessageType_whisper_received_message+1))

/* Struct definitions */
typedef struct _SerialMessage {
    pb_callback_t data;
/* @@protoc_insertion_point(struct:SerialMessage) */
} SerialMessage;

typedef struct _Error {
    bool has_error_number;
    int32_t error_number;
/* @@protoc_insertion_point(struct:Error) */
} Error;

typedef struct _EthereumAddressBalance {
    bool has_address;
    char address[43];
    bool has_value;
    float value;
/* @@protoc_insertion_point(struct:EthereumAddressBalance) */
} EthereumAddressBalance;

typedef struct _EthereumBlock {
    bool has_blockNumber;
    int32_t blockNumber;
    bool has_blockHash;
    char blockHash[67];
/* @@protoc_insertion_point(struct:EthereumBlock) */
} EthereumBlock;

typedef struct _ReceivedWhisperMessage {
    bool has_from;
    char from[133];
    bool has_topic;
    char topic[11];
    bool has_is_ascii;
    bool is_ascii;
    bool has_payload;
    char payload[255];
    bool has_timestamp;
    int32_t timestamp;
/* @@protoc_insertion_point(struct:ReceivedWhisperMessage) */
} ReceivedWhisperMessage;

typedef struct _TransmittedWhisperMessage {
    bool has_pub_key;
    char pub_key[133];
    bool has_sym_key_password;
    char sym_key_password[100];
    bool has_signature_private_key;
    char signature_private_key[67];
    bool has_topic;
    char topic[11];
    bool has_is_ascii;
    bool is_ascii;
    bool has_payload;
    char payload[255];
/* @@protoc_insertion_point(struct:TransmittedWhisperMessage) */
} TransmittedWhisperMessage;

typedef struct _WhisperSubscribe {
    bool has_private_key;
    char private_key[67];
    bool has_sym_key_password;
    char sym_key_password[100];
    bool has_topic;
    char topic[11];
    bool has_pubkey;
    char pubkey[133];
    bool has_is_ascii;
    bool is_ascii;
/* @@protoc_insertion_point(struct:WhisperSubscribe) */
} WhisperSubscribe;

typedef struct _EthereumAddressSubscription {
    bool has_to_address;
    char to_address[43];
    bool has_from_address;
    char from_address[43];
    bool has_value;
    float value;
    bool has_hash;
    char hash[67];
    bool has_block;
    EthereumBlock block;
/* @@protoc_insertion_point(struct:EthereumAddressSubscription) */
} EthereumAddressSubscription;

/* Default values for struct fields */

/* Initializer values for message structs */
#define EthereumAddressSubscription_init_default {false, "", false, "", false, 0, false, "", false, EthereumBlock_init_default}
#define EthereumAddressBalance_init_default      {false, "", false, 0}
#define EthereumBlock_init_default               {false, 0, false, ""}
#define SerialMessage_init_default               {{{NULL}, NULL}}
#define WhisperSubscribe_init_default            {false, "", false, "", false, "", false, "", false, 0}
#define TransmittedWhisperMessage_init_default   {false, "", false, "", false, "", false, "", false, 0, false, ""}
#define ReceivedWhisperMessage_init_default      {false, "", false, "", false, 0, false, "", false, 0}
#define Error_init_default                       {false, 0}
#define EthereumAddressSubscription_init_zero    {false, "", false, "", false, 0, false, "", false, EthereumBlock_init_zero}
#define EthereumAddressBalance_init_zero         {false, "", false, 0}
#define EthereumBlock_init_zero                  {false, 0, false, ""}
#define SerialMessage_init_zero                  {{{NULL}, NULL}}
#define WhisperSubscribe_init_zero               {false, "", false, "", false, "", false, "", false, 0}
#define TransmittedWhisperMessage_init_zero      {false, "", false, "", false, "", false, "", false, 0, false, ""}
#define ReceivedWhisperMessage_init_zero         {false, "", false, "", false, 0, false, "", false, 0}
#define Error_init_zero                          {false, 0}

/* Field tags (for use in manual encoding/decoding) */
#define SerialMessage_data_tag                   1
#define Error_error_number_tag                   1
#define EthereumAddressBalance_address_tag       1
#define EthereumAddressBalance_value_tag         2
#define EthereumBlock_blockNumber_tag            1
#define EthereumBlock_blockHash_tag              2
#define ReceivedWhisperMessage_from_tag          1
#define ReceivedWhisperMessage_topic_tag         2
#define ReceivedWhisperMessage_is_ascii_tag      3
#define ReceivedWhisperMessage_payload_tag       4
#define ReceivedWhisperMessage_timestamp_tag     5
#define TransmittedWhisperMessage_pub_key_tag    1
#define TransmittedWhisperMessage_sym_key_password_tag 2
#define TransmittedWhisperMessage_signature_private_key_tag 3
#define TransmittedWhisperMessage_topic_tag      4
#define TransmittedWhisperMessage_is_ascii_tag   5
#define TransmittedWhisperMessage_payload_tag    6
#define WhisperSubscribe_private_key_tag         1
#define WhisperSubscribe_sym_key_password_tag    2
#define WhisperSubscribe_topic_tag               3
#define WhisperSubscribe_pubkey_tag              4
#define WhisperSubscribe_is_ascii_tag            5
#define EthereumAddressSubscription_to_address_tag 1
#define EthereumAddressSubscription_from_address_tag 2
#define EthereumAddressSubscription_value_tag    3
#define EthereumAddressSubscription_hash_tag     4
#define EthereumAddressSubscription_block_tag    5

/* Struct field encoding specification for nanopb */
extern const pb_field_t EthereumAddressSubscription_fields[6];
extern const pb_field_t EthereumAddressBalance_fields[3];
extern const pb_field_t EthereumBlock_fields[3];
extern const pb_field_t SerialMessage_fields[2];
extern const pb_field_t WhisperSubscribe_fields[6];
extern const pb_field_t TransmittedWhisperMessage_fields[7];
extern const pb_field_t ReceivedWhisperMessage_fields[6];
extern const pb_field_t Error_fields[2];

/* Maximum encoded size of messages (where known) */
#define EthereumAddressSubscription_size         246
#define EthereumAddressBalance_size              50
#define EthereumBlock_size                       80
/* SerialMessage_size depends on runtime parameters */
#define WhisperSubscribe_size                    322
#define TransmittedWhisperMessage_size           580
#define ReceivedWhisperMessage_size              420
#define Error_size                               11

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define MESSAGES_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
