// ===== encodeWithCoder:  @ 0x100050988 =====

/* Function Stack Size: 0x18 bytes */

void Text::encodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  double dVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  objc_super local_40;
  
  puVar2 = PTR_s_encodeWithCoder__1002e6688;
  local_40.super_class = (class_t *)PTR_Text_1002ef900;
  local_40.receiver = param_1;
  uVar5 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  _objc_msgSendSuper2(&local_40,puVar2,uVar5);
  puVar2 = PTR__objc_msgSend_10027d560;
  uVar6 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_fontName_1002e9550);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  (*(code *)puVar2)(param_3,PTR_s_encodeObject_forKey__1002e72f0,uVar6,PTR_cf_fontName_1002f8bf8);
  (*(code *)PTR__objc_release_10027d590)(uVar6);
  dVar1 = (double)(*(code *)puVar2)(param_1,PTR_s_fontSize_1002e9558);
  (*(code *)puVar2)((float)dVar1,param_3,PTR_s_encodeFloat_forKey__1002e8338,
                    PTR_cf_fontSize_1002f8bf0);
  cVar4 = (*(code *)puVar2)(param_1,PTR_s_isItalic_1002e9560);
  puVar3 = PTR_s_encodeBool_forKey__1002e6690;
  (*(code *)puVar2)(param_3,PTR_s_encodeBool_forKey__1002e6690,(int)cVar4,PTR_cf_isItalic_1002f8c08)
  ;
  cVar4 = (*(code *)puVar2)(param_1,PTR_s_isBold_1002e9568);
  (*(code *)puVar2)(param_3,puVar3,(int)cVar4,PTR_cf_isBold_1002f8c10);
  cVar4 = (*(code *)puVar2)(param_1,PTR_s_hasOutline_1002e9570);
  (*(code *)puVar2)(param_3,puVar3,(int)cVar4,PTR_cf_hasOutline_1002f8c00);
  uVar6 = (*(code *)puVar2)(param_1,PTR_s_textStorage_1002e9578);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  uVar7 = (*(code *)puVar2)(uVar6,PTR_s_string_1002e9580);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  (*(code *)puVar2)(param_3,PTR_s_encodeObject_forKey__1002e72f0,uVar7,PTR_cf_contents_1002f8c30);
  puVar3 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar7);
  (*(code *)puVar3)(uVar6);
  puVar2 = PTR__objc_msgSend_10027d560;
  cVar4 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_hasUserSpecifiedWidth_1002e9588);
  (*(code *)puVar2)(param_3,PTR_s_encodeBool_forKey__1002e6690,(int)cVar4,
                    PTR_cf_hasUserSpecifiedWidth_1002f8c28);
  uVar6 = (*(code *)puVar2)(param_1,PTR_s_textContainerWidth_1002e9590);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  (*(code *)puVar2)(param_3,PTR_s_encodeObject_forKey__1002e72f0,uVar6,
                    PTR_cf_textContainerWidth_1002f8c20);
  (*(code *)puVar3)(uVar5);
  (*(code *)puVar3)(uVar6);
  return;
}



// ===== initWithCoder:  @ 0x100050b6f =====

/* Function Stack Size: 0x18 bytes */

ID Text::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  undefined8 uVar5;
  ID IVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  objc_super local_40;
  
  uVar5 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  local_40.super_class = (class_t *)PTR_Text_1002ef900;
  local_40.receiver = param_1;
  IVar6 = _objc_msgSendSuper2(&local_40,PTR_s_initWithCoder__1002e6698,uVar5);
  puVar1 = PTR__objc_msgSend_10027d560;
  if (IVar6 != 0) {
    uVar7 = (*(code *)PTR__objc_msgSend_10027d560)(IVar6,PTR_s_textStorage_1002e9578);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    uVar8 = (*(code *)puVar1)(uVar7,PTR_s_mutableString_1002e9598);
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
    uVar9 = (*(code *)puVar1)(uVar5,PTR_s_decodeObjectForKey__1002e7308,PTR_cf_contents_1002f8c30);
    uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
    (*(code *)puVar1)(uVar8,PTR_s_setString__1002e95a0,uVar9);
    puVar2 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar9);
    (*(code *)puVar2)(uVar8);
    (*(code *)puVar2)(uVar7);
    puVar1 = PTR__objc_msgSend_10027d560;
    uVar7 = (*(code *)PTR__objc_msgSend_10027d560)
                      (uVar5,PTR_s_decodeObjectForKey__1002e7308,PTR_cf_fontName_1002f8bf8);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    (*(code *)puVar1)(IVar6,PTR_s_setFontName__1002e95a8,uVar7);
    (*(code *)puVar2)(uVar7);
    fVar10 = (float)(*(code *)puVar1)(uVar5,PTR_s_decodeFloatForKey__1002e8340,
                                      PTR_cf_fontSize_1002f8bf0);
    (*(code *)puVar1)((double)fVar10,IVar6,PTR_s_setFontSize__1002e95b0);
    puVar3 = PTR_s_decodeBoolForKey__1002e66a0;
    cVar4 = (*(code *)puVar1)(uVar5,PTR_s_decodeBoolForKey__1002e66a0,PTR_cf_isItalic_1002f8c08);
    (*(code *)puVar1)(IVar6,PTR_s_setIsItalic__1002e95b8,(int)cVar4);
    cVar4 = (*(code *)puVar1)(uVar5,puVar3,PTR_cf_isBold_1002f8c10);
    (*(code *)puVar1)(IVar6,PTR_s_setIsBold__1002e95c0,(int)cVar4);
    cVar4 = (*(code *)puVar1)(uVar5,puVar3,PTR_cf_hasOutline_1002f8c00);
    (*(code *)puVar1)(IVar6,PTR_s_setHasOutline__1002e95c8,(int)cVar4);
    cVar4 = (*(code *)puVar1)(uVar5,puVar3,PTR_cf_hasUserSpecifiedWidth_1002f8c28);
    (*(code *)puVar1)(IVar6,PTR_s_setHasUserSpecifiedWidth__1002e95d0,(int)cVar4);
    uVar7 = (*(code *)puVar1)(uVar5,PTR_s_decodeObjectForKey__1002e7308,
                              PTR_cf_textContainerWidth_1002f8c20);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    (*(code *)puVar1)(IVar6,PTR_s_setTextContainerWidth__1002e95d8,uVar7);
    (*(code *)puVar2)(uVar7);
  }
  (*(code *)PTR__objc_release_10027d590)(uVar5);
  return IVar6;
}



// ===== zIndex  @ 0x100050eb2 =====

/* Function Stack Size: 0x10 bytes */

long_long Text::zIndex(ID param_1,SEL param_2)

{
  return 4;
}



// ===== cursorForHandle:  @ 0x100050ed6 =====

/* Function Stack Size: 0x18 bytes */

ID Text::cursorForHandle_(ID param_1,SEL param_2,long_long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID IVar4;
  undefined *puVar5;
  
  puVar1 = PTR__objc_msgSend_10027d560;
  if (param_3 == 0xffffffffffffffff) {
    uVar2 = (*(code *)PTR__objc_msgSend_10027d560)
                      (PTR__OBJC_CLASS___NSCursor_1002eeed0,PTR_s_openHandCursor_1002e8468);
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  }
  else {
    if (param_3 < 2) {
      uVar2 = (*(code *)PTR__objc_msgSend_10027d560)
                        (PTR_Cursors_1002eeed8,PTR_s_sharedInstance_1002e65b8);
      uVar3 = _objc_retainAutoreleasedReturnValue(uVar2);
      puVar5 = PTR_s_resizeLeftRight_1002e95e8;
    }
    else {
      uVar2 = 0;
      if (param_3 != 2) goto LAB_100050f7f;
      uVar2 = (*(code *)PTR__objc_msgSend_10027d560)
                        (PTR_Cursors_1002eeed8,PTR_s_sharedInstance_1002e65b8);
      uVar3 = _objc_retainAutoreleasedReturnValue(uVar2);
      puVar5 = PTR_s_resizeTopBottom_1002e95f0;
    }
    uVar2 = (*(code *)puVar1)(uVar3,puVar5);
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    (*(code *)PTR__objc_release_10027d590)(uVar3);
  }
LAB_100050f7f:
  IVar4 = _objc_autoreleaseReturnValue(uVar2);
  return IVar4;
}



// ===== scaleTo:  @ 0x100050f8b =====

/* Function Stack Size: 0x18 bytes */

void Text::scaleTo_(ID param_1,SEL param_2,double param_3)

{
  undefined *puVar1;
  undefined *op;
  undefined *op_00;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  double *pdVar5;
  double *pdVar6;
  long lVar7;
  byte bVar8;
  double dVar9;
  double extraout_XMM0_Qb;
  undefined8 uVar10;
  double adStack_2a8 [17];
  double local_220;
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  double local_1f0 [16];
  double local_170 [16];
  undefined local_f0 [24];
  double local_d8;
  undefined local_d0 [48];
  double local_a0;
  double local_98;
  undefined local_50 [24];
  double local_38;
  
  op_00 = PTR_s_bounds_1002e6938;
  bVar8 = 0;
  local_208 = param_3;
  _objc_msgSend_stret(local_50,param_1,PTR_s_bounds_1002e6938);
  op = PTR_s_handles_1002e6518;
  _objc_msgSend_stret(local_d0,param_1,PTR_s_handles_1002e6518);
  puVar1 = PTR__objc_msgSend_10027d560;
  local_220 = local_a0;
  local_218 = local_98;
  dVar9 = (double)(*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_fontSize_1002e9558);
  (*(code *)puVar1)(dVar9 * local_208,param_1,PTR_s_setFontSize__1002e95b0);
  (*(code *)puVar1)(param_1,PTR_s_setSizeToMatchContents_1002e95f8);
  _objc_msgSend_stret(local_f0,param_1,op_00);
  dVar9 = local_208 * local_218;
  local_208 = local_220 * local_208 - local_220;
  local_218 = ((local_d8 - local_38) + dVar9) - local_218;
  uVar2 = (*(code *)puVar1)(param_1,PTR_s_canvasView_1002e6c08);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  uVar10 = 0;
  local_208 = (double)(*(code *)puVar1)(local_208,uVar2,PTR_s_alignToNearestPixel__1002e93c0);
  uStack_210 = uVar10;
  dStack_200 = extraout_XMM0_Qb;
  (*(code *)PTR__objc_release_10027d590)(uVar2);
  _objc_msgSend_stret((undefined *)local_170,param_1,op);
  uVar2 = (*(code *)puVar1)(param_1,PTR_s_class_1002e6a28);
  lVar3 = (*(code *)puVar1)(uVar2,PTR_s_numberOfHandles_1002e8488);
  if (0 < lVar3) {
    dStack_200 = local_218;
    lVar7 = 0;
    lVar3 = 0;
    do {
      _objc_msgSend_stret((undefined *)local_1f0,param_1,PTR_s_handles_1002e6518);
      dVar9 = *(double *)((long)local_1f0 + lVar7 + 8);
      *(double *)((long)local_170 + lVar7) = *(double *)((long)local_1f0 + lVar7) + local_208;
      *(double *)((long)local_170 + lVar7 + 8) = dVar9 + dStack_200;
      lVar3 = lVar3 + 1;
      uVar2 = (*(code *)puVar1)(param_1,PTR_s_class_1002e6a28);
      lVar4 = (*(code *)puVar1)(uVar2,PTR_s_numberOfHandles_1002e8488);
      lVar7 = lVar7 + 0x10;
    } while (lVar3 < lVar4);
  }
  pdVar5 = local_170;
  pdVar6 = adStack_2a8;
  for (lVar3 = 0x10; lVar3 != 0; lVar3 = lVar3 + -1) {
    *pdVar6 = *pdVar5;
    pdVar5 = pdVar5 + (ulong)bVar8 * -2 + 1;
    pdVar6 = pdVar6 + (ulong)bVar8 * -2 + 1;
  }
  (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_setHandles__1002e8480);
  return;
}



