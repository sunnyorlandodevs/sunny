// ===== cursorForHandle:  @ 0x10005a254 =====

/* Function Stack Size: 0x18 bytes */

ID Shape::cursorForHandle_(ID param_1,SEL param_2,long_long param_3)

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
    uVar2 = 0;
    if ((param_3 & 0xfffffffffffffffd) == 0) {
      uVar2 = (*(code *)PTR__objc_msgSend_10027d560)
                        (PTR_Cursors_1002eeed8,PTR_s_sharedInstance_1002e65b8);
      uVar3 = _objc_retainAutoreleasedReturnValue(uVar2);
      puVar5 = PTR_s_resizeTopRightBottomLeft_1002e8478;
    }
    else {
      if ((param_3 & 0xfffffffffffffffd) != 1) goto LAB_10005a301;
      uVar2 = (*(code *)PTR__objc_msgSend_10027d560)
                        (PTR_Cursors_1002eeed8,PTR_s_sharedInstance_1002e65b8);
      uVar3 = _objc_retainAutoreleasedReturnValue(uVar2);
      puVar5 = PTR_s_resizeTopLeftBottomRight_1002e8470;
    }
    uVar2 = (*(code *)puVar1)(uVar3,puVar5);
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    (*(code *)PTR__objc_release_10027d590)(uVar3);
  }
LAB_10005a301:
  IVar4 = _objc_autoreleaseReturnValue(uVar2);
  return IVar4;
}



// ===== zIndex  @ 0x10005a30d =====

/* Function Stack Size: 0x10 bytes */

long_long Shape::zIndex(ID param_1,SEL param_2)

{
  return 3;
}



// ===== resizeByMovingHandle:withDelta:toLocation:  @ 0x10005a318 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Function Stack Size: 0x38 bytes */

long_long Shape::resizeByMovingHandle_withDelta_toLocation_
                    (ID param_1,SEL param_2,long_long param_3,CGPoint param_4,CGPoint param_5)

{
  undefined *op;
  long lVar1;
  double *pdVar2;
  double *pdVar3;
  byte bVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double adStack_368 [16];
  double local_2e8;
  double local_2e0;
  double local_2d8;
  double local_2d0;
  double local_2c8;
  double local_2c0;
  double local_2b8;
  double local_2b0;
  double local_2a8;
  double local_2a0;
  double local_298;
  double local_290;
  double local_288;
  double local_280;
  double local_278;
  double local_270;
  undefined local_228 [32];
  double local_208;
  double local_200;
  undefined local_1a8 [16];
  double local_198;
  double local_190;
  undefined local_128 [48];
  double local_f8;
  double local_f0;
  double local_a8;
  double local_a0;
  
  op = PTR_s_handles_1002e6518;
  local_2e8 = param_4.field1_0x8;
  local_2e0 = param_4.field0_0x0;
  bVar4 = 0;
  _objc_msgSend_stret((undefined *)&local_a8,param_1,PTR_s_handles_1002e6518,local_2e0,local_2e8,
                      param_5.field0_0x0,param_5.field1_0x8);
  local_2d0 = local_a8;
  local_2d8 = local_a0;
  _objc_msgSend_stret(local_128,param_1,op);
  local_2b8 = local_f8;
  local_2b0 = local_f0;
  _objc_msgSend_stret(local_1a8,param_1,op);
  local_2c8 = local_198;
  local_2c0 = local_190;
  _objc_msgSend_stret(local_228,param_1,op);
  if ((param_3 == 3) || (param_3 == 0)) {
    local_2d0 = local_2d0 + local_2e0;
    local_2b8 = local_2b8 + local_2e0;
  }
  else if (param_3 - 1 < 2) {
    local_2c8 = local_2c8 + local_2e0;
    local_208 = local_208 + local_2e0;
  }
  dVar6 = local_200;
  dVar7 = local_208;
  dVar8 = local_2d8;
  dVar9 = local_2d0;
  dVar10 = local_2b0;
  dVar11 = local_2b8;
  dVar5 = local_2c0;
  if (local_2c8 < local_2d0) {
    if ((DAT_1002fa0d0 & 1) == 0) {
      _DAT_1002fa0b0 = 1;
      uRam00000001002fa0b8 = 0;
      _DAT_1002fa0c0 = _DAT_1001710d0;
      uRam00000001002fa0c8 = _UNK_1001710d8;
      DAT_1002fa0d0 = 1;
    }
    param_3 = *(long_long *)(&DAT_1002fa0b0 + param_3 * 8);
    dVar6 = local_2b0;
    dVar7 = local_2b8;
    dVar8 = local_2c0;
    dVar9 = local_2c8;
    dVar10 = local_200;
    dVar11 = local_208;
    local_2c8 = local_2d0;
    dVar5 = local_2d8;
  }
  if (param_3 < 2) {
    dVar8 = dVar8 + local_2e8;
    dVar5 = dVar5 + local_2e8;
  }
  else if ((param_3 & 0xfffffffffffffffe) == 2) {
    dVar6 = dVar6 + local_2e8;
    dVar10 = dVar10 + local_2e8;
  }
  local_2e8 = dVar8;
  local_2e0 = dVar7;
  local_2d8 = dVar9;
  local_2d0 = dVar6;
  local_2c0 = dVar10;
  local_2b8 = dVar5;
  local_2b0 = dVar11;
  if (dVar10 < dVar8) {
    if ((DAT_1002fa100 & 1) == 0) {
      _DAT_1002fa0e0 = _DAT_1001710d0;
      uRam00000001002fa0e8 = _UNK_1001710d8;
      _DAT_1002fa0f0 = 1;
      uRam00000001002fa0f8 = 0;
      DAT_1002fa100 = 1;
    }
    param_3 = *(long_long *)(&DAT_1002fa0e0 + param_3 * 8);
    local_2e8 = dVar10;
    local_2e0 = local_2c8;
    local_2d8 = dVar11;
    local_2d0 = dVar5;
    local_2c8 = dVar7;
    local_2c0 = dVar8;
    local_2b8 = dVar6;
    local_2b0 = dVar9;
  }
  _objc_msgSend_stret((undefined *)&local_2a8,param_1,op);
  local_2a8 = local_2d8;
  local_2a0 = local_2e8;
  local_298 = local_2c8;
  local_290 = local_2b8;
  local_288 = local_2e0;
  local_280 = local_2d0;
  local_278 = local_2b0;
  local_270 = local_2c0;
  pdVar2 = &local_2a8;
  pdVar3 = adStack_368;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pdVar3 = *pdVar2;
    pdVar2 = pdVar2 + (ulong)bVar4 * -2 + 1;
    pdVar3 = pdVar3 + (ulong)bVar4 * -2 + 1;
  }
  (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_setHandles__1002e8480);
  return param_3;
}



