/* Copyright 2021 Neil Khera
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "Luna65.h"

led_config_t g_led_config = { {
  // Key Matrix to LED Index
  { 67, 66, 65, 64, 63, 62, 61, 60, 59, 58, 57, 56 },
  { 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49 },
  { 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26 },
  { 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21 },
  {  9,  8,  7,  6, 25, 52, 51, 50,  5,  4,  3,  2 },
  { 28, 53, 54, 55, 22, 23,  0,  1 }
}, {
  // LED Index to Physical Position
  { 224,  64 }, { 209, 64 }, { 194, 64 }, { 179, 64 }, { 164, 64 }, { 149, 64 }, {  95, 64 }, {  39, 64 }, {  21, 64 }, {   2, 64 },
  {   9,  48 }, {  34, 48 }, {  49, 48 }, {  63, 48 }, {  78, 48 }, {  93, 48 }, { 108, 48 }, { 123, 48 }, { 138, 48 }, { 153, 48 }, { 168, 48 }, { 189, 48 }, { 209, 48 }, { 224, 48 },
  { 224,  32 }, { 200, 32 }, { 175, 32 }, { 161, 32 }, { 146, 32 }, { 131, 32 }, { 116, 32 }, { 101, 32 }, {  86, 32 }, {  71, 32 }, {  56, 32 }, {  41, 32 }, {  26, 32 }, {   6, 32 },
  {   4,  16 }, {  22, 16 }, {  37, 16 }, {  52, 16 }, {  67, 16 }, {  82, 16 }, {  97, 16 }, { 112, 16 }, { 127, 16 }, { 142, 16 }, { 157, 16 }, { 172, 16 }, { 187, 16 }, { 205, 16 }, { 224, 16 },
  { 224,   0 }, { 202,  0 }, { 179,  0 }, { 164,  0 }, { 149,  0 }, { 134,  0 }, { 119,  0 }, { 105,  0 }, {  90,  0 }, {  75,  0 }, {  60,  0 }, {  45,  0 }, {  30,  0 }, {  15,  0 }, {   0,  0 }
}, {
  // LED Index to Flag
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1
} };