// ===== resizeByMovingHandle:withDelta:toLocation:  @ 0x1000511bd =====

/* WARNING: Removing unreachable block (ram,0x0001000514e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Function Stack Size: 0x38 bytes */

long_long Text::resizeByMovingHandle_withDelta_toLocation_
                    (ID param_1,SEL param_2,long_long param_3,CGPoint param_4,CGPoint param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  double *pdVar7;
  double *pdVar8;
  byte bVar9;
  undefined1 auVar10 [16];
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double adStack_548 [16];
  double local_4c8;
  double dStack_4c0;
  double local_4b8;
  undefined8 uStack_4b0;
  double local_4a8;
  double local_4a0;
  double local_498;
  double local_490;
  double local_488;
  undefined8 uStack_480;
  double local_470;
  double local_468;
  double local_460;
  double local_458;
  undefined8 uStack_450;
  double local_440;
  double local_438;
  double local_430;
  double local_428;
  double local_420;
  double local_418;
  double dStack_410;
  double local_408;
  double local_400;
  double local_3f8;
  double local_3f0;
  double local_3e8;
  double local_3e0;
  double local_3d8;
  double local_3d0;
  double local_3c8;
  undefined local_3b0 [128];
  undefined local_330 [16];
  double local_320;
  double local_2b0 [16];
  undefined local_230 [80];
  double local_1e0;
  double local_1d8;
  undefined local_1b0 [64];
  double local_170;
  double local_168;
  undefined local_130 [96];
  double local_d0;
  double local_c8;
  undefined local_b0 [48];
  double local_80;
  double local_78;
  
  puVar2 = PTR_s_handles_1002e6518;
  local_468 = param_4.field1_0x8;
  local_4b8 = param_4.field0_0x0;
  bVar9 = 0;
  _objc_msgSend_stret(local_b0,param_1,PTR_s_handles_1002e6518,local_4b8,local_468,
                      param_5.field0_0x0,param_5.field1_0x8);
  local_490 = local_80;
  local_488 = local_78;
  _objc_msgSend_stret(local_130,param_1,puVar2);
  local_4a0 = local_d0;
  local_498 = local_c8;
  _objc_msgSend_stret(local_1b0,param_1,puVar2);
  local_470 = local_170;
  local_458 = local_168;
  _objc_msgSend_stret(local_230,param_1,puVar2);
  local_440 = local_1e0;
  local_438 = local_1d8;
  _objc_msgSend_stret((undefined *)local_2b0,param_1,puVar2);
  local_460 = local_2b0[0];
  _objc_msgSend_stret(local_330,param_1,puVar2);
  local_4a8 = local_320;
  _objc_msgSend_stret(local_3b0,param_1,puVar2);
  puVar1 = PTR__objc_msgSend_10027d560;
  dVar12 = local_4a0;
  if (param_3 < 7) {
    if ((0x49UL >> (param_3 & 0x3f) & 1) == 0) {
      if ((0x32UL >> (param_3 & 0x3f) & 1) != 0) {
        local_470 = local_470 + local_4b8;
        local_440 = local_440 + local_4b8;
        local_4a8 = local_4a8 + local_4b8;
      }
    }
    else {
      local_490 = local_490 + local_4b8;
      local_460 = local_460 + local_4b8;
      dVar12 = local_4a0 + local_4b8;
    }
  }
  if (local_490 <= local_470) {
    local_4a0 = local_460;
    dVar11 = dVar12;
    dVar13 = local_498;
    dVar14 = local_488;
    local_498 = local_438;
    dVar15 = local_470;
    local_488 = local_458;
    local_460 = local_4a8;
  }
  else {
    if ((DAT_1002f9fb8 & 1) == 0) {
      _DAT_1002f9f80 = 1;
      uRam00000001002f9f88 = 0;
      _DAT_1002f9f98 = _DAT_1001713a0;
      uRam00000001002f9fa0 = _UNK_1001713a8;
      _DAT_1002f9fa8 = _DAT_1001713b0;
      uRam00000001002f9fb0 = _UNK_1001713b8;
      DAT_1002f9fb8 = 1;
    }
    param_3 = *(long_long *)(&DAT_1002f9f80 + param_3 * 8);
    dVar11 = local_440;
    dVar13 = local_438;
    dVar14 = local_458;
    dVar15 = local_490;
    local_440 = dVar12;
    local_490 = local_470;
    local_4a0 = local_4a8;
  }
  if (param_3 - 3 < 2) {
    dVar14 = dVar14 + local_468;
    local_458 = local_488 + local_468;
  }
  else {
    local_458 = local_488;
    if (param_3 - 5 < 2) {
      local_498 = local_498 + local_468;
      dVar13 = dVar13 + local_468;
    }
  }
  dVar12 = local_490;
  local_470 = local_498;
  dVar16 = dVar15;
  dVar3 = dVar13;
  local_438 = dVar14;
  if (dVar13 < dVar14) {
    if ((DAT_1002f9ff8 & 1) == 0) {
      _DAT_1002f9fc0 = 0;
      uRam00000001002f9fc8 = 1;
      _DAT_1002f9fd8 = _DAT_1001713b0;
      uRam00000001002f9fe0 = _UNK_1001713b8;
      _DAT_1002f9fe8 = _DAT_1001713a0;
      uRam00000001002f9ff0 = _UNK_1001713a8;
      DAT_1002f9ff8 = 1;
    }
    param_3 = *(long_long *)(&DAT_1002f9fc0 + param_3 * 8);
    dVar12 = dVar11;
    local_470 = local_458;
    dVar11 = local_490;
    local_458 = local_498;
    dVar16 = local_440;
    local_440 = dVar15;
    dVar3 = dVar14;
    local_438 = dVar13;
  }
  local_490 = dVar3;
  uStack_450 = 0;
  uStack_480 = 0;
  local_4b8 = local_440 - dVar11;
  local_4a8 = local_440;
  local_498 = dVar16;
  local_488 = dVar11;
  if (param_3 < 2) {
    dVar11 = local_470 - local_458;
    uStack_450 = 0;
    uStack_4b0 = 0;
    local_4c8 = dVar11;
    local_440 = dVar12;
    (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_naturalSizeForTextContainerWidth_1002e9600)
    ;
    dVar12 = (dVar11 - local_4c8) * DAT_100170dc0;
    dVar12 = dVar12 + dVar12;
    local_438 = local_438 - dVar12;
    local_458 = local_458 - dVar12;
    uVar4 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSNumber_1002eeaa0,PTR_s_numberWithDouble__1002e6d50
                             );
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    (*(code *)puVar1)(param_1,PTR_s_setTextContainerWidth__1002e95d8,uVar4);
    (*(code *)PTR__objc_release_10027d590)(uVar4);
    (*(code *)puVar1)(param_1,PTR_s_setHasUserSpecifiedWidth__1002e95d0,1);
    dVar12 = local_440;
  }
  local_440 = dVar12;
  local_4c8 = local_458 + (local_470 - local_458) * _DAT_1001712a0;
  dStack_4c0 = local_488 + local_4b8 * _UNK_1001712a8;
  local_4b8 = (local_490 - local_438) * DAT_100170dc0 + local_438;
  _objc_msgSend_stret((undefined *)&local_430,param_1,puVar2);
  local_430 = local_4a0;
  local_428 = local_4b8;
  local_420 = local_460;
  local_400 = local_440;
  local_3f8 = local_438;
  local_3f0 = local_498;
  local_3e8 = local_458;
  local_3e0 = local_4a8;
  local_3d8 = local_470;
  local_3d0 = local_488;
  local_3c8 = local_490;
  local_418 = local_4c8;
  dStack_410 = dStack_4c0;
  local_408 = local_438;
  pdVar7 = &local_430;
  pdVar8 = adStack_548;
  for (lVar6 = 0x10; lVar6 != 0; lVar6 = lVar6 + -1) {
    *pdVar8 = *pdVar7;
    pdVar7 = pdVar7 + (ulong)bVar9 * -2 + 1;
    pdVar8 = pdVar8 + (ulong)bVar9 * -2 + 1;
  }
  (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_setHandles__1002e8480);
  puVar1 = PTR__objc_msgSend_10027d560;
  if (param_3 == 2) {
    uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_numberOfLines_1002e9608);
    auVar10._8_4_ = (int)((ulong)uVar4 >> 0x20);
    auVar10._0_8_ = uVar4;
    auVar10._12_4_ = _UNK_100170ee4;
    local_468 = local_468 /
                (((double)CONCAT44(_DAT_100170ee0,(int)uVar4) - _DAT_100170ef0) +
                (auVar10._8_8_ - _UNK_100170ef8));
    dVar12 = (double)(*(code *)puVar1)(param_1,PTR_s_fontSize_1002e9558);
    (*(code *)puVar1)(dVar12 - local_468,param_1,PTR_s_setFontSize__1002e95b0);
    uVar4 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSUserDefaults_1002eeab0,
                              PTR_s_standardUserDefaults_1002e6570);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1002eeaa0;
    (*(code *)puVar1)(param_1,PTR_s_fontSize_1002e9558);
    uVar5 = (*(code *)puVar1)(puVar2,PTR_s_numberWithDouble__1002e6d50);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)puVar1)(uVar4,PTR_s_setObject_forKey__1002e65b0,uVar5,PTR_cf_fontSize_1002f8bf0);
    puVar1 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar5);
    (*(code *)puVar1)(uVar4);
  }
  return param_3;
}



// ===== translateWithDelta:toLocation:  @ 0x100051909 =====

/* Function Stack Size: 0x30 bytes */

void Text::translateWithDelta_toLocation_(ID param_1,SEL param_2,CGPoint param_3,CGPoint param_4)

{
  double dVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  double *pdVar6;
  double *pdVar7;
  long lVar8;
  byte bVar9;
  double in_XMM0_Qb;
  double adStack_1d8 [16];
  double local_158;
  double local_148;
  double dStack_140;
  double local_130 [16];
  double local_b0 [16];
  
  local_158 = param_3.field1_0x8;
  local_148 = param_3.field0_0x0;
  bVar9 = 0;
  dStack_140 = in_XMM0_Qb;
  _objc_msgSend_stret((undefined *)local_b0,param_1,PTR_s_handles_1002e6518,local_148,local_158,
                      param_4.field0_0x0,param_4.field1_0x8);
  puVar2 = PTR__objc_msgSend_10027d560;
  uVar3 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_class_1002e6a28);
  lVar4 = (*(code *)puVar2)(uVar3,PTR_s_numberOfHandles_1002e8488);
  if (0 < lVar4) {
    dStack_140 = local_158;
    lVar8 = 0;
    lVar4 = 0;
    do {
      _objc_msgSend_stret((undefined *)local_130,param_1,PTR_s_handles_1002e6518);
      dVar1 = *(double *)((long)local_130 + lVar8 + 8);
      *(double *)((long)local_b0 + lVar8) = *(double *)((long)local_130 + lVar8) + local_148;
      *(double *)((long)local_b0 + lVar8 + 8) = dVar1 + dStack_140;
      lVar4 = lVar4 + 1;
      uVar3 = (*(code *)puVar2)(param_1,PTR_s_class_1002e6a28);
      lVar5 = (*(code *)puVar2)(uVar3,PTR_s_numberOfHandles_1002e8488);
      lVar8 = lVar8 + 0x10;
    } while (lVar4 < lVar5);
  }
  pdVar6 = local_b0;
  pdVar7 = adStack_1d8;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *pdVar7 = *pdVar6;
    pdVar6 = pdVar6 + (ulong)bVar9 * -2 + 1;
    pdVar7 = pdVar7 + (ulong)bVar9 * -2 + 1;
  }
  (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_setHandles__1002e8480);
  return;
}