// ===== translateWithDelta:toLocation:  @ 0x10005a705 =====

/* Function Stack Size: 0x30 bytes */

void Shape::translateWithDelta_toLocation_(ID param_1,SEL param_2,CGPoint param_3,CGPoint param_4)

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



// ===== keyPathsForSettableValues  @ 0x10005a817 =====

/* Function Stack Size: 0x10 bytes */

ID Shape::keyPathsForSettableValues(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = (*(code *)PTR__objc_msgSend_10027d560)
                    (PTR__OBJC_CLASS___NSSet_1002eec28,PTR_s_setWithObjects__1002e8490,
                     PTR_cf_color_1002f8ac0,PTR_cf_size_1002f8ac8,PTR_cf_hasShadow_1002f8ad0,0);
  return IVar1;
}



// ===== drawingBounds  @ 0x10005a8bb =====

/* Function Stack Size: 0x10 bytes */

CGRect * Shape::drawingBounds(CGRect *__return_storage_ptr__,ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ID self;
  double dVar4;
  double dVar5;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  
  uVar3 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_drawingPath_1002e84e0);
  self = _objc_retainAutoreleasedReturnValue(uVar3);
  if (self == 0) {
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_78,self,PTR_s_bounds_1002e6938);
  }
  puVar2 = PTR_s_size_1002e66a8;
  puVar1 = PTR__objc_msgSend_10027d560;
  dVar4 = (double)(*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_size_1002e66a8);
  dVar5 = DAT_1001710f0 - dVar4 * DAT_100170dc0;
  dVar4 = (double)(*(code *)puVar1)(param_1,puVar2);
  _NSInsetRect(dVar5,DAT_1001710f0 - dVar4 * DAT_100170dc0,&local_50);
  (*(code *)PTR__objc_release_10027d590)(self);
  (__return_storage_ptr__->field1_0x10).field1_0x8 = local_38;
  (__return_storage_ptr__->field1_0x10).field0_0x0 = local_40;
  (__return_storage_ptr__->field0_0x0).field1_0x8 = local_48;
  (__return_storage_ptr__->field0_0x0).field0_0x0 = local_50;
  return __return_storage_ptr__;
}



// ===== didGetCreated  @ 0x10005a9d1 =====

/* Function Stack Size: 0x10 bytes */

