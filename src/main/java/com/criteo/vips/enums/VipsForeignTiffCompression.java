/*
  Copyright (c) 2020 Criteo
  Licensed under the Apache License, Version 2.0 (the "License");
  you may not use this file except in compliance with the License.
  You may obtain a copy of the License at
      http://www.apache.org/licenses/LICENSE-2.0
  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.
*/

package com.criteo.vips.enums;

import java.util.HashMap;
import java.util.Map;

public enum VipsForeignTiffCompression {
    // no compression
    NONE(0),
    // jpeg compression
    JPEG(1),
    // deflate (zip) compression
    DEFLATE(2),
    // packbits compression
    PACKBITS(3),
    // fax4 compression
    CCITTFAX4(4),
    // LZW compression
    LZW(5),
    // WEBP compression
    WEBP(6),
    // ZSTD compression
    ZSTD(7),
    LAST(8);

    private int value;
    private static Map map = new HashMap<VipsForeignTiffCompression, Integer>();

    VipsForeignTiffCompression(int i) {
      value = i;
    }

    static {
        for (VipsForeignTiffCompression e : VipsForeignTiffCompression.values()) {
            map.put(e.value, e);
        }
    }

    public static VipsForeignTiffCompression valueOf(int i) {
        return (VipsForeignTiffCompression) map.get(i);
    }

    public int getValue() {
      return value;
    }
}