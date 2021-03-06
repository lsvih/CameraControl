/*
	File:		QTUtilities.h

	Copyright:	(c)2004-2012 by Apple Inc., all rights reserved.

*/

/*
  QTKit has been deprecated in 10.9.

  AVFoundation and AVKit are the frameworks recommended for all new development 
  involving time-based audiovisual media on OS X.  In order to transition your 
  project from QTKit to AVFoundation please refer to:
  "Technical Note TN2300 Transitioning QTKit code to AV Foundation".
*/

#import <Foundation/Foundation.h>
#import "QTKitDefines.h"

	// helper functions
QTKIT_EXTERN NSString *QTStringForOSType (OSType type)				AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3;
QTKIT_EXTERN OSType QTOSTypeForString (NSString *string)			AVAILABLE_QTKIT_VERSION_7_0_AND_LATER_BUT_DEPRECATED_IN_QTKIT_VERSION_7_7_3;