// ===== keyPathsForSettableValues  @ 0x100051a1b =====

/* Function Stack Size: 0x10 bytes */

ID Text::keyPathsForSettableValues(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = (*(code *)PTR__objc_msgSend_10027d560)
                    (PTR__OBJC_CLASS___NSSet_1002eec28,PTR_s_setWithObjects__1002e8490,
                     PTR_cf_color_1002f8ac0,PTR_cf_size_1002f8ac8,PTR_cf_isBold_1002f8c10,
                     PTR_cf_isUnderlined_1002f8c18,PTR_cf_isItalic_1002f8c08,
                     PTR_cf_fontSize_1002f8bf0,PTR_cf_hasOutline_1002f8c00,PTR_cf_fontName_1002f8bf8
                     ,0);
  return IVar1;
}



// ===== keyPathsForValuesAffectingDrawingContents  @ 0x100051a9b =====

/* Function Stack Size: 0x10 bytes */

ID Text::keyPathsForValuesAffectingDrawingContents(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = (*(code *)PTR__objc_msgSend_10027d560)
                    (PTR__OBJC_CLASS___NSSet_1002eec28,PTR_s_setWithObjects__1002e8490,
                     PTR_cf_color_1002f8ac0,PTR_cf_isUnderlined_1002f8c18,
                     PTR_cf_hasOutline_1002f8c00,0);
  return IVar1;
}



// ===== drawingBounds  @ 0x100051b2c =====

/* Function Stack Size: 0x10 bytes */

CGRect * Text::drawingBounds(CGRect *__return_storage_ptr__,ID param_1,SEL param_2)

{
  undefined local_50 [32];
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  
  _objc_msgSend_stret(local_50,param_1,PTR_s_bounds_1002e6938);
  _NSInsetRect(DAT_1001710f0,DAT_100171298,&local_30);
  if (local_20 < DAT_100170e08) {
    local_20 = 100.0;
  }
  (__return_storage_ptr__->field1_0x10).field1_0x8 = local_18;
  (__return_storage_ptr__->field1_0x10).field0_0x0 = local_20;
  (__return_storage_ptr__->field0_0x0).field1_0x8 = local_28;
  (__return_storage_ptr__->field0_0x0).field0_0x0 = local_30;
  return __return_storage_ptr__;
}



// ===== drawContentsInView:isBeingCreated:isBeingEdited:  @ 0x100051bca =====

/* Function Stack Size: 0x20 bytes */

void Text::drawContentsInView_isBeingCreated_isBeingEdited_
               (ID param_1,SEL param_2,ID param_3,char param_4,char param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  char cVar3;
  
  uVar1 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  puVar2 = PTR__objc_msgSend_10027d560;
  if (param_4 == '\0') {
    if (param_5 == '\0') {
      cVar3 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_hasOutline_1002e9570);
    }
    else {
      (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_drawEditSelection_1002e9610);
      cVar3 = (*(code *)puVar2)(param_1,PTR_s_hasOutline_1002e9570);
    }
    (*(code *)puVar2)(param_1,PTR_s_drawContentsWithOutline_andText__1002e9618,(int)cVar3,
                      param_5 == '\0');
  }
  else {
    (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_drawEditSelection_1002e9610);
  }
  (*(code *)PTR__objc_release_10027d590)(uVar1);
  return;
}



// ===== drawSelectionInView:  @ 0x100051c69 =====

/* Function Stack Size: 0x18 bytes */

void Text::drawSelectionInView_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined local_50 [32];
  
  puVar1 = PTR__objc_msgSend_10027d560;
  (*(code *)PTR__objc_msgSend_10027d560)
            (PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98,PTR_s_saveGraphicsState_1002e6a70);
  puVar2 = PTR__OBJC_CLASS___NSBezierPath_1002eea90;
  _objc_msgSend_stret(local_50,param_1,PTR_s_bounds_1002e6938);
  uVar3 = (*(code *)puVar1)(puVar2,PTR_s_bezierPathWithRect__1002e6520);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSAffineTransform_1002eeb10,PTR_s_transform_1002e66c8)
  ;
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)puVar1)(DAT_100170dc0,DAT_100170dc0,uVar4,PTR_s_translateXBy_yBy__1002e66d0);
  (*(code *)puVar1)(uVar3,PTR_s_transformUsingAffineTransform__1002e66e8,uVar4);
  uVar5 = (*(code *)puVar1)(DAT_1001710f8,DAT_100171100,DAT_100171108,DAT_100170c08,
                            PTR__OBJC_CLASS___NSColor_1002eea80,
                            PTR_s_colorWithDeviceRed_green_blue_al_1002e84a0);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)puVar1)(uVar5,PTR_s_set_1002e6510);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar5);
  (*(code *)puVar1)(DAT_100170c08,uVar3,PTR_s_setLineWidth__1002e6530);
  (*(code *)puVar1)(uVar3,PTR_s_stroke_1002e6a90);
  (*(code *)puVar1)(PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98,
                    PTR_s_restoreGraphicsState_1002e6ab0);
  (*(code *)puVar2)(uVar4);
  (*(code *)puVar2)(uVar3);
  return;
}



// ===== isContentsUnderPoint:  @ 0x100051dd3 =====

/* Function Stack Size: 0x20 bytes */

char Text::isContentsUnderPoint_(ID param_1,SEL param_2,CGPoint param_3)

{
  char cVar1;
  undefined local_28 [32];
  
  _objc_msgSend_stret(local_28,param_1,PTR_s_bounds_1002e6938);
  cVar1 = _NSPointInRect(param_3.field0_0x0,param_3.field1_0x8);
  return cVar1;
}



// ===== isContentsInRect:  @ 0x100051e36 =====

/* Function Stack Size: 0x30 bytes */

char Text::isContentsInRect_(ID param_1,SEL param_2,CGRect param_3)

{
  char cVar1;
  undefined local_28 [32];
  
  _objc_msgSend_stret(local_28,param_1,PTR_s_bounds_1002e6938);
  cVar1 = _NSIntersectsRect();
  return cVar1 != '\0';
}



// ===== keysForValuesToObserveForUndo  @ 0x100051eae =====

/* Function Stack Size: 0x10 bytes */

ID Text::keysForValuesToObserveForUndo(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  ID IVar3;
  ID IVar4;
  
  uVar2 = (*(code *)PTR__objc_msgSend_10027d560)
                    (PTR__OBJC_CLASS___NSSet_1002eec28,PTR_s_setWithObjects__1002e8490,
                     PTR_cf_handles_1002f8ab8,PTR_cf_isBold_1002f8c10,PTR_cf_isUnderlined_1002f8c18,
                     PTR_cf_isItalic_1002f8c08,PTR_cf_fontName_1002f8bf8,PTR_cf_fontSize_1002f8bf0,
                     PTR_cf_color_1002f8ac0,PTR_cf_hasOutline_1002f8c00,
                     PTR_cf_textContainerWidth_1002f8c20,PTR_cf_hasUserSpecifiedWidth_1002f8c28,0);
  IVar3 = _objc_retainAutoreleasedReturnValue(uVar2);
  puVar1 = PTR__objc_msgSend_10027d560;
  IVar4 = IVar3;
  if (*(char *)(param_1 + _handlesBeingChangedToMatchContents) != '\0') {
    IVar4 = (*(code *)PTR__objc_msgSend_10027d560)(IVar3,PTR_s_mutableCopy_1002e6730);
    (*(code *)puVar1)(IVar4,PTR_s_removeObject__1002e9548,PTR_cf_handles_1002f8ab8);
    (*(code *)PTR__objc_release_10027d590)(IVar3);
  }
  _objc_autoreleaseReturnValue(IVar4);
  return IVar4;
}



// ===== dealloc  @ 0x100051fb0 =====

/* Function Stack Size: 0x10 bytes */

void Text::dealloc(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  objc_super local_30;
  
  _NSLog(&cf_dealloc___,param_1);
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar2 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_textStorage_1002e9578);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)puVar1)(uVar2,PTR_s_setDelegate__1002e6390,0);
  (*(code *)PTR__objc_release_10027d590)(uVar2);
  local_30.super_class = (class_t *)PTR_Text_1002ef900;
  local_30.receiver = param_1;
  _objc_msgSendSuper2(&local_30,PTR_s_dealloc_1002e63c0);
  return;
}



// ===== setHasOutline:  @ 0x100052032 =====

/* Function Stack Size: 0x14 bytes */

void Text::setHasOutline_(ID param_1,SEL param_2,char param_3)

{
  *(char *)(param_1 + _hasOutline) = param_3;
  return;
}



// ===== setHandles:  @ 0x100052042 =====

/* Function Stack Size: 0x90 bytes */

void Text::setHandles_(ID param_1,SEL param_2,AnonymousStructure3 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  AnonymousStructure3 *pAVar6;
  double *pdVar7;
  byte bVar8;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  undefined8 local_90;
  objc_super local_88;
  double local_78;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  double dStack_50;
  double local_48;
  double dStack_40;
  
  bVar8 = 0;
  local_108 = param_3.field0_0x0[4].field0_0x0 - param_3.field0_0x0[3].field0_0x0;
  local_100 = param_3.field0_0x0[6].field1_0x8 - param_3.field0_0x0[3].field1_0x8;
  local_58 = param_3.field0_0x0[3].field0_0x0;
  dStack_50 = param_3.field0_0x0[3].field1_0x8;
  local_110 = param_3.field0_0x0[3].field1_0x8;
  local_118 = param_3.field0_0x0[3].field0_0x0;
  local_48 = local_108;
  dStack_40 = local_100;
  (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_setBounds__1002e8628);
  puVar1 = PTR__objc_msgSend_10027d560;
  if (*(char *)(param_1 + _handlesBeingChangedToMatchContents) == '\0') {
    uVar2 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_textStorage_1002e9578);
    local_90 = _objc_retainAutoreleasedReturnValue(uVar2);
    uVar2 = (*(code *)puVar1)(local_90,PTR_s_layoutManagers_1002e9620);
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    uVar3 = (*(code *)puVar1)(uVar2,PTR_s_firstObject_1002e67e0);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    uVar4 = (*(code *)puVar1)(uVar3,PTR_s_firstTextView_1002e9628);
    lVar5 = _objc_retainAutoreleasedReturnValue(uVar4);
    puVar1 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar3);
    (*(code *)puVar1)(uVar2);
    (*(code *)puVar1)(local_90);
    if (lVar5 != 0) {
      _objc_msgSend_stret((undefined *)&local_78,param_1,PTR_s_bounds_1002e6938);
      local_100 = local_60;
      local_108 = local_68;
      local_110 = local_70;
      local_118 = local_78;
      (*(code *)PTR__objc_msgSend_10027d560)(lVar5,PTR_s_setFrame__1002e6500);
    }
    (*(code *)PTR__objc_release_10027d590)(lVar5);
  }
  local_88.super_class = (class_t *)PTR_Text_1002ef900;
  pAVar6 = &param_3;
  pdVar7 = &local_118;
  local_88.receiver = param_1;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *pdVar7 = pAVar6->field0_0x0[0].field0_0x0;
    pAVar6 = (AnonymousStructure3 *)((long)pAVar6 + ((ulong)bVar8 * -2 + 1) * 8);
    pdVar7 = pdVar7 + (ulong)bVar8 * -2 + 1;
  }
  _objc_msgSendSuper2(&local_88,PTR_s_setHandles__1002e8480);
  return;
}



