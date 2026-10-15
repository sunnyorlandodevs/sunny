// ===== initWithImage:  @ 0x1000290df =====

/* Function Stack Size: 0x18 bytes */

ID Image::initWithImage_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  double dVar18;
  undefined1 local_70 [8];
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  objc_super local_40;
  
  uVar4 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  local_40.super_class = (class_t *)PTR_Image_1002ef820;
  local_40.receiver = param_1;
  IVar5 = _objc_msgSendSuper2(&local_40,PTR_s_init_1002e6538);
  puVar1 = PTR__objc_msgSend_10027d560;
  if (IVar5 != 0) {
    (*(code *)PTR__objc_msgSend_10027d560)(IVar5,PTR_s_setImage__1002e6448,uVar4);
    uVar6 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSNumber_1002eeaa0,PTR_s_numberWithInt__1002e73c0,
                              100);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar6);
    uVar6 = *(undefined8 *)(IVar5 + _scale);
    *(undefined8 *)(IVar5 + _scale) = uVar7;
    puVar2 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar6);
    uVar6 = (*(code *)puVar1)(uVar4,PTR_s_TIFFRepresentation_1002e82b8);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    uVar7 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSBitmapImageRep_1002eeeb0,
                              PTR_s_imageRepWithData__1002e82c0,uVar6);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    lVar8 = (*(code *)puVar1)(uVar7,PTR_s_pixelsWide_1002e82c8);
    dVar18 = (double)(*(code *)puVar1)(uVar7,PTR_s_size_1002e66a8);
    dVar18 = (double)(lVar8 * 0x48) / dVar18;
    *(double *)(IVar5 + _PPI) = dVar18;
    uVar9 = (*(code *)puVar1)(dVar18,PTR__OBJC_CLASS___NSNumber_1002eeaa0,
                              PTR_s_numberWithDouble__1002e6d50);
    uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
    _NSLog(&cf_PPI___,uVar9);
    (*(code *)puVar2)(uVar9);
    uVar9 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSNotificationCenter_1002eead0,
                              PTR_s_defaultCenter_1002e65d0);
    uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
    uVar10 = (*(code *)puVar1)(uVar9,PTR_s_rac_addObserverForName_object__1002e82d0,
                               *(undefined8 *)PTR__NSWindowDidBecomeMainNotification_10027d2e0,0);
    uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
    uVar11 = (*(code *)puVar1)(uVar10,PTR_s_map__1002e7290,&PTR___NSConcreteGlobalBlock_10027f1e0);
    uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
    uVar12 = (*(code *)puVar1)(uVar11,PTR_s_replayLast_1002e82d8);
    uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
    puVar2 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar11);
    (*(code *)puVar2)(uVar10);
    (*(code *)puVar2)(uVar9);
    uVar9 = (*(code *)puVar1)(PTR_RACSubscriptingAssignmentTrampoline_1002eeeb8,
                              PTR_s_alloc_1002e64e8);
    uVar9 = (*(code *)puVar1)(uVar9,PTR_s_initWithTarget_nilValue__1002e82e0,IVar5,0);
    puVar3 = PTR_s_stringWithUTF8String__1002e75c0;
    uVar10 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSString_1002eea68,
                               PTR_s_stringWithUTF8String__1002e75c0,"pixelatedImage");
    uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
    uVar11 = _objc_initWeak(local_70,IVar5);
    (*(code *)PTR__objc_retain_10027d598)(uVar11);
    uVar11 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSString_1002eea68,puVar3,"image");
    uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
    uVar13 = (*(code *)PTR__objc_msgSend_10027d560)
                       (IVar5,PTR_s_rac_valuesForKeyPath_observer__1002e82e8,uVar11,IVar5);
    uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
    (*(code *)puVar2)(uVar11);
    (*(code *)puVar2)(IVar5);
    _objc_destroyWeak(local_70);
    puVar2 = PTR_s_flattenMap__1002e7d90;
    local_68 = PTR___NSConcreteStackBlock_10027d330;
    local_60 = 0xc2000000;
    local_5c = 0;
    local_58 = FUN_10002954f;
    local_50 = &DAT_10027f200;
    local_48 = uVar12;
    uVar11 = (*(code *)PTR__objc_retain_10027d598)();
    uVar12 = (*(code *)puVar1)(uVar13,puVar2,&local_68);
    uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
    uVar14 = (*(code *)puVar1)(PTR_RACScheduler_1002eeec0,PTR_s_scheduler_1002e8308);
    uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
    uVar15 = (*(code *)puVar1)(uVar12,PTR_s_deliverOn__1002e8310,uVar14);
    uVar15 = _objc_retainAutoreleasedReturnValue(uVar15);
    uVar16 = (*(code *)puVar1)(uVar15,PTR_s_map__1002e7290,&PTR___NSConcreteGlobalBlock_10027f250);
    uVar16 = _objc_retainAutoreleasedReturnValue(uVar16);
    uVar17 = (*(code *)puVar1)(uVar16,PTR_s_deliverOnMainThread_1002e8328);
    uVar17 = _objc_retainAutoreleasedReturnValue(uVar17);
    (*(code *)puVar1)(uVar9,PTR_s_setObject_forKeyedSubscript__1002e6628,uVar17,uVar10);
    puVar1 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar17);
    (*(code *)puVar1)(uVar16);
    (*(code *)puVar1)(uVar15);
    (*(code *)puVar1)(uVar14);
    (*(code *)puVar1)(uVar12);
    (*(code *)puVar1)(uVar13);
    (*(code *)puVar1)(uVar10);
    (*(code *)puVar1)(uVar9);
    (*(code *)puVar1)(local_48);
    (*(code *)puVar1)(uVar11);
    (*(code *)puVar1)(uVar7);
    (*(code *)puVar1)(uVar6);
  }
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  return IVar5;
}