char Shape::didGetCreated(ID param_1,SEL param_2)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  ID IVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 local_68;
  undefined8 uStack_60;
  double local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  double dStack_30;
  
  puVar1 = PTR_s_drawingPath_1002e84e0;
  uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_drawingPath_1002e84e0);
  IVar5 = _objc_retainAutoreleasedReturnValue(uVar4);
  if (IVar5 == 0) {
    local_38 = 0;
    dStack_30 = 0.0;
    local_48 = 0;
    uStack_40 = 0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_48,IVar5,PTR_s_bounds_1002e6938);
  }
  dVar3 = dStack_30;
  (*(code *)PTR__objc_release_10027d590)(IVar5);
  uVar6 = -(ulong)(dVar3 == 0.0);
  uVar8 = uVar6 & DAT_100170c08;
  uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,puVar1);
  IVar5 = _objc_retainAutoreleasedReturnValue(uVar4);
  if (IVar5 == 0) {
    local_58 = 0.0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_68,IVar5,PTR_s_bounds_1002e6938);
  }
  dVar2 = local_58;
  (*(code *)PTR__objc_release_10027d590)(IVar5);
  uVar7 = -(ulong)(dVar2 == 0.0);
  return DAT_100170c30 <
         (double)(~uVar6 & (ulong)dVar3 | uVar8) *
         (double)(~uVar7 & (ulong)dVar2 | DAT_100170c08 & uVar7);
}



// ===== drawContentsInView:isBeingCreated:isBeingEdited:  @ 0x10005ab0d =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Function Stack Size: 0x20 bytes */

void Shape::drawContentsInView_isBeingCreated_isBeingEdited_
               (ID param_1,SEL param_2,ID param_3,char param_4,char param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  undefined4 local_48;
  undefined4 local_38;
  
  puVar1 = PTR__objc_msgSend_10027d560;
  (*(code *)PTR__objc_msgSend_10027d560)
            (PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98,PTR_s_saveGraphicsState_1002e6a70);
  dVar7 = (double)(*(code *)puVar1)(PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98,
                                    PTR_s_currentContextScaleFactor_1002e86c8);
  cVar3 = (*(code *)puVar1)(param_1,PTR_s_hasShadow_1002e8330);
  if (cVar3 != '\0') {
    uVar4 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98,
                              PTR_s_currentContext_1002e6a60);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar4 = _objc_retainAutorelease(uVar4);
    uVar5 = (*(code *)puVar1)(uVar4,PTR_s_graphicsPort_1002e6a68);
    local_48 = (uint)_DAT_100170c70 ^ SUB84(dVar7,0);
    uVar6 = _CGColorCreateGenericRGB(0,0,0,DAT_100170dc0);
    local_38 = SUB84(dVar7 + dVar7,0);
    _CGContextSetShadowWithColor(0,local_48,local_38,uVar5,uVar6);
    (*(code *)PTR__objc_release_10027d590)(uVar4);
  }
  uVar4 = (*(code *)puVar1)(param_1,PTR_s_color_1002e84d0);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)puVar1)(uVar4,PTR_s_set_1002e6510);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  uVar4 = (*(code *)puVar1)(param_1,PTR_s_drawingPath_1002e84e0);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)puVar1)(uVar4,PTR_s_stroke_1002e6a90);
  (*(code *)puVar2)(uVar4);
  (*(code *)puVar1)(PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98,
                    PTR_s_restoreGraphicsState_1002e6ab0);
  return;
}



// ===== drawSelectionInView:  @ 0x10005ac67 =====

/* Function Stack Size: 0x18 bytes */

void Shape::drawSelectionInView_(ID param_1,SEL param_2,ID param_3)

{
  return;
}



// ===== hitTestPath  @ 0x10005ac6d =====

/* Function Stack Size: 0x10 bytes */

CGPath * Shape::hitTestPath(ID param_1,SEL param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  CGPath *pCVar5;
  double dVar6;
  double dVar7;
  
  lVar2 = _hitTestPath;
  puVar1 = PTR__objc_msgSend_10027d560;
  pCVar5 = *(CGPath **)(param_1 + _hitTestPath);
  if (pCVar5 == (CGPath *)0x0) {
    uVar3 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_drawingPath_1002e84e0);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    uVar4 = (*(code *)puVar1)(uVar3,PTR_s_quartzPath_1002e86f0);
    dVar6 = (double)(*(code *)puVar1)(param_1,PTR_s_strokeWidth_1002e6528);
    dVar7 = DAT_100170eb0;
    if (DAT_100170eb0 <= dVar6) {
      dVar7 = dVar6;
    }
    uVar4 = _CGPathCreateCopyByStrokingPath(dVar7,uVar4,0,0,0);
    *(undefined8 *)(param_1 + lVar2) = uVar4;
    (*(code *)PTR__objc_release_10027d590)(uVar3);
    pCVar5 = *(CGPath **)(param_1 + lVar2);
  }
  return pCVar5;
}



// ===== isContentsUnderPoint:  @ 0x10005ad0c =====