// ===== setSize:  @ 0x100052354 =====

/* Function Stack Size: 0x18 bytes */

void Text::setSize_(ID param_1,SEL param_2,double param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar2 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_class_1002e6a28);
  (*(code *)puVar1)(param_3,uVar2,PTR_s_fontSizeForSize__1002e6d38);
  (*(code *)puVar1)(param_1,PTR_s_setFontSize__1002e95b0);
  return;
}



// ===== size  @ 0x1000523a1 =====

/* Function Stack Size: 0x10 bytes */

double Text::size(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  float fVar9;
  double dVar10;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  puVar2 = PTR_s_numberWithDouble__1002e6d50;
  puVar1 = PTR__objc_msgSend_10027d560;
  local_38 = *(long *)PTR____stack_chk_guard_10027d368;
  uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(DAT_1001713c0,PTR__OBJC_CLASS___NSNumber_1002eeaa0)
  ;
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  local_50 = uVar4;
  uVar5 = (*(code *)puVar1)(DAT_100170eb8,PTR__OBJC_CLASS___NSNumber_1002eeaa0,puVar2);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  local_48 = uVar5;
  uVar6 = (*(code *)puVar1)(DAT_1001713c8,PTR__OBJC_CLASS___NSNumber_1002eeaa0,puVar2);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  local_40 = uVar6;
  uVar7 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSArray_1002eeaa8,
                            PTR_s_arrayWithObjects_count__1002e6568,&local_50,3);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar6);
  (*(code *)puVar2)(uVar5);
  (*(code *)puVar2)(uVar4);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1002eeaa0;
  (*(code *)puVar1)(param_1,PTR_s_fontSize_1002e9558);
  uVar4 = (*(code *)puVar1)(puVar3,PTR_s_numberWithDouble__1002e6d50);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  lVar8 = (*(code *)puVar1)(uVar7,PTR_s_indexOfObject__1002e6cd8,uVar4);
  (*(code *)puVar2)(uVar4);
  if (lVar8 == 0x7fffffffffffffff) {
    dVar10 = (double)(*(code *)puVar1)(param_1,PTR_s_fontSize_1002e9558);
    puVar2 = PTR_s_objectAtIndexedSubscript__1002e6400;
    lVar8 = 0;
    uVar4 = (*(code *)puVar1)(uVar7,PTR_s_objectAtIndexedSubscript__1002e6400,0);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    fVar9 = (float)(*(code *)puVar1)(uVar4,PTR_s_floatValue_1002e6d30);
    (*(code *)PTR__objc_release_10027d590)(uVar4);
    if ((double)fVar9 <= dVar10) {
      dVar10 = (double)(*(code *)puVar1)(param_1,PTR_s_fontSize_1002e9558);
      uVar4 = (*(code *)puVar1)(uVar7,puVar2,2);
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      fVar9 = (float)(*(code *)puVar1)(uVar4,PTR_s_floatValue_1002e6d30);
      (*(code *)PTR__objc_release_10027d590)(uVar4);
      lVar8 = (ulong)((double)fVar9 < dVar10) + 1;
    }
  }
  (*(code *)PTR__objc_release_10027d590)(uVar7);
  if (*(long *)PTR____stack_chk_guard_10027d368 == local_38) {
    return (double)lVar8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



// ===== setFontSize:  @ 0x1000525ca =====

/* Function Stack Size: 0x18 bytes */

void Text::setFontSize_(ID param_1,SEL param_2,double param_3)

{
  double dVar1;
  
  dVar1 = DAT_100170eb0;
  if (DAT_100170eb0 <= param_3) {
    dVar1 = param_3;
  }
  *(double *)(param_1 + _fontSize) = dVar1;
  (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_updateTextAttributes_1002e9630);
  return;
}



// ===== setFontName:  @ 0x1000525f4 =====

/* Function Stack Size: 0x18 bytes */

void Text::setFontName_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR__objc_retain_10027d598;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar1 = *(undefined8 *)(param_1 + _fontName);
  *(undefined8 *)(param_1 + _fontName) = uVar3;
  uVar3 = (*(code *)puVar2)(uVar3);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar1);
  (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_updateTextAttributes_1002e9630);
  (*(code *)puVar2)(uVar3);
  return;
}



// ===== setColor:  @ 0x100052654 =====

/* Function Stack Size: 0x18 bytes */

void Text::setColor_(ID param_1,SEL param_2,ID param_3)

{
  objc_super local_20;
  
  local_20.super_class = (class_t *)PTR_Text_1002ef900;
  local_20.receiver = param_1;
  _objc_msgSendSuper2(&local_20,PTR_s_setColor__1002e6ec0);
  (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_updateTextAttributes_1002e9630);
  return;
}



// ===== setIsBold:  @ 0x100052696 =====

/* Function Stack Size: 0x14 bytes */

void Text::setIsBold_(ID param_1,SEL param_2,char param_3)

{
  *(char *)(param_1 + _isBold) = param_3;
  (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_updateTextAttributes_1002e9630);
  return;
}



// ===== setIsItalic:  @ 0x1000526b2 =====

/* Function Stack Size: 0x14 bytes */

void Text::setIsItalic_(ID param_1,SEL param_2,char param_3)

{
  *(char *)(param_1 + _isItalic) = param_3;
  (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_updateTextAttributes_1002e9630);
  return;
}



// ===== setIsUnderlined:  @ 0x1000526ce =====

/* Function Stack Size: 0x14 bytes */

void Text::setIsUnderlined_(ID param_1,SEL param_2,char param_3)

{
  *(char *)(param_1 + _isUnderlined) = param_3;
  (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_updateTextAttributes_1002e9630);
  return;
}



// ===== attributes  @ 0x1000526ea =====

/* Function Stack Size: 0x10 bytes */

ID Text::attributes(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ID IVar8;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  puVar1 = PTR__objc_msgSend_10027d560;
  local_38 = *(long *)PTR____stack_chk_guard_10027d368;
  local_68 = *(undefined8 *)PTR__NSForegroundColorAttributeName_10027d118;
  uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_color_1002e84d0);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  local_60 = *(undefined8 *)PTR__NSFontAttributeName_10027d110;
  local_50 = uVar4;
  uVar5 = (*(code *)puVar1)(param_1,PTR_s_font_1002e8620);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1002eeaa0;
  local_58 = *(undefined8 *)PTR__NSUnderlineStyleAttributeName_10027d278;
  local_48 = uVar5;
  cVar3 = (*(code *)puVar1)(param_1,PTR_s_isUnderlined_1002e9638);
  uVar6 = (*(code *)puVar1)(puVar2,PTR_s_numberWithBool__1002e71e8,(int)cVar3);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  local_40 = uVar6;
  uVar7 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSDictionary_1002eeb78,
                            PTR_s_dictionaryWithObjects_forKeys_co_1002e6978,&local_50,&local_68,3);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  puVar1 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar6);
  (*(code *)puVar1)(uVar5);
  (*(code *)puVar1)(uVar4);
  if (*(long *)PTR____stack_chk_guard_10027d368 == local_38) {
    IVar8 = _objc_autoreleaseReturnValue(uVar7);
    return IVar8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



// ===== font  @ 0x100052813 =====

/* Function Stack Size: 0x10 bytes */

ID Text::font(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  undefined *puVar3;
  char cVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar3 = PTR__OBJC_CLASS___NSFont_1002eeb30;
  pcVar5 = (code *)PTR__objc_msgSend_10027d560;
  uVar6 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_fontName_1002e9550);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  (*pcVar5)(param_1,PTR_s_fontSize_1002e9558);
  uVar7 = (*pcVar5)(puVar3,PTR_s_fontWithName_size__1002e6968,uVar6);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  (*(code *)PTR__objc_release_10027d590)(uVar6);
  cVar4 = (*pcVar5)(param_1,PTR_s_isItalic_1002e9560);
  uVar6 = uVar7;
  if (cVar4 != '\0') {
    uVar6 = (*pcVar5)(PTR__OBJC_CLASS___NSFontManager_1002ef0f8,PTR_s_sharedFontManager_1002e9640);
    uVar1 = _objc_retainAutoreleasedReturnValue(uVar6);
    uVar6 = (*pcVar5)(uVar1,PTR_s_convertFont_toHaveTrait__1002e9648,uVar7,1);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    puVar3 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar7);
    (*(code *)puVar3)(uVar1);
    pcVar5 = (code *)PTR__objc_msgSend_10027d560;
  }
  cVar4 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_isBold_1002e9568);
  uVar7 = uVar6;
  if (cVar4 != '\0') {
    uVar7 = (*pcVar5)(PTR__OBJC_CLASS___NSFontManager_1002ef0f8,PTR_s_sharedFontManager_1002e9640);
    uVar1 = _objc_retainAutoreleasedReturnValue(uVar7);
    uVar7 = (*pcVar5)(uVar1,PTR_s_convertFont_toHaveTrait__1002e9648,uVar6,2);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    puVar3 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar6);
    (*(code *)puVar3)(uVar1);
  }
  IVar2 = _objc_autoreleaseReturnValue(uVar7);
  return IVar2;
}



// ===== outlineSize  @ 0x100052954 =====

/* Function Stack Size: 0x10 bytes */

double Text::outlineSize(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  double dVar4;
  
  puVar2 = PTR_s_fontSize_1002e9558;
  puVar1 = PTR__objc_msgSend_10027d560;
  dVar3 = (double)(*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_fontSize_1002e9558);
  dVar4 = (double)_ceil(dVar3 / DAT_100170c48);
  dVar3 = DAT_100170c10;
  if (DAT_100170c10 <= dVar4) {
    dVar3 = dVar4;
  }
  dVar4 = (double)(*(code *)puVar1)(param_1,puVar2);
  return ((dVar3 + dVar3) / dVar4) * DAT_100170e08;
}



// ===== updateTextAttributes  @ 0x1000529c0 =====

/* Function Stack Size: 0x10 bytes */

void Text::updateTextAttributes(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar2 = PTR_s_textStorage_1002e9578;
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar3 = (*(code *)PTR__objc_msgSend_10027d560)();
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*(code *)puVar1)(param_1,PTR_s_attributes_1002e9650);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)puVar1)(param_1,puVar2);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar6 = (*(code *)puVar1)(uVar5,PTR_s_length_1002e6708);
  (*(code *)puVar1)(uVar3,PTR_s_addAttributes_range__1002e9658,uVar4,0,uVar6);
  puVar1 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar5);
  (*(code *)puVar1)(uVar4);
  (*(code *)puVar1)(uVar3);
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar3 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_textStorage_1002e9578);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*(code *)puVar1)(uVar3,PTR_s_layoutManagers_1002e9620);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)puVar1)(uVar4,PTR_s_firstObject_1002e67e0);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar6 = (*(code *)puVar1)(uVar5,PTR_s_firstTextView_1002e9628);
  lVar7 = _objc_retainAutoreleasedReturnValue(uVar6);
  puVar1 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar5);
  (*(code *)puVar1)(uVar4);
  (*(code *)puVar1)(uVar3);
  if (lVar7 != 0) {
    (*(code *)PTR__objc_msgSend_10027d560)
              (param_1,PTR_s_updateTextViewWithAttributes__1002e9660,lVar7);
  }
  (*(code *)PTR__objc_release_10027d590)(lVar7);
  return;
}



