/**
* @file       MMOCoin.h
*
* @brief      Exceptions and constants for MMOCoin
*
* @author     Ian Miers, Christina Garman and Matthew Green
* @date       June 2013
*
* @copyright  Copyright 2013 Ian Miers, Christina Garman and Matthew Green
* @license    This project is released under the MIT license.
**/

#ifndef MMOCOIN_H_
#define MMOCOIN_H_

#include <stdexcept>

#define MMOCOIN_DEFAULT_SECURITYLEVEL      80
#define MMOCOIN_MIN_SECURITY_LEVEL         80
#define MMOCOIN_MAX_SECURITY_LEVEL         80
#define ACCPROOF_KPRIME                     160
#define ACCPROOF_KDPRIME                    128
#define MAX_COINMINT_ATTEMPTS               10000
#define MMOCOIN_MINT_PRIME_PARAM           20
#define MMOCOIN_VERSION_STRING             "0.11"
#define MMOCOIN_VERSION_INT                11
#define MMOCOIN_PROTOCOL_VERSION           "1"
#define HASH_OUTPUT_BITS                    256
#define MMOCOIN_COMMITMENT_EQUALITY_PROOF  "COMMITMENT_EQUALITY_PROOF"
#define MMOCOIN_ACCUMULATOR_PROOF          "ACCUMULATOR_PROOF"
#define MMOCOIN_SERIALNUMBER_PROOF         "SERIALNUMBER_PROOF"

// Activate multithreaded mode for proof verification

//#define MMOCOIN_THREADING 1

// Uses a fast technique for coin generation. Could be more vulnerable
// to timing attacks. Turn off if an attacker can measure coin minting time.
#define MMOCOIN_FAST_MINT 1

// Errors thrown by the MMOCoin library

class MMOCoinException : public std::runtime_error
{
public:
   explicit MMOCoinException(const std::string& str) : std::runtime_error(str) {}
};

#include "../serialize.h"
#include "../bignum.h"
#include "../util.h"
#include "Params.h"
#include "Coin.h"
#include "Commitment.h"
#include "Accumulator.h"
#include "AccumulatorProofOfKnowledge.h"
#include "CoinSpend.h"
#include "SerialNumberSignatureOfKnowledge.h"
#include "ParamGeneration.h"

#endif /* MMOCOIN_H_ */