// ===== dealloc  @ 0x10002981f =====

/* Function Stack Size: 0x10 bytes */

void Image::dealloc(ID param_1,SEL param_2)

{
  objc_super local_20;
  
  _NSLog(&cf_dealloc___,param_1);
  local_20.super_class = (class_t *)PTR_Image_1002ef820;
  local_20.receiver = param_1;
  _objc_msgSendSuper2(&local_20,PTR_s_dealloc_1002e63c0);
  return;
}



// ===== encodeWithCoder:  @ 0x100029862 =====

/* Function Stack Size: 0x18 bytes */

void Image::encodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  double dVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar3 = PTR_s_image_1002e69f0;
  uVar5 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  puVar2 = PTR__objc_msgSend_10027d560;
  uVar6 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,puVar3);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  (*(code *)puVar2)(param_3,PTR_s_encodeObject_forKey__1002e72f0,uVar6,&cf_image);
  puVar3 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar6);
  cVar4 = (*(code *)puVar2)(param_1,PTR_s_hasShadow_1002e8330);
  (*(code *)puVar2)(param_3,PTR_s_encodeBool_forKey__1002e6690,(int)cVar4,&cf_hasShadow);
  uVar6 = (*(code *)puVar2)(param_1,PTR_s_scale_1002e69f8);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  (*(code *)puVar2)(param_3,PTR_s_encodeObject_forKey__1002e72f0,uVar6,&cf_scale);
  (*(code *)puVar3)(uVar6);
  dVar1 = (double)(*(code *)puVar2)(param_1,PTR_s_PPI_1002e7448);
  (*(code *)puVar2)((float)dVar1,param_3,PTR_s_encodeFloat_forKey__1002e8338,&cf_PPI);
  (*(code *)puVar3)(uVar5);
  return;
}



// ===== initWithCoder:  @ 0x10002995e =====

/* Function Stack Size: 0x18 bytes */

ID Image::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  float fVar8;
  objc_super local_40;
  
  uVar4 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  local_40.super_class = (class_t *)PTR_Image_1002ef820;
  local_40.receiver = param_1;
  IVar5 = _objc_msgSendSuper2(&local_40,PTR_s_init_1002e6538);
  puVar1 = PTR__objc_msgSend_10027d560;
  if (IVar5 != 0) {
    uVar6 = (*(code *)PTR__objc_msgSend_10027d560)
                      (uVar4,PTR_s_decodeObjectForKey__1002e7308,&cf_image);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)puVar1)(IVar5,PTR_s_setImage__1002e6448,uVar6);
    puVar2 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar6);
    cVar3 = (*(code *)puVar1)(uVar4,PTR_s_decodeBoolForKey__1002e66a0,&cf_hasShadow);
    (*(code *)puVar1)(IVar5,PTR_s_setHasShadow__1002e7248,(int)cVar3);
    uVar6 = (*(code *)puVar1)(uVar4,PTR_s_decodeObjectForKey__1002e7308,&cf_scale);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar6);
    uVar6 = *(undefined8 *)(IVar5 + _scale);
    *(undefined8 *)(IVar5 + _scale) = uVar7;
    (*(code *)puVar2)(uVar6);
    fVar8 = (float)(*(code *)puVar1)(uVar4,PTR_s_decodeFloatForKey__1002e8340,&cf_PPI);
    *(double *)(IVar5 + _PPI) = (double)fVar8;
  }
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  return IVar5;
}