// ===== updateTextViewWithAttributes:  @ 0x100052b09 =====

/* Function Stack Size: 0x18 bytes */

void Text::updateTextViewWithAttributes_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  
  uVar4 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar5 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_color_1002e84d0);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)puVar1)(uVar4,PTR_s_setTextColor__1002e7a60,uVar5);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar5);
  uVar5 = (*(code *)puVar1)(param_1,PTR_s_font_1002e8620);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)puVar1)(uVar4,PTR_s_setFont__1002e6778,uVar5);
  (*(code *)puVar2)(uVar5);
  cVar3 = (*(code *)puVar1)(param_1,PTR_s_hasOutline_1002e9570);
  if (cVar3 == '\0') {
    uVar5 = (*(code *)puVar1)(param_1,PTR_s_color_1002e84d0);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    cVar3 = (*(code *)puVar1)(uVar5,PTR_s_isLight_1002e9668);
    (*(code *)PTR__objc_release_10027d590)(uVar5);
    if (cVar3 != '\0') {
      uVar5 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSShadow_1002eef38,PTR_s_alloc_1002e64e8);
      uVar6 = (*(code *)puVar1)(uVar5,PTR_s_init_1002e6538);
      uVar5 = (*(code *)puVar1)(0,0,0,DAT_100171190,PTR__OBJC_CLASS___NSColor_1002eea80,
                                PTR_s_colorWithDeviceRed_green_blue_al_1002e84a0);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      (*(code *)puVar1)(uVar6,PTR_s_setShadowColor__1002e86e0,uVar5);
      (*(code *)PTR__objc_release_10027d590)(uVar5);
      (*(code *)puVar1)(DAT_100170c38,uVar6,PTR_s_setShadowBlurRadius__1002e86e8);
      (*(code *)puVar1)(0,DAT_100170dc8,uVar6,PTR_s_setShadowOffset__1002e90a0);
      puVar2 = PTR_s_textStorage_1002e9578;
      uVar5 = (*(code *)puVar1)(uVar4,PTR_s_textStorage_1002e9578);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar5);
      uVar5 = *(undefined8 *)PTR__NSShadowAttributeName_10027d200;
      uVar8 = (*(code *)puVar1)(uVar4,puVar2);
      uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
      uVar9 = (*(code *)puVar1)(uVar8,PTR_s_length_1002e6708);
      (*(code *)puVar1)(uVar7,PTR_s_addAttribute_value_range__1002e88c0,uVar5,uVar6,0,uVar9);
      pcVar10 = (code *)PTR__objc_release_10027d590;
      (*(code *)PTR__objc_release_10027d590)(uVar8);
      (*pcVar10)(uVar7);
      goto LAB_100052d6d;
    }
  }
  puVar2 = PTR_s_textStorage_1002e9578;
  uVar5 = (*(code *)puVar1)(uVar4,PTR_s_textStorage_1002e9578);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar5 = *(undefined8 *)PTR__NSShadowAttributeName_10027d200;
  uVar7 = (*(code *)puVar1)(uVar4,puVar2);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  uVar8 = (*(code *)puVar1)(uVar7,PTR_s_length_1002e6708);
  (*(code *)puVar1)(uVar6,PTR_s_removeAttribute_range__1002e9670,uVar5,0,uVar8);
  pcVar10 = (code *)PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar7);
LAB_100052d6d:
  (*pcVar10)(uVar6);
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  return;
}



// ===== newEditingView  @ 0x100052e6d =====

/* Function Stack Size: 0x10 bytes */

ID __thiscall Text::newEditingView(Text *this,ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  ID IVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined *puVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar17;
  double dVar16;
  double in_XMM1_Qa;
  double dVar18;
  SEL local_100;
  long local_f8;
  undefined local_d8 [8];
  double local_d0;
  double local_c8;
  double local_c0;
  double local_b8 [4];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined local_70 [16];
  undefined4 local_60;
  undefined local_50 [16];
  double local_40;
  
  pcVar11 = (code *)PTR__objc_msgSend_10027d560;
  uVar3 = (*(code *)PTR__objc_msgSend_10027d560)
                    (PTR__OBJC_CLASS___NSLayoutManager_1002ef100,PTR_s_alloc_1002e64e8);
  uVar3 = (*pcVar11)(uVar3,PTR_s_init_1002e6538);
  uVar4 = (*pcVar11)(this,PTR_s_textStorage_1002e9578);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*pcVar11)(uVar4,PTR_s_addLayoutManager__1002e9698,uVar3);
  puVar1 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  puVar12 = PTR_s_textContainerWidth_1002e9590;
  uVar4 = (*pcVar11)(this,PTR_s_textContainerWidth_1002e9590);
  lVar5 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)puVar1)(lVar5);
  puVar2 = PTR_s_textStorage_1002e9578;
  if (lVar5 == 0) {
    uVar4 = (*pcVar11)(this,PTR_s_textStorage_1002e9578);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar6 = (*pcVar11)(this,PTR_s_attributes_1002e9650);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    uVar8 = (*pcVar11)(this,puVar2);
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
    uVar9 = (*pcVar11)(uVar8,PTR_s_length_1002e6708);
    (*pcVar11)(uVar4,PTR_s_addAttributes_range__1002e9658,uVar6,0,uVar9);
    (*(code *)puVar1)(uVar8);
    (*(code *)puVar1)(uVar6);
    (*(code *)puVar1)(uVar4);
    local_100 = PTR_s_bounds_1002e6938;
    _objc_msgSend_stret(local_50,(ID)this,PTR_s_bounds_1002e6938);
    puVar1 = PTR__OBJC_CLASS___NSNumber_1002eeaa0;
    if (local_40 <= DAT_1001713c0) {
      uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(this,PTR_s_canvasView_1002e6c08);
      IVar7 = _objc_retainAutoreleasedReturnValue(uVar4);
      if (IVar7 == 0) {
        local_88 = 0;
        uStack_80 = 0;
        local_98 = 0;
        uStack_90 = 0;
        uVar13 = 0;
        uVar17 = 0;
      }
      else {
        _objc_msgSend_stret((undefined *)&local_98,IVar7,PTR_s_frame_1002e64b0);
        uVar13 = (undefined4)local_88;
        uVar17 = (undefined4)((ulong)local_88 >> 0x20);
      }
      _objc_msgSend_stret((undefined *)local_b8,(ID)this,local_100);
      pcVar11 = (code *)PTR__objc_msgSend_10027d560;
      uVar4 = (*(code *)PTR__objc_msgSend_10027d560)
                        (SUB84(((double)CONCAT44(uVar17,uVar13) - local_b8[0]) + DAT_100171308,0),
                         puVar1,PTR_s_numberWithDouble__1002e6d50);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar4);
      local_f8 = _textContainerWidth;
      uVar4 = *(undefined8 *)(this + _textContainerWidth);
      *(undefined8 *)(this + _textContainerWidth) = uVar6;
      puVar1 = PTR__objc_release_10027d590;
      (*(code *)PTR__objc_release_10027d590)(uVar4);
      (*(code *)puVar1)(IVar7);
      puVar1 = PTR_s_undoRegistrationForHandlesChange_1002e96a0;
      (*pcVar11)(this,PTR_s_undoRegistrationForHandlesChange_1002e96a0,1);
      (*pcVar11)(SUB84(DAT_1001713d0,0),this,PTR_s_naturalSizeForTextContainerWidth_1002e9600);
      (*pcVar11)(SUB84(DAT_100171308,0),in_XMM1_Qa * DAT_100170dc0,
                 *(undefined8 *)PTR__NSZeroPoint_10027d308,
                 *(undefined8 *)(PTR__NSZeroPoint_10027d308 + 8),this,
                 PTR_s_translateWithDelta_toLocation__1002e9268);
      (*pcVar11)(this,puVar1,0);
    }
    else {
      _objc_msgSend_stret(local_70,(ID)this,local_100);
      uVar4 = (*(code *)PTR__objc_msgSend_10027d560)
                        (local_60,puVar1,PTR_s_numberWithDouble__1002e6d50);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar4);
      local_f8 = _textContainerWidth;
      uVar4 = *(undefined8 *)(this + _textContainerWidth);
      *(undefined8 *)(this + _textContainerWidth) = uVar6;
      (*(code *)PTR__objc_release_10027d590)(uVar4);
      this[_hasUserSpecifiedWidth] = (Text)0x1;
      pcVar11 = (code *)PTR__objc_msgSend_10027d560;
    }
    puVar12 = PTR_s_textContainerWidth_1002e9590;
  }
  else {
    local_100 = PTR_s_bounds_1002e6938;
    local_f8 = _textContainerWidth;
  }
  uVar4 = (*pcVar11)(this,puVar12);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  puVar1 = PTR_s_floatValue_1002e6d30;
  fVar14 = (float)(*pcVar11)(uVar4,PTR_s_floatValue_1002e6d30);
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  uVar4 = (*pcVar11)(PTR__OBJC_CLASS___NSTextContainer_1002ef108,PTR_s_alloc_1002e64e8);
  dVar18 = DAT_1001713d0;
  uVar4 = (*pcVar11)(SUB84((double)fVar14,0),uVar4,PTR_s_initWithContainerSize__1002e9678);
  (*pcVar11)(uVar3,PTR_s_addTextContainer__1002e9690,uVar4);
  _objc_msgSend_stret(local_d8,(ID)this,local_100);
  fVar15 = (float)(*pcVar11)(*(undefined8 *)(this + local_f8),puVar1);
  puVar2 = PTR_s_naturalSizeForTextContainerWidth_1002e9600;
  (*pcVar11)(SUB84((double)fVar15,0),this,PTR_s_naturalSizeForTextContainerWidth_1002e9600);
  puVar1 = PTR_s_floatValue_1002e6d30;
  if (local_c0 < dVar18) {
    dVar18 = dVar18 - local_c0;
    local_d0 = local_d0 - dVar18;
  }
  fVar15 = (float)(*pcVar11)(*(undefined8 *)(this + local_f8),PTR_s_floatValue_1002e6d30);
  dVar16 = (double)(*pcVar11)(SUB84((double)fVar15,0),this,puVar2);
  if (dVar16 <= local_c8) {
    dVar16 = local_c8;
  }
  local_c8 = dVar16;
  fVar15 = (float)(*pcVar11)(*(undefined8 *)(this + local_f8),puVar1);
  (*pcVar11)(SUB84((double)fVar15,0),this,puVar2);
  if (dVar18 <= local_c0) {
    dVar18 = local_c0;
  }
  local_c0 = dVar18;
  uVar6 = (*pcVar11)(PTR__OBJC_CLASS___NSTextView_1002ef110,PTR_s_alloc_1002e64e8);
  IVar7 = (*pcVar11)(uVar6,PTR_s_initWithFrame_textContainer__1002e96a8,uVar4);
  (*pcVar11)(IVar7,PTR_s_setDelegate__1002e6390,this);
  (*pcVar11)(IVar7,PTR_s_setDrawsBackground__1002e6958,0);
  (*pcVar11)(IVar7,PTR_s_setUsesFontPanel__1002e96b0,0);
  (*pcVar11)(this,PTR_s_updateTextViewWithAttributes__1002e9660,IVar7);
  uVar6 = (*pcVar11)(IVar7,PTR_s_selectedTextAttributes_1002e96b8);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  uVar8 = (*pcVar11)(uVar6,PTR_s_mutableCopy_1002e6730);
  (*(code *)PTR__objc_release_10027d590)(uVar6);
  uVar6 = *(undefined8 *)PTR__NSBackgroundColorAttributeName_10027d098;
  uVar9 = (*pcVar11)(uVar8,PTR_s_objectForKeyedSubscript__1002e67f0,uVar6);
  uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
  uVar10 = (*pcVar11)((int)DAT_100171120,uVar9,PTR_s_colorWithAlphaComponent__1002e6a88);
  uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
  (*pcVar11)(uVar8,PTR_s_setObject_forKeyedSubscript__1002e6628,uVar10,uVar6);
  puVar1 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar10);
  (*(code *)puVar1)(uVar9);
  (*pcVar11)(IVar7,PTR_s_setSelectedTextAttributes__1002e96c0,uVar8);
  uVar6 = (*pcVar11)(this,PTR_s_textStorage_1002e9578);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  uVar9 = (*pcVar11)(uVar6,PTR_s_length_1002e6708);
  (*pcVar11)(IVar7,PTR_s_setSelectedRange__1002e96c8,0,uVar9);
  (*(code *)puVar1)(uVar6);
  (*pcVar11)(SUB84(local_c8,0),0,IVar7,PTR_s_setMinSize__1002e6b68);
  (*pcVar11)(SUB84((double)fVar14,0),DAT_1001713d0,IVar7,PTR_s_setMaxSize__1002e96d0);
  (*pcVar11)(IVar7,PTR_s_setHorizontallyResizable__1002e96d8,1);
  (*pcVar11)(IVar7,PTR_s_setVerticallyResizable__1002e96e0,1);
  (*pcVar11)(this,PTR_s_setSizeToMatchContents_1002e95f8);
  (*pcVar11)(IVar7,PTR_s_setAllowsUndo__1002e96e8,1);
  (*pcVar11)(this,PTR_s_setTextView__1002e96f0,IVar7);
  (*(code *)puVar1)(uVar8);
  (*(code *)puVar1)(uVar4);
  (*(code *)puVar1)(uVar3);
  return IVar7;
}



