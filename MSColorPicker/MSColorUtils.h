//
// MSColorUtils.h
// MSColorPickerDemo
//
// The MIT License (MIT)
//
// Copyright (c) 2014 Maksym Shcheglov
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.

#import <UIKit/UIKit.h>

typedef struct { CGFloat red, green, blue, alpha; }              RGB;
typedef struct { CGFloat hue, saturation, brightness, alpha; }   HSB;

extern CGFloat const MSRGBColorComponentMaxValue;
extern CGFloat const MSAlphaComponentMaxValue;
extern CGFloat const MSHSBColorComponentMaxValue;

/**
 * Converts an RGB color value to HSV.
 * Assumes r, g, and b are contained in the set [0, 1] and
 * returns h, s, and b in the set [0, 1].
 *
 *  @param rgb   The rgb color values
 *  @return The hsb color values
 */
extern HSB MSRGB2HSB(RGB rgb);

/**
 * Converts an HSB color value to RGB.
 * Assumes h, s, and b are contained in the set [0, 1] and
 * returns r, g, and b in the set [0, 255].
 *
 *  @param outRGB   The rgb color values
 *  @return The hsb color values
 */
extern RGB MSHSB2RGB(HSB hsb);

/**
 *  Returns the rgb values of the color components.
 *
 *  @param color The color value.
 *
 *  @return The values of the color components (including alpha).
 */
extern RGB MSRGBColorComponents(UIColor *color);

/**
 *  Converts hex string to the UIColor representation.
 *
 *  @param color The color value.
 *
 *  @return The hex string color value.
 */
extern NSString * MSHexStringFromColor(UIColor *color);

/**
 *  Converts UIColor value to the hex string.
 *
 *  @param hexString The hex string color value.
 *
 *  @return The color value.
 */
extern UIColor * MSColorFromHexString(NSString *hexString);