// ===== pixelatedImage  @ 0x100029a7e =====

/* Function Stack Size: 0x10 bytes */

ID Image::pixelatedImage(ID param_1,SEL param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ID IVar8;
  long lVar9;
  
  lVar2 = _pixelatedImage;
  puVar1 = PTR__objc_msgSend_10027d560;
  lVar9 = *(long *)(param_1 + _pixelatedImage);
  if (lVar9 == 0) {
    uVar3 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_image_1002e69f0);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
    uVar3 = (*(code *)puVar1)(*(undefined8 *)PTR__NSApp_10027d058,PTR_s_mainWindow_1002e7df0);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar3);
    uVar3 = (*(code *)puVar1)(uVar5,PTR_s_graphicsContext_1002e8318);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar3);
    uVar3 = (*(code *)PTR__objc_msgSend_10027d560)
                      (uVar4,PTR_s_pixelateImageWithOnScreenContext_1002e8320,uVar6);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar3);
    uVar3 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = uVar7;
    puVar1 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar3);
    (*(code *)puVar1)(uVar6);
    (*(code *)puVar1)(uVar5);
    (*(code *)puVar1)(uVar4);
    lVar9 = *(long *)(param_1 + lVar2);
  }
  IVar8 = _objc_retainAutoreleaseReturnValue(lVar9);
  return IVar8;
}



// ===== setScale:  @ 0x100029b57 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Function Stack Size: 0x18 bytes */

void Image::setScale_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  double dVar9;
  double in_XMM1_Qa;
  
  uVar4 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  puVar1 = PTR__objc_msgSend_10027d560;
  fVar7 = (float)(*(code *)PTR__objc_msgSend_10027d560)
                           (*(undefined8 *)(param_1 + _scale),PTR_s_floatValue_1002e6d30);
  lVar3 = _image;
  puVar2 = PTR_s_size_1002e66a8;
  fVar7 = fVar7 / _DAT_1001710c0;
  dVar9 = (double)(*(code *)puVar1)(*(undefined8 *)(param_1 + _image),PTR_s_size_1002e66a8);
  (*(code *)puVar1)(*(undefined8 *)(param_1 + lVar3),puVar2);
  fVar8 = (float)(*(code *)puVar1)(uVar4,PTR_s_floatValue_1002e6d30);
  fVar8 = fVar8 / _DAT_1001710c0;
  uVar5 = (*(code *)puVar1)(*(undefined8 *)(param_1 + lVar3),PTR_s_copy_1002e72e8);
  (*(code *)puVar1)((dVar9 / (double)fVar7) * (double)fVar8,
                    (in_XMM1_Qa / (double)fVar7) * (double)fVar8,uVar5,PTR_s_setSize__1002e8348);
  uVar6 = *(undefined8 *)(param_1 + _pixelatedImage);
  *(undefined8 *)(param_1 + _pixelatedImage) = 0;
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar6);
  uVar6 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = uVar5;
  puVar1 = PTR__objc_retain_10027d598;
  uVar5 = (*(code *)PTR__objc_retain_10027d598)(uVar5);
  (*(code *)puVar2)(uVar6);
  uVar6 = *(undefined8 *)(param_1 + _scale);
  *(undefined8 *)(param_1 + _scale) = uVar4;
  uVar4 = (*(code *)puVar1)();
  (*(code *)puVar2)(uVar6);
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar6 = (*(code *)PTR__objc_msgSend_10027d560)
                    (PTR__OBJC_CLASS___NSNotificationCenter_1002eead0,PTR_s_defaultCenter_1002e65d0)
  ;
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  (*(code *)puVar1)(uVar6,PTR_s_postNotificationName_object__1002e65d8,
                    PTR_cf_ImageScaleChangedNotification_1002f88b8,param_1);
  (*(code *)puVar2)(uVar4);
  (*(code *)puVar2)(uVar5);
  (*(code *)puVar2)(uVar6);
  return;
}