// ===== finalizeEditingView  @ 0x10005355c =====

/* Function Stack Size: 0x10 bytes */

char Text::finalizeEditingView(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  puVar2 = PTR_s_textView_1002e92e8;
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar3 = (*(code *)PTR__objc_msgSend_10027d560)();
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*(code *)puVar1)(uVar3,PTR_s_layoutManager_1002e96f8);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)puVar1)(param_1,puVar2);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar6 = (*(code *)puVar1)(uVar5,PTR_s_textContainer_1002e9700);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  (*(code *)puVar1)(uVar4,PTR_s_ensureLayoutForTextContainer__1002e9708,uVar6);
  puVar1 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar6);
  (*(code *)puVar1)(uVar5);
  (*(code *)puVar1)(uVar4);
  (*(code *)puVar1)(uVar3);
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar3 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_textStorage_1002e9578);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*(code *)puVar1)(param_1,PTR_s_textView_1002e92e8);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)puVar1)(uVar4,PTR_s_layoutManager_1002e96f8);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)puVar1)(uVar3,PTR_s_removeLayoutManager__1002e9710,uVar5);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar5);
  (*(code *)puVar2)(uVar4);
  (*(code *)puVar2)(uVar3);
  uVar3 = (*(code *)puVar1)(param_1,PTR_s_textStorage_1002e9578);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*(code *)puVar1)(uVar3,PTR_s_string_1002e9580);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSCharacterSet_1002eece0,
                            PTR_s_whitespaceAndNewlineCharacterSet_1002e7368);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar6 = (*(code *)puVar1)(uVar5,PTR_s_invertedSet_1002e9718);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  lVar7 = (*(code *)puVar1)(uVar4,PTR_s_rangeOfCharacterFromSet_options__1002e9720,uVar6,4);
  puVar1 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar6);
  (*(code *)puVar1)(uVar5);
  (*(code *)puVar1)(uVar4);
  (*(code *)puVar1)(uVar3);
  return lVar7 != 0x7fffffffffffffff;
}



// ===== naturalSizeForTextContainerWidth:  @ 0x100053732 =====

/* Function Stack Size: 0x18 bytes */

CGSize Text::naturalSizeForTextContainerWidth_(ID param_1,SEL param_2,double param_3)

{
  double dVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  undefined8 uVar5;
  ID self;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  float fVar13;
  double dVar14;
  CGSize CVar15;
  double local_a0;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulong local_68;
  long local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  double local_48;
  double dStack_40;
  
  puVar2 = PTR__objc_msgSend_10027d560;
  uVar5 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_class_1002e6a28);
  uVar5 = (*(code *)puVar2)(uVar5,PTR_s_sharedLayoutManager_1002e9728);
  self = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar5 = (*(code *)puVar2)(self,PTR_s_textContainers_1002e9730);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar6 = (*(code *)puVar2)(uVar5,PTR_s_objectAtIndex__1002e6a80,0);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  (*(code *)PTR__objc_release_10027d590)(uVar5);
  (*(code *)puVar2)(SUB84(param_3,0),DAT_1001713d8,uVar6,PTR_s_setContainerSize__1002e9738);
  uVar5 = (*(code *)puVar2)(param_1,PTR_s_textStorage_1002e9578);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  lVar7 = (*(code *)puVar2)(uVar5,PTR_s_length_1002e6708);
  puVar3 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar5);
  if (lVar7 == 0) {
    uVar5 = (*(code *)puVar2)(PTR__OBJC_CLASS___NSAttributedString_1002eeb80,PTR_s_alloc_1002e64e8);
    uVar11 = (*(code *)puVar2)(param_1,PTR_s_attributes_1002e9650);
    uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
    uVar8 = (*(code *)puVar2)(uVar5,PTR_s_initWithString_attributes__1002e69c8,&cf_I,uVar11);
    (*(code *)puVar3)(uVar11);
    uVar5 = (*(code *)puVar2)(PTR__OBJC_CLASS___NSTextStorage_1002ef118,PTR_s_alloc_1002e64e8);
    uVar5 = (*(code *)puVar2)(uVar5,PTR_s_initWithAttributedString__1002e88b8,uVar8);
    (*(code *)puVar3)(uVar8);
  }
  else {
    uVar5 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_textStorage_1002e9578);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  }
  (*(code *)puVar2)(uVar5,PTR_s_addLayoutManager__1002e9698,self);
  (*(code *)puVar2)(self,PTR_s_glyphRangeForTextContainer__1002e9740,uVar6);
  if (self == 0) {
    local_48 = 0.0;
    dStack_40 = 0.0;
    local_58 = 0;
    uStack_50 = 0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_58,self,PTR_s_usedRectForTextContainer__1002e9748,uVar6)
    ;
  }
  dVar14 = dStack_40;
  local_a0 = local_48;
  uVar9 = (*(code *)PTR__objc_msgSend_10027d560)(self,PTR_s_numberOfGlyphs_1002e9750);
  lVar7 = 0;
  if (uVar9 != 0) {
    lVar7 = 0;
    uVar12 = 0;
    uVar10 = uVar9;
    do {
      if (self == 0) {
        local_78 = 0;
        uStack_70 = 0;
        local_88 = 0;
        uStack_80 = 0;
      }
      else {
        _objc_msgSend_stret((undefined *)&local_88,self,
                            PTR_s_lineFragmentRectForGlyphAtIndex__1002e9758,uVar12,&local_68);
        uVar10 = local_68;
      }
      uVar12 = local_60 + uVar10;
      lVar7 = lVar7 + 1;
    } while (uVar12 < uVar9);
  }
  puVar2 = PTR__objc_msgSend_10027d560;
  (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_setNumberOfLines__1002e9760,lVar7);
  cVar4 = (*(code *)puVar2)(param_1,PTR_s_hasUserSpecifiedWidth_1002e9588);
  if (cVar4 != '\0') {
    uVar11 = (*(code *)puVar2)(param_1,PTR_s_textContainerWidth_1002e9590);
    uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
    fVar13 = (float)(*(code *)puVar2)(uVar11,PTR_s_floatValue_1002e6d30);
    local_a0 = (double)fVar13;
    (*(code *)PTR__objc_release_10027d590)(uVar11);
  }
  uVar11 = (*(code *)puVar2)(param_1,PTR_s_canvasView_1002e6c08);
  uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
  dVar1 = (double)(*(code *)puVar2)(SUB84(local_a0,0),uVar11,PTR_s_alignToNearestPixel__1002e93c0);
  puVar3 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar11);
  (*(code *)puVar2)(uVar5,PTR_s_removeLayoutManager__1002e9710,self);
  (*(code *)puVar3)(uVar5);
  (*(code *)puVar3)(uVar6);
  (*(code *)puVar3)(self);
  CVar15.field1_0x8 = dVar14;
  CVar15.field0_0x0 = dVar1;
  return CVar15;
}



// ===== undoRegistrationForHandlesChangeDisabled:  @ 0x100053aaa =====

/* Function Stack Size: 0x14 bytes */

void Text::undoRegistrationForHandlesChangeDisabled_(ID param_1,SEL param_2,char param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__objc_msgSend_10027d560;
  (*(code *)PTR__objc_msgSend_10027d560)
            (param_1,PTR_s_willChangeValueForKey__1002e7cc8,
             PTR_cf_keysForValuesToObserveForUndo_1002f8ae8);
  *(char *)(param_1 + _handlesBeingChangedToMatchContents) = param_3;
  (*(code *)puVar1)(param_1,PTR_s_didChangeValueForKey__1002e7cd0,
                    PTR_cf_keysForValuesToObserveForUndo_1002f8ae8);
  return;
}



// ===== setSizeToMatchContents  @ 0x100053afb =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Function Stack Size: 0x10 bytes */

void __thiscall Text::setSizeToMatchContents(Text *this,ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *op;
  undefined *puVar2;
  undefined8 uVar3;
  float fVar4;
  double dVar5;
  double in_XMM1_Qa;
  undefined local_68 [24];
  double local_50;
  undefined local_48 [16];
  double local_38;
  
  puVar2 = PTR_s_undoRegistrationForHandlesChange_1002e96a0;
  puVar1 = PTR__objc_msgSend_10027d560;
  (*(code *)PTR__objc_msgSend_10027d560)(this,PTR_s_undoRegistrationForHandlesChange_1002e96a0,1);
  uVar3 = (*(code *)puVar1)(this,PTR_s_textContainerWidth_1002e9590);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  fVar4 = (float)(*(code *)puVar1)(uVar3,PTR_s_floatValue_1002e6d30);
  dVar5 = (double)(*(code *)puVar1)((double)fVar4,this,
                                    PTR_s_naturalSizeForTextContainerWidth_1002e9600);
  (*(code *)PTR__objc_release_10027d590)(uVar3);
  op = PTR_s_bounds_1002e6938;
  _objc_msgSend_stret(local_48,(ID)this,PTR_s_bounds_1002e6938);
  _objc_msgSend_stret(local_68,(ID)this,op);
  (*(code *)puVar1)(dVar5 - local_38,(ulong)(in_XMM1_Qa - local_50) ^ _DAT_100170c70,
                    *(undefined8 *)PTR__NSZeroPoint_10027d308,
                    *(undefined8 *)(PTR__NSZeroPoint_10027d308 + 8),this,
                    PTR_s_resizeByMovingHandle_withDelta_t_1002e9258,4);
  (*(code *)puVar1)(this,puVar2,0);
  return;
}



