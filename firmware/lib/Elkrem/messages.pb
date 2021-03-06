
�
messages.proto"�
EthereumAddressSubscription

to_address (	R	toAddress!
from_address (	RfromAddress
value (Rvalue
hash (	Rhash$
block (2.EthereumBlockRblock"H
EthereumAddressBalance
address (	Raddress
value (Rvalue"O
EthereumBlock 
blockNumber (RblockNumber
	blockHash (	R	blockHash"#
SerialMessage
data (Rdata"�
WhisperSubscribe
private_key (	R
privateKey(
sym_key_password (	RsymKeyPassword
topic (	Rtopic
pubkey (	Rpubkey
is_ascii (RisAscii"�
TransmittedWhisperMessage
pub_key (	RpubKey(
sym_key_password (	RsymKeyPassword2
signature_private_key (	RsignaturePrivateKey
topic (	Rtopic
is_ascii (RisAscii
payload (	Rpayload"�
ReceivedWhisperMessage
from (	Rfrom
topic (	Rtopic
is_ascii (RisAscii
payload (	Rpayload
	timestamp (R	timestamp"*
Error!
error_number (RerrorNumber*�
MessageType
ping 
pong
init_request
init_response)
%ethereum_address_subscription_request+
'ethereum_address_unsubscription_request1
-ethereum_all_addresses_unsubscription_request*
&ethereum_address_subscription_response$
 ethereum_address_balance_request%
!ethereum_address_balance_response	 
current_block_number_request
!
current_block_number_response	
error
serial_request
serial_response
whisper_subscribe
whisper_unsubscribe_all
whisper_transmitted_message
whisper_received_message