// ===== cropToRect:  @ 0x100029cfc =====

/* Function Stack Size: 0x30 bytes */

ID Image::cropToRect_(ID param_1,SEL param_2,CGRect param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID IVar5;
  undefined8 uVar6;
  
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar3 = (*(code *)PTR__objc_msgSend_10027d560)
                    (*(undefined8 *)(param_1 + _image),PTR_s_copy_1002e72e8);
  uVar4 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSImage_1002eea70,PTR_s_alloc_1002e64e8);
  IVar5 = (*(code *)puVar1)(param_3.field1_0x10.field0_0x0._0_4_,param_3.field1_0x10.field1_0x8,
                            uVar4,PTR_s_initWithSize__1002e8350);
  (*(code *)puVar1)(IVar5,PTR_s_lockFocus_1002e8358);
  (*(code *)puVar1)((int)DAT_100170c08,uVar3,PTR_s_drawInRect_fromRect_operation_fr_1002e8360,1);
  (*(code *)puVar1)(IVar5,PTR_s_unlockFocus_1002e8368);
  (*(code *)puVar1)(param_1,PTR_s_setImage__1002e6448,IVar5);
  (*(code *)puVar1)(param_1,PTR_s_setHasShadow__1002e7248,0);
  uVar4 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSNumber_1002eeaa0,PTR_s_numberWithInt__1002e73c0,100)
  ;
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar4 = *(undefined8 *)(param_1 + _scale);
  *(undefined8 *)(param_1 + _scale) = uVar6;
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  uVar4 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSNotificationCenter_1002eead0,
                            PTR_s_defaultCenter_1002e65d0);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)puVar1)(uVar4,PTR_s_postNotificationName_object__1002e65d8,
                    PTR_cf_ImageScaleChangedNotification_1002f88b8,param_1);
  (*(code *)puVar2)(uVar4);
  (*(code *)puVar2)(uVar3);
  _objc_autoreleaseReturnValue(IVar5);
  return IVar5;
}



// ===== setImage:  @ 0x100029ea9 =====

/* Function Stack Size: 0x18 bytes */

void Image::setImage_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar1 = *(undefined8 *)(param_1 + _pixelatedImage);
  *(undefined8 *)(param_1 + _pixelatedImage) = 0;
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar1);
  uVar1 = *(undefined8 *)(param_1 + _image);
  *(undefined8 *)(param_1 + _image) = uVar3;
  (*(code *)puVar2)(uVar1);
  return;
}



// ===== image  @ 0x100029efd =====

/* Function Stack Size: 0x10 bytes */

ID Image::image(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + _image);
}



// ===== hasShadow  @ 0x100029f0e =====

/* Function Stack Size: 0x10 bytes */

char Image::hasShadow(ID param_1,SEL param_2)

{
  return *(char *)(param_1 + _hasShadow);
}



// ===== setHasShadow:  @ 0x100029f1f =====

/* Function Stack Size: 0x14 bytes */

void Image::setHasShadow_(ID param_1,SEL param_2,char param_3)

{
  *(char *)(param_1 + _hasShadow) = param_3;
  return;
}



// ===== scale  @ 0x100029f2f =====

/* Function Stack Size: 0x10 bytes */

ID Image::scale(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + _scale);
}



// ===== PPI  @ 0x100029f40 =====

/* Function Stack Size: 0x10 bytes */

double Image::PPI(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + _PPI);
}



// ===== setPPI:  @ 0x100029f52 =====

/* Function Stack Size: 0x18 bytes */

void Image::setPPI_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + _PPI) = param_3;
  return;
}



// ===== setPixelatedImage:  @ 0x100029f64 =====

/* Function Stack Size: 0x18 bytes */

void Image::setPixelatedImage_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = _pixelatedImage;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = uVar3;
  (*(code *)PTR__objc_release_10027d590)(uVar1);
  return;
}



// ===== .cxx_destruct  @ 0x100029f90 =====

/* Function Stack Size: 0x10 bytes */

void Image::_cxx_destruct(ID param_1,SEL param_2)

{
  _objc_storeStrong(_pixelatedImage + param_1,0);
  _objc_storeStrong(_scale + param_1,0);
  _objc_storeStrong(param_1 + _image,0);
  return;
}