// ===== textDidChange:  @ 0x100053bf7 =====

/* Function Stack Size: 0x18 bytes */

void Text::textDidChange_(ID param_1,SEL param_2,ID param_3)

{
  (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_setSizeToMatchContents_1002e95f8);
  return;
}



// ===== textStorageDidProcessEditing:  @ 0x100053c09 =====

/* Function Stack Size: 0x18 bytes */

void Text::textStorageDidProcessEditing_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  puVar3 = PTR_s_setSizeToMatchContents_1002e95f8;
  puVar2 = PTR__objc_msgSend_10027d560;
  lVar1 = *(long *)PTR____stack_chk_guard_10027d368;
  local_48 = *(undefined8 *)PTR__NSEventTrackingRunLoopMode_10027d0d8;
  local_40 = *(undefined8 *)PTR__NSDefaultRunLoopMode_10027d0c8;
  local_38 = lVar1;
  uVar4 = (*(code *)PTR__objc_msgSend_10027d560)
                    (PTR__OBJC_CLASS___NSArray_1002eeaa8,PTR_s_arrayWithObjects_count__1002e6568,
                     &local_48,2);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)puVar2)(0,param_1,PTR_s_performSelector_withObject_after_1002e9768,puVar3,0,uVar4);
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  if (lVar1 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



// ===== drawEditSelection  @ 0x100053cb6 =====

/* Function Stack Size: 0x10 bytes */

void Text::drawEditSelection(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined local_50 [32];
  
  puVar1 = PTR__objc_msgSend_10027d560;
  (*(code *)PTR__objc_msgSend_10027d560)
            (PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98,PTR_s_saveGraphicsState_1002e6a70);
  puVar2 = PTR__OBJC_CLASS___NSBezierPath_1002eea90;
  _objc_msgSend_stret(local_50,param_1,PTR_s_bounds_1002e6938);
  uVar3 = (*(code *)puVar1)(puVar2,PTR_s_bezierPathWithRect__1002e6520);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSAffineTransform_1002eeb10,PTR_s_transform_1002e66c8)
  ;
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)puVar1)(DAT_100170dc0,DAT_100170dc0,uVar4,PTR_s_translateXBy_yBy__1002e66d0);
  (*(code *)puVar1)(uVar3,PTR_s_transformUsingAffineTransform__1002e66e8,uVar4);
  uVar5 = (*(code *)puVar1)(DAT_1001713e0,DAT_100171190,PTR__OBJC_CLASS___NSColor_1002eea80,
                            PTR_s_colorWithWhite_alpha__1002e6508);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)puVar1)(uVar5,PTR_s_set_1002e6510);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar5);
  (*(code *)puVar1)(DAT_100170c08,uVar3,PTR_s_setLineWidth__1002e6530);
  (*(code *)puVar1)(uVar3,PTR_s_stroke_1002e6a90);
  (*(code *)puVar1)(PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98,
                    PTR_s_restoreGraphicsState_1002e6ab0);
  (*(code *)puVar2)(uVar4);
  (*(code *)puVar2)(uVar3);
  return;
}



// ===== drawContentsWithOutline:andText:  @ 0x100053e10 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Function Stack Size: 0x18 bytes */

void Text::drawContentsWithOutline_andText_(ID param_1,SEL param_2,char param_3,char param_4)

{
  bool bVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 in_R8;
  undefined8 in_R9;
  undefined *puVar12;
  SEL op;
  double dVar13;
  ulong uVar14;
  undefined1 auVar15 [16];
  undefined8 local_198;
  undefined8 local_138;
  undefined8 local_130;
  undefined local_118 [8];
  double local_110;
  double local_100;
  undefined local_f8 [8];
  double local_f0;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  code *local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined local_50 [16];
  undefined8 local_40;
  undefined8 local_38;
  
  puVar3 = PTR__objc_msgSend_10027d560;
  uVar6 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_textStorage_1002e9578);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  lVar7 = (*(code *)puVar3)(uVar6,PTR_s_length_1002e6708);
  (*(code *)PTR__objc_release_10027d590)(uVar6);
  if (lVar7 == 0) {
    return;
  }
  if (param_4 == '\0' && param_3 == '\0') {
    return;
  }
  dVar13 = (double)(*(code *)puVar3)(PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98,
                                     PTR_s_currentContextScaleFactor_1002e86c8);
  uVar6 = (*(code *)puVar3)(param_1,PTR_s_class_1002e6a28);
  uVar6 = (*(code *)puVar3)(uVar6,PTR_s_sharedLayoutManager_1002e9728);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  uVar8 = (*(code *)puVar3)(uVar6,PTR_s_textContainers_1002e9730);
  uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
  uVar9 = (*(code *)puVar3)(uVar8,PTR_s_objectAtIndex__1002e6a80,0);
  uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
  (*(code *)PTR__objc_release_10027d590)(uVar8);
  _objc_msgSend_stret(local_50,param_1,PTR_s_bounds_1002e6938);
  (*(code *)puVar3)(local_40,local_38,uVar9,PTR_s_setContainerSize__1002e9738);
  uVar8 = (*(code *)puVar3)(param_1,PTR_s_textStorage_1002e9578);
  uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
  (*(code *)puVar3)(uVar8,PTR_s_addLayoutManager__1002e9698,uVar6);
  (*(code *)PTR__objc_release_10027d590)(uVar8);
  auVar15 = (*(code *)puVar3)(uVar6,PTR_s_glyphRangeForTextContainer__1002e9740,uVar9);
  if (auVar15._8_8_ == 0) goto LAB_100054537;
  (*(code *)puVar3)(PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98,PTR_s_saveGraphicsState_1002e6a70)
  ;
  local_198 = (*(code *)puVar3)(param_1,PTR_s_hasOutline_1002e9570);
  if ((char)local_198 == '\0') {
    bVar1 = false;
LAB_10005401a:
    cVar5 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_hasOutline_1002e9570);
    if (cVar5 == '\0') {
      uVar8 = (*(code *)puVar3)(param_1,PTR_s_color_1002e84d0);
      uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
      cVar5 = (*(code *)puVar3)(uVar8,PTR_s_isLight_1002e9668);
      (*(code *)PTR__objc_release_10027d590)(uVar8);
      if (bVar1) {
        (*(code *)PTR__objc_release_10027d590)(local_198);
      }
      if (cVar5 != '\0') goto LAB_1000540c1;
    }
    else if (bVar1) goto LAB_100054157;
  }
  else {
    uVar8 = (*(code *)puVar3)(param_1,PTR_s_color_1002e84d0);
    local_198 = _objc_retainAutoreleasedReturnValue(uVar8);
    cVar5 = (*(code *)puVar3)(local_198,PTR_s_isLight_1002e9668);
    if (cVar5 != '\0') {
      bVar1 = true;
      goto LAB_10005401a;
    }
    (*(code *)PTR__objc_release_10027d590)(local_198);
LAB_1000540c1:
    uVar8 = (*(code *)puVar3)(PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98,
                              PTR_s_currentContext_1002e6a60);
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
    local_198 = _objc_retainAutorelease(uVar8);
    uVar8 = (*(code *)puVar3)(local_198,PTR_s_graphicsPort_1002e6a68);
    uVar14 = _DAT_100170c70 ^ (ulong)dVar13;
    uVar10 = _CGColorCreateGenericRGB(0,0,0,DAT_100170dc0);
    _CGContextSetShadowWithColor(0,uVar14,dVar13 + dVar13,uVar8,uVar10);
LAB_100054157:
    (*(code *)PTR__objc_release_10027d590)(local_198);
  }
  cVar5 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_hasOutline_1002e9570);
  auVar2._8_8_ = local_a8._8_8_;
  auVar2._0_8_ = local_a8._0_8_;
  op = PTR_s_bounds_1002e6938;
  if ((param_3 != '\0') && (local_a8 = auVar2, cVar5 != '\0')) {
    _objc_msgSend_stret((undefined *)&local_90,param_1,PTR_s_bounds_1002e6938);
    _NSInsetRect(DAT_1001713e8,DAT_1001713e8,&local_70);
    puVar4 = PTR__OBJC_CLASS___NSImage_1002eea70;
    puVar12 = PTR__objc_retain_10027d598;
    local_d8 = PTR___NSConcreteStackBlock_10027d330;
    local_d0 = 0xc2000000;
    local_cc = 0;
    local_c8 = FUN_10005458e;
    local_c0 = &DAT_1002800d0;
    local_b8 = (*(code *)PTR__objc_retain_10027d598)(param_1);
    local_b0 = (*(code *)puVar12)(uVar6);
    local_98 = 0x4059000000000000;
    local_a8 = auVar15;
    uVar8 = (*(code *)puVar3)(local_60,local_58,puVar4,
                              PTR_s_imageWithSize_flipped_drawingHan_1002e9790,1,&local_d8,in_R8,
                              in_R9,local_90,local_88,local_80,local_78);
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
    (*(code *)puVar3)(local_70,local_68,DAT_100170c08,uVar8,
                      PTR_s_drawAtPoint_fromRect_operation_f_1002e83d8,2);
    uVar10 = (*(code *)puVar3)(PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98,
                               PTR_s_currentContext_1002e6a60);
    uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
    uVar10 = _objc_retainAutorelease(uVar10);
    uVar11 = (*(code *)puVar3)(uVar10,PTR_s_graphicsPort_1002e6a68);
    _CGContextSetShadowWithColor(0,0,0,uVar11,0);
    puVar12 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar10);
    op = PTR_s_bounds_1002e6938;
    (*(code *)puVar12)(uVar8);
    (*(code *)puVar12)(local_b0);
    (*(code *)puVar12)(local_b8);
  }
  puVar12 = PTR_s_restoreGraphicsState_1002e6ab0;
  if (param_4 != '\0') {
    uVar8 = (*(code *)puVar3)(PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98,
                              PTR_s_currentContext_1002e6a60);
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
    (*(code *)puVar3)(PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98,
                      PTR_s_saveGraphicsState_1002e6a70);
    puVar12 = PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98;
    uVar8 = _objc_retainAutorelease(uVar8);
    uVar10 = (*(code *)puVar3)(uVar8,PTR_s_graphicsPort_1002e6a68);
    uVar10 = (*(code *)puVar3)(puVar12,PTR_s_graphicsContextWithGraphicsPort__1002e9798,uVar10,1);
    uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
    (*(code *)puVar3)(PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98,
                      PTR_s_setCurrentContext__1002e8f08,uVar10);
    uVar11 = (*(code *)puVar3)(PTR__OBJC_CLASS___NSAffineTransform_1002eeb10,
                               PTR_s_transform_1002e66c8);
    uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
    (*(code *)puVar3)(DAT_100170c08,DAT_100170e18,uVar11,PTR_s_scaleXBy_yBy__1002e97a0);
    _objc_msgSend_stret(local_f8,param_1,op);
    _objc_msgSend_stret(local_118,param_1,op);
    (*(code *)puVar3)(0,(ulong)(local_110 + local_100 + local_f0) ^ _DAT_100170c70,uVar11,
                      PTR_s_translateXBy_yBy__1002e66d0);
    (*(code *)puVar3)(uVar11,PTR_s_concat_1002e8f10);
    _objc_msgSend_stret((undefined *)&local_138,param_1,op);
    (*(code *)puVar3)(local_138,local_130,uVar6,PTR_s_drawGlyphsForGlyphRange_atPoint__1002e9780,
                      auVar15._0_8_,auVar15._8_8_);
    puVar12 = PTR_s_restoreGraphicsState_1002e6ab0;
    (*(code *)puVar3)(PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98,
                      PTR_s_restoreGraphicsState_1002e6ab0);
    puVar4 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar11);
    (*(code *)puVar4)(uVar10);
    (*(code *)puVar4)(uVar8);
  }
  (*(code *)PTR__objc_msgSend_10027d560)(PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98,puVar12);
