/*
	File:		QTKit.h

	Copyright:	(c)2004-2012 by Apple Inc., all rights reserved.

*/

/*
  QTKit has been deprecated in 10.9.

  AVFoundation and AVKit are the frameworks recommended for all new development 
  involving time-based audiovisual media on OS X.  In order to transition your 
  project from QTKit to AVFoundation please refer to:
  "Technical Note TN2300 Transitioning QTKit code to AV Foundation".
*/

#import <AvailabilityMacros.h>

#import "QTKitDefines.h"
#import "QTError.h"
#import "QTDataReference.h"
#import "QTMovie.h"
#import "QTTrack.h"
#import "QTMedia.h"
#import "QTMovieView.h"
#import "QTMovieLayer.h"
#import "QTTime.h"
#import "QTTimeRange.h"
#import "QTUtilities.h"
#import "QTCaptureSession.h"
#import "QTCaptureInput.h"
#import "QTCaptureOutput.h"
#import "QTCaptureConnection.h"
#import "QTCaptureDeviceInput.h"
#import "QTCaptureFileOutput.h"
#import "QTCaptureMovieFileOutput.h"
#import "QTCaptureView.h"
#import "QTCaptureDevice.h"
#import "QTCaptureVideoPreviewOutput.h"
#import "QTCaptureAudioPreviewOutput.h"
#import "QTCaptureDecompressedVideoOutput.h"
#import "QTCaptureDecompressedAudioOutput.h"
#import "QTFormatDescription.h"
#import "QTSampleBuffer.h"
#import "QTCompressionOptions.h"
#import "QTCaptureLayer.h"
#import "QTMetadataItem.h"
#import "QTMovieModernizer.h"
