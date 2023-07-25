/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */

#include "../../../inc/MarlinConfigPre.h"
#include "../tft_image.h"

#if HAS_GRAPHICAL_TFT

extern const uint8_t refresh_32x32x4[];
const tImage Refresh_32x32x4 = { (void *)refresh_32x32x4, 32, 32, GREYSCALE4 };

const uint8_t refresh_32x32x4[512] = {
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x79, 0x87, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x9F, 0x67, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x79, 0xFF, 0x57, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0xAF, 0xFF, 0x9A, 0x87, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x79, 0xFF, 0xFF, 0xFF, 0xFE, 0x97, 0x78, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0xAF, 0xFF, 0xCE, 0xFF, 0xFD, 0x77, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x77, 0x88, 0x6A, 0xFF, 0x55, 0x5C, 0xFF, 0xD7, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x87, 0xA7, 0x78, 0x86, 0x9F, 0x57, 0x75, 0x8F, 0xFB, 0x78, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x78, 0xFC, 0x78, 0x88, 0x69, 0x67, 0x88, 0x69, 0xFF, 0x78, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x7C, 0xFF, 0x58, 0x88, 0x87, 0x58, 0x88, 0x86, 0xFF, 0xA7, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x7E, 0xFA, 0x58, 0x88, 0x88, 0x88, 0x88, 0x87, 0xBF, 0xE5, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x7F, 0xF8, 0x68, 0x88, 0x88, 0x88, 0x88, 0x87, 0xAF, 0xF5, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x7F, 0xF8, 0x68, 0x88, 0x88, 0x88, 0x88, 0x87, 0xAF, 0xF5, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x7E, 0xFA, 0x68, 0x88, 0x88, 0x88, 0x88, 0x87, 0xCF, 0xE5, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x7C, 0xFF, 0x68, 0x88, 0x87, 0x78, 0x88, 0x77, 0xFF, 0xA5, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x78, 0xFF, 0xA7, 0x88, 0x78, 0xB7, 0x88, 0x77, 0xBF, 0x66, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x87, 0xBF, 0xF9, 0x77, 0x77, 0xFB, 0x78, 0x88, 0x68, 0x57, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x6D, 0xFF, 0xD8, 0x77, 0xFF, 0xB7, 0x78, 0x87, 0x68, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x85, 0xCF, 0xFF, 0xFD, 0xFF, 0xFB, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x57, 0xEF, 0xFF, 0xFF, 0xFF, 0x87, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x55, 0x89, 0xFF, 0xF8, 0x47, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x87, 0x65, 0xFF, 0x75, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0xF7, 0x57, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x78, 0x75, 0x78, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x67, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
  0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88
};

#endif // HAS_GRAPHICAL_TFT