LAB_100054537:
  uVar8 = (*(code *)puVar3)(param_1,PTR_s_textStorage_1002e9578);
  uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
  (*(code *)puVar3)(uVar8,PTR_s_removeLayoutManager__1002e9710,uVar6);
  puVar3 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar8);
  (*(code *)puVar3)(uVar9);
  (*(code *)puVar3)(uVar6);
  return;
}



// ===== textStorage  @ 0x100054889 =====

/* Function Stack Size: 0x10 bytes */

ID Text::textStorage(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ID IVar6;
  long lVar7;
  
  lVar3 = _textStorage;
  puVar1 = PTR__objc_msgSend_10027d560;
  lVar7 = *(long *)(param_1 + _textStorage);
  if (lVar7 == 0) {
    uVar4 = (*(code *)PTR__objc_msgSend_10027d560)
                      (PTR__OBJC_CLASS___NSTextStorage_1002ef118,PTR_s_alloc_1002e64e8);
    uVar5 = (*(code *)puVar1)(uVar4,PTR_s_init_1002e6538);
    uVar4 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = uVar5;
    puVar2 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar4);
    uVar4 = (*(code *)puVar1)(*(undefined8 *)(param_1 + lVar3),PTR_s_mutableString_1002e9598);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    (*(code *)puVar1)(uVar4,PTR_s_setString__1002e95a0,&cf_Text);
    (*(code *)puVar1)(*(undefined8 *)(param_1 + lVar3),PTR_s_setDelegate__1002e6390,param_1);
    (*(code *)puVar2)(uVar4);
    lVar7 = *(long *)(param_1 + lVar3);
  }
  IVar6 = _objc_retainAutoreleaseReturnValue(lVar7);
  return IVar6;
}



// ===== didGetCreated  @ 0x10005493c =====

/* Function Stack Size: 0x10 bytes */

char Text::didGetCreated(ID param_1,SEL param_2)

{
  return '\x01';
}



// ===== initAtPoint:inWindow:  @ 0x100054947 =====

/* Function Stack Size: 0x28 bytes */

ID Text::initAtPoint_inWindow_(ID param_1,SEL param_2,CGPoint param_3,ID param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 uVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  objc_super local_40;
  
  local_40.super_class = (class_t *)PTR_Text_1002ef900;
  local_40.receiver = param_1;
  IVar5 = _objc_msgSendSuper2(&local_40,PTR_s_initAtPoint_inWindow__1002e6678,param_3.field0_0x0,
                              param_3.field1_0x8);
  puVar1 = PTR__objc_msgSend_10027d560;
  if (IVar5 != 0) {
    uVar6 = (*(code *)PTR__objc_msgSend_10027d560)
                      (PTR__OBJC_CLASS___NSUserDefaults_1002eeab0,
                       PTR_s_standardUserDefaults_1002e6570);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar6);
    fVar9 = (float)(*(code *)puVar1)(uVar7,PTR_s_floatForKey__1002e9090,PTR_cf_fontSize_1002f8bf0);
    *(double *)(IVar5 + _fontSize) = (double)fVar9;
    uVar6 = (*(code *)puVar1)(uVar7,PTR_s_objectForKey__1002e6550,PTR_cf_fontName_1002f8bf8);
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar6);
    uVar6 = *(undefined8 *)(IVar5 + _fontName);
    *(undefined8 *)(IVar5 + _fontName) = uVar8;
    puVar2 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar6);
    puVar3 = PTR_s_boolForKey__1002e6680;
    uVar4 = (*(code *)puVar1)(uVar7,PTR_s_boolForKey__1002e6680,PTR_cf_hasOutline_1002f8c00);
    *(undefined1 *)(IVar5 + _hasOutline) = uVar4;
    uVar4 = (*(code *)puVar1)(uVar7,puVar3,PTR_cf_isItalic_1002f8c08);
    *(undefined1 *)(IVar5 + _isItalic) = uVar4;
    uVar4 = (*(code *)puVar1)(uVar7,puVar3,PTR_cf_isBold_1002f8c10);
    *(undefined1 *)(IVar5 + _isBold) = uVar4;
    (*(code *)puVar2)(uVar7);
  }
  return IVar5;
}



// ===== fontSize  @ 0x100054a6c =====

/* Function Stack Size: 0x10 bytes */

double Text::fontSize(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + _fontSize);
}



// ===== fontName  @ 0x100054a7e =====

/* Function Stack Size: 0x10 bytes */

ID Text::fontName(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + _fontName);
}



// ===== hasOutline  @ 0x100054a8f =====

/* Function Stack Size: 0x10 bytes */

char Text::hasOutline(ID param_1,SEL param_2)

{
  return *(char *)(param_1 + _hasOutline);
}



// ===== isBold  @ 0x100054aa0 =====

/* Function Stack Size: 0x10 bytes */

char Text::isBold(ID param_1,SEL param_2)

{
  return *(char *)(param_1 + _isBold);
}



// ===== isItalic  @ 0x100054ab1 =====

/* Function Stack Size: 0x10 bytes */

char Text::isItalic(ID param_1,SEL param_2)

{
  return *(char *)(param_1 + _isItalic);
}



// ===== isUnderlined  @ 0x100054ac2 =====

/* Function Stack Size: 0x10 bytes */

char Text::isUnderlined(ID param_1,SEL param_2)

{
  return *(char *)(param_1 + _isUnderlined);
}



// ===== textView  @ 0x100054ad3 =====

/* Function Stack Size: 0x10 bytes */

ID Text::textView(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + _textView);
}



// ===== setTextView:  @ 0x100054ae4 =====

/* Function Stack Size: 0x18 bytes */

void Text::setTextView_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = _textView;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = uVar3;
  (*(code *)PTR__objc_release_10027d590)(uVar1);
  return;
}



// ===== setTextStorage:  @ 0x100054b10 =====

/* Function Stack Size: 0x18 bytes */

void Text::setTextStorage_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = _textStorage;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = uVar3;
  (*(code *)PTR__objc_release_10027d590)(uVar1);
  return;
}



// ===== setAttributes:  @ 0x100054b3c =====

/* Function Stack Size: 0x18 bytes */

void Text::setAttributes_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = _attributes;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = uVar3;
  (*(code *)PTR__objc_release_10027d590)(uVar1);
  return;
}



// ===== setOutlineSize:  @ 0x100054b68 =====

/* Function Stack Size: 0x18 bytes */

void Text::setOutlineSize_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + _outlineSize) = param_3;
  return;
}



// ===== textContainerWidth  @ 0x100054b7a =====

/* Function Stack Size: 0x10 bytes */

ID Text::textContainerWidth(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + _textContainerWidth);
}



// ===== setTextContainerWidth:  @ 0x100054b8b =====

/* Function Stack Size: 0x18 bytes */

void Text::setTextContainerWidth_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = _textContainerWidth;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = uVar3;
  (*(code *)PTR__objc_release_10027d590)(uVar1);
  return;
}



// ===== hasUserSpecifiedWidth  @ 0x100054bb7 =====

/* Function Stack Size: 0x10 bytes */

char Text::hasUserSpecifiedWidth(ID param_1,SEL param_2)

{
  return *(char *)(param_1 + _hasUserSpecifiedWidth);
}



// ===== setHasUserSpecifiedWidth:  @ 0x100054bc8 =====

/* Function Stack Size: 0x14 bytes */

void Text::setHasUserSpecifiedWidth_(ID param_1,SEL param_2,char param_3)

{
  *(char *)(param_1 + _hasUserSpecifiedWidth) = param_3;
  return;
}



// ===== bounds  @ 0x100054bd8 =====

/* Function Stack Size: 0x10 bytes */

CGRect * Text::bounds(CGRect *__return_storage_ptr__,ID param_1,SEL param_2)

{
  double dVar1;
  long lVar2;
  
  lVar2 = _bounds;
  (__return_storage_ptr__->field1_0x10).field1_0x8 = *(double *)(param_1 + 0x18 + _bounds);
  (__return_storage_ptr__->field1_0x10).field0_0x0 = *(double *)(param_1 + 0x10 + lVar2);
  dVar1 = *(double *)(param_1 + lVar2);
  (__return_storage_ptr__->field0_0x0).field1_0x8 = *(double *)(param_1 + 8 + lVar2);
  (__return_storage_ptr__->field0_0x0).field0_0x0 = dVar1;
  return __return_storage_ptr__;
}



// ===== setBounds:  @ 0x100054c0a =====

/* Function Stack Size: 0x30 bytes */

void Text::setBounds_(ID param_1,SEL param_2,CGRect param_3)

{
  long lVar1;
  
  lVar1 = _bounds;
  *(double *)(param_1 + 0x18 + _bounds) = param_3.field1_0x10.field1_0x8;
  *(double *)(param_1 + 0x10 + lVar1) = param_3.field1_0x10.field0_0x0;
  *(double *)(param_1 + 8 + lVar1) = param_3.field0_0x0.field1_0x8;
  *(double *)(param_1 + lVar1) = param_3.field0_0x0.field0_0x0;
  return;
}



// ===== numberOfLines  @ 0x100054c3a =====

/* Function Stack Size: 0x10 bytes */

unsigned_long_long Text::numberOfLines(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + _numberOfLines);
}



// ===== setNumberOfLines:  @ 0x100054c4b =====

/* Function Stack Size: 0x18 bytes */

void Text::setNumberOfLines_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  *(unsigned_long_long *)(param_1 + _numberOfLines) = param_3;
  return;
}



// ===== handlesBeingChangedToMatchContents  @ 0x100054c5c =====

/* Function Stack Size: 0x10 bytes */

char Text::handlesBeingChangedToMatchContents(ID param_1,SEL param_2)

{
  return *(char *)(param_1 + _handlesBeingChangedToMatchContents);
}



// ===== setHandlesBeingChangedToMatchContents:  @ 0x100054c6d =====

/* Function Stack Size: 0x14 bytes */

void Text::setHandlesBeingChangedToMatchContents_(ID param_1,SEL param_2,char param_3)

{
  *(char *)(param_1 + _handlesBeingChangedToMatchContents) = param_3;
  return;
}



// ===== .cxx_destruct  @ 0x100054c7d =====

/* Function Stack Size: 0x10 bytes */

void Text::_cxx_destruct(ID param_1,SEL param_2)

{
  _objc_storeStrong(_textContainerWidth + param_1,0);
  _objc_storeStrong(_attributes + param_1,0);
  _objc_storeStrong(_textStorage + param_1,0);
  _objc_storeStrong(_textView + param_1,0);
  _objc_storeStrong(param_1 + _fontName,0);
  return;
}