/* Function Stack Size: 0x20 bytes */

char Shape::isContentsUnderPoint_(ID param_1,SEL param_2,CGPoint param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_hitTestPath_1002e84e8);
  cVar1 = _CGPathContainsPoint(param_3.field0_0x0,param_3.field1_0x8,uVar2,0,0);
  return cVar1;
}



// ===== isContentsInRect:  @ 0x10005ad4a =====

/* Function Stack Size: 0x30 bytes */

char Shape::isContentsInRect_(ID param_1,SEL param_2,CGRect param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_hitTestPath_1002e84e8);
  cVar1 = FUN_10004f0ea(uVar2);
  return cVar1 != '\0';
}



// ===== keysForValuesToObserveForUndo  @ 0x10005ad98 =====

/* Function Stack Size: 0x10 bytes */

ID Shape::keysForValuesToObserveForUndo(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = (*(code *)PTR__objc_msgSend_10027d560)
                    (PTR__OBJC_CLASS___NSSet_1002eec28,PTR_s_setWithObjects__1002e8490,
                     PTR_cf_handles_1002f8ab8,PTR_cf_color_1002f8ac0,PTR_cf_size_1002f8ac8,0);
  return IVar1;
}



// ===== dealloc  @ 0x10005add8 =====

/* Function Stack Size: 0x10 bytes */

void Shape::dealloc(ID param_1,SEL param_2)

{
  objc_super local_20;
  
  _NSLog(&cf_dealloc___,param_1);
  if (*(long *)(param_1 + _hitTestPath) != 0) {
    _CFRelease();
  }
  local_20.super_class = (class_t *)PTR_Shape_1002ef938;
  local_20.receiver = param_1;
  _objc_msgSendSuper2(&local_20,PTR_s_dealloc_1002e63c0);
  return;
}



// ===== strokeWidth  @ 0x10005ae30 =====

/* Function Stack Size: 0x10 bytes */

double Shape::strokeWidth(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  
  puVar2 = PTR_Graphic_1002eeee0;
  puVar1 = PTR__objc_msgSend_10027d560;
  (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_size_1002e66a8);
  dVar3 = (double)(*(code *)puVar1)(puVar2,PTR_s_strokeWidthForSize__1002e8508);
  return dVar3;
}



// ===== setHandles:  @ 0x10005ae62 =====

/* Function Stack Size: 0x90 bytes */

void Shape::setHandles_(ID param_1,SEL param_2,AnonymousStructure3 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 auStack_a8 [17];
  objc_super local_20;
  
  local_20.super_class = (class_t *)PTR_Shape_1002ef938;
  puVar4 = auStack_a8;
  puVar3 = (undefined8 *)register0x00000020;
  local_20.receiver = param_1;
  for (lVar2 = 0x10; puVar3 = puVar3 + 1, lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar4 = puVar4 + 1;
  }
  _objc_msgSendSuper2(&local_20,PTR_s_setHandles__1002e8480);
  uVar1 = *(undefined8 *)(param_1 + _drawingPath);
  *(undefined8 *)(param_1 + _drawingPath) = 0;
  (*(code *)PTR__objc_release_10027d590)(uVar1);
  *(undefined8 *)(param_1 + _hitTestPath) = 0;
  return;
}



// ===== setSize:  @ 0x10005aed4 =====

/* Function Stack Size: 0x18 bytes */

void Shape::setSize_(ID param_1,SEL param_2,double param_3)

{
  undefined8 uVar1;
  objc_super local_20;
  
  local_20.super_class = (class_t *)PTR_Shape_1002ef938;
  local_20.receiver = param_1;
  _objc_msgSendSuper2(&local_20,PTR_s_setSize__1002e8348);
  uVar1 = *(undefined8 *)(param_1 + _drawingPath);
  *(undefined8 *)(param_1 + _drawingPath) = 0;
  (*(code *)PTR__objc_release_10027d590)(uVar1);
  *(undefined8 *)(param_1 + _hitTestPath) = 0;
  return;
}



// ===== drawingPath  @ 0x10005af2e =====

/* Function Stack Size: 0x10 bytes */

ID Shape::drawingPath(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + _drawingPath);
}



// ===== setHitTestPath:  @ 0x10005af3f =====

/* Function Stack Size: 0x18 bytes */

void Shape::setHitTestPath_(ID param_1,SEL param_2,CGPath *param_3)

{
  *(CGPath **)(param_1 + _hitTestPath) = param_3;
  return;
}



// ===== .cxx_destruct  @ 0x10005af50 =====

/* Function Stack Size: 0x10 bytes */

void Shape::_cxx_destruct(ID param_1,SEL param_2)

{
  _objc_storeStrong(param_1 + _drawingPath,0);
  return;
}



