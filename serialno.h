#ifndef DFUBOOTLOADER_SERIALNO_H
#define DFUBOOTLOADER_SERIALNO_H

#include <stdint.h>
#include <stdbool.h>

uint16_t readSerialNumberBase64Utf16( uint16_t* const buffer, const uint16_t bufferLength );

#endif
