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
  { 5 },
  { 4 },
  { 3 },
  { 2 },
  { 1 },
  { 0 }
}, {
  // LED Index to Physical Position
  { 224, 64 },
  { 224, 60 },
  { 224, 56 },
  { 200, 44 },
  { 200, 32 },
  { 200, 20 }
}, {
  // LED Index to Flag
  1,
  1,
  1,
  1,
  1,
  1
} };