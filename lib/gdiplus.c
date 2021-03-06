/*
 * Generate GUIDs for GDI+
 *
 * The Image Format GUIDs were generated by loading example images of
 * various types with GdipLoadImageFromFile and then extracting the
 * image format with GdipGetImageRawFormat.
 *
 * The Encoder Parameter GUIDs were taken from this .NET MSDN page:
 * http://msdn.microsoft.com/en-us/library/system.drawing.imaging.encoder.quality.aspx
 *
 * The Frame Dimension GUIDs were generated by loading example multi-frame
 * images (multi-page TIFF; animated GIF) and querying the frame dimension list
 * using GdipImageGetFrameDimensionsList.
 */

/* TODO: find the remaining GUIDs */

#define INITGUID
#include <basetyps.h>

void *_GdipFontFamilyCachedGenericMonospace = 0;
void *_GdipFontFamilyCachedGenericSansSerif = 0;
void *_GdipFontFamilyCachedGenericSerif = 0;
void *_GdipStringFormatCachedGenericDefault = 0;
void *_GdipStringFormatCachedGenericTypographic = 0;

DEFINE_GUID(EncoderChrominanceTable,0xF2E455DC,0x09B3,0x4316,0x82,0x60,0x67,0x6A,0xDA,0x32,0x48,0x1C);
DEFINE_GUID(EncoderColorDepth,0x66087055,0xAD66,0x4C7C,0x9A,0x18,0x38,0xA2,0x31,0x0B,0x83,0x37);
/* EncoderColorSpace missing */
DEFINE_GUID(EncoderCompression,0xE09D739D,0xCCD4,0x44EE,0x8E,0xBA,0x3F,0xBF,0x8B,0xE4,0xFC,0x58);
/* EncoderImageItems missing */
DEFINE_GUID(EncoderLuminanceTable,0xEDB33BCE,0x0266,0x4A77,0xB9,0x04,0x27,0x21,0x60,0x99,0xE7,0x17);
DEFINE_GUID(EncoderQuality,0x1D5BE4B5,0xFA4A,0x452D,0x9C,0xDD,0x5D,0xB3,0x51,0x05,0xE7,0xEB);
DEFINE_GUID(EncoderRenderMethod,0x6D42C53A,0x229A,0x4825,0x8B,0xB7,0x5C,0x99,0xE2,0xB9,0xA8,0xB8);
/* EncoderSaveAsCMYK missing */
DEFINE_GUID(EncoderSaveFlag,0x292266FC,0xAC40,0x47BF,0x8C,0xFC,0xA8,0x5B,0x89,0xA6,0x55,0xDE);
DEFINE_GUID(EncoderScanMethod,0x3A4E2661,0x3109,0x4E56,0x85,0x36,0x42,0xC1,0x56,0xE7,0xDC,0xFA);
DEFINE_GUID(EncoderTransformation,0x8D0EB2D1,0xA58E,0x4EA8,0xAA,0x14,0x10,0x80,0x74,0xB7,0xB6,0xF9);
DEFINE_GUID(EncoderVersion,0x24D18C76,0x814A,0x41A4,0xBF,0x53,0x1C,0x21,0x9C,0xCC,0xF7,0x97);

DEFINE_GUID(ImageFormatBMP,0xB96B3CAB,0x0728,0x11D3,0x9D,0x7B,0x00,0x00,0xF8,0x1E,0xF3,0x2E);
DEFINE_GUID(ImageFormatEMF,0xB96B3CAC,0x0728,0x11D3,0x9D,0x7B,0x00,0x00,0xF8,0x1E,0xF3,0x2E);
/* ImageFormatEXIF missing */
DEFINE_GUID(ImageFormatGIF,0xB96B3CB0,0x0728,0x11D3,0x9D,0x7B,0x00,0x00,0xF8,0x1E,0xF3,0x2E);
DEFINE_GUID(ImageFormatIcon,0xB96B3CB5,0x0728,0x11D3,0x9D,0x7B,0x00,0x00,0xF8,0x1E,0xF3,0x2E);
DEFINE_GUID(ImageFormatJPEG,0xB96B3CAE,0x0728,0x11D3,0x9D,0x7B,0x00,0x00,0xF8,0x1E,0xF3,0x2E);
DEFINE_GUID(ImageFormatMemoryBMP,0xB96B3CAA,0x0728,0x11D3,0x9D,0x7B,0x00,0x00,0xF8,0x1E,0xF3,0x2E);
DEFINE_GUID(ImageFormatPNG,0xB96B3CAF,0x0728,0x11D3,0x9D,0x7B,0x00,0x00,0xF8,0x1E,0xF3,0x2E);
DEFINE_GUID(ImageFormatTIFF,0xB96B3CB1,0x0728,0x11D3,0x9D,0x7B,0x00,0x00,0xF8,0x1E,0xF3,0x2E);
/* ImageFormatUndefined missing */
DEFINE_GUID(ImageFormatWMF,0xB96B3CAD,0x0728,0x11D3,0x9D,0x7B,0x00,0x00,0xF8,0x1E,0xF3,0x2E);

DEFINE_GUID(FrameDimensionPage,0x7462DC86,0x6180,0x4C7E,0x8E,0x3F,0xEE,0x73,0x33,0xA7,0xA4,0x83);
/* FrameDimensionResolution missing */
DEFINE_GUID(FrameDimensionTime,0x6AEDBD6D,0x3FB5,0x418A,0x83,0xA6,0x7F,0x45,0x22,0x9D,0xC8,0x72);

/* BlurEffectGuid missing */
/* BrightnessContrastEffectGuid missing */
/* ColorBalanceEffectGuid missing */
/* ColorCurveEffectGuid missing */
/* ColorLUTEffectGuid missing */
/* ColorMatrixEffectGuid missing */
/* HueSaturationLightnessEffectGuid missing */
/* LevelsEffectGuid missing */
/* RedEyeCorrectionEffectGuid missing */
/* SharpenEffectGuid missing */
/* TintEffectGuid missing */
