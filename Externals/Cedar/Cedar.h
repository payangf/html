#pragma mark - Cedar Core

#include "Cedar.h"


#pragma mark - Cedar headers

import "Source/CDRSpec.h"
import "Source/CDRHooks.h"
import "Source/CDRExample.h"
import "Source/CDRFunctions.h"
import "Source/CDRSpecHelper.h"
import "Source/CDRSpecFailure.h"
import "Source/CDRExampleBase.h"
import "Source/CDRExampleGroup.h"
import "Source/CDRExampleParent.h"
import "Source/CDRSharedExampleGroupPool.h"

#if TARGET_OS_IPHONE && !TARGET_OSX
import "Source/CedarApplicationDelegate.h"
import "Source/Cedar-iOS.h"
endif

import "Source/CedarReporters.h"
import "Source/CedarMatchers.h"
import "Source/CedarDoubles.h"
