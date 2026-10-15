// ===== zIndex  @ 0x10002bfef =====

/* Function Stack Size: 0x10 bytes */

long_long Pixelate::zIndex(ID param_1,SEL param_2)

{
  return 1;
}



// ===== cursorForHandle:  @ 0x10002c013 =====

/* Function Stack Size: 0x18 bytes */

ID Pixelate::cursorForHandle_(ID param_1,SEL param_2,long_long param_3)

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
      if ((param_3 & 0xfffffffffffffffd) != 1) goto LAB_10002c0c0;
      uVar2 = (*(code *)PTR__objc_msgSend_10027d560)
                        (PTR_Cursors_1002eeed8,PTR_s_sharedInstance_1002e65b8);
      uVar3 = _objc_retainAutoreleasedReturnValue(uVar2);
      puVar5 = PTR_s_resizeTopLeftBottomRight_1002e8470;
    }
    uVar2 = (*(code *)puVar1)(uVar3,puVar5);
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    (*(code *)PTR__objc_release_10027d590)(uVar3);
  }
LAB_10002c0c0:
  IVar4 = _objc_autoreleaseReturnValue(uVar2);
  return IVar4;
}



// ===== resizeByMovingHandle:withDelta:toLocation:  @ 0x10002c0cc =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Function Stack Size: 0x38 bytes */

long_long Pixelate::resizeByMovingHandle_withDelta_toLocation_
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
    if ((DAT_1002f9ea0 & 1) == 0) {
      _DAT_1002f9e80 = 1;
      uRam00000001002f9e88 = 0;
      _DAT_1002f9e90 = _DAT_1001710d0;
      uRam00000001002f9e98 = _UNK_1001710d8;
      DAT_1002f9ea0 = 1;
    }
    param_3 = *(long_long *)(&DAT_1002f9e80 + param_3 * 8);
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
    if ((DAT_1002f9ed0 & 1) == 0) {
      _DAT_1002f9eb0 = _DAT_1001710d0;
      uRam00000001002f9eb8 = _UNK_1001710d8;
      _DAT_1002f9ec0 = 1;
      uRam00000001002f9ec8 = 0;
      DAT_1002f9ed0 = 1;
    }
    param_3 = *(long_long *)(&DAT_1002f9eb0 + param_3 * 8);
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



// ===== translateWithDelta:toLocation:  @ 0x10002c4b9 =====

/* Function Stack Size: 0x30 bytes */

void Pixelate::translateWithDelta_toLocation_
               (ID param_1,SEL param_2,CGPoint param_3,CGPoint param_4)

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



// ===== keyPathsForSettableValues  @ 0x10002c5cb =====

/* Function Stack Size: 0x10 bytes */

ID Pixelate::keyPathsForSettableValues(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = (*(code *)PTR__objc_msgSend_10027d560)
                    (PTR__OBJC_CLASS___NSSet_1002eec28,PTR_s_set_1002e6510);
  return IVar1;
}



// ===== drawingBounds  @ 0x10002c624 =====

/* Function Stack Size: 0x10 bytes */

CGRect * Pixelate::drawingBounds(CGRect *__return_storage_ptr__,ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  double dVar4;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  
  puVar2 = PTR_s_size_1002e66a8;
  puVar1 = PTR__objc_msgSend_10027d560;
  dVar3 = (double)(*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_size_1002e66a8);
  dVar4 = DAT_1001710f0 - dVar3 * DAT_100170dc0;
  dVar3 = (double)(*(code *)puVar1)(param_1,puVar2);
  _NSInsetRect(dVar4,DAT_1001710f0 - dVar3 * DAT_100170dc0,&local_50);
  (__return_storage_ptr__->field1_0x10).field1_0x8 = local_38;
  (__return_storage_ptr__->field1_0x10).field0_0x0 = local_40;
  (__return_storage_ptr__->field0_0x0).field1_0x8 = local_48;
  (__return_storage_ptr__->field0_0x0).field0_0x0 = local_50;
  return __return_storage_ptr__;
}



// ===== drawContentsInView:isBeingCreated:isBeingEdited:  @ 0x10002c6f8 =====

/* Function Stack Size: 0x20 bytes */

void Pixelate::drawContentsInView_isBeingCreated_isBeingEdited_
               (ID param_1,SEL param_2,ID param_3,char param_4,char param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined7 in_register_00000009;
  
  puVar1 = PTR__objc_msgSend_10027d560;
  (*(code *)PTR__objc_msgSend_10027d560)
            (PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98,PTR_s_saveGraphicsState_1002e6a70,param_3
             ,CONCAT71(in_register_00000009,param_4));
  uVar2 = (*(code *)puVar1)(param_1,PTR_s_document_1002e69e8);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  uVar3 = (*(code *)puVar1)(uVar2,PTR_s_image_1002e69f0);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*(code *)puVar1)(uVar3,PTR_s_pixelatedImage_1002e8498);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)PTR__objc_release_10027d590)(uVar3);
  (*(code *)PTR__objc_release_10027d590)(uVar2);
  (*(code *)puVar1)(DAT_100170c08,uVar4,PTR_s_drawInRect_fromRect_operation_fr_1002e8360,2);
  (*(code *)puVar1)(PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98,
                    PTR_s_restoreGraphicsState_1002e6ab0);
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  return;
}



// ===== drawSelectionInView:  @ 0x10002c804 =====

/* Function Stack Size: 0x18 bytes */

void Pixelate::drawSelectionInView_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR__objc_msgSend_10027d560;
  (*(code *)PTR__objc_msgSend_10027d560)
            (PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98,PTR_s_saveGraphicsState_1002e6a70);
  uVar3 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSAffineTransform_1002eeb10,PTR_s_transform_1002e66c8)
  ;
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)puVar1)(DAT_100170dc0,DAT_100170dc0,uVar3,PTR_s_translateXBy_yBy__1002e66d0);
  uVar4 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSBezierPath_1002eea90,
                            PTR_s_bezierPathWithRect__1002e6520);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)puVar1)(uVar4,PTR_s_transformUsingAffineTransform__1002e66e8,uVar3);
  uVar5 = (*(code *)puVar1)(DAT_1001710f8,DAT_100171100,DAT_100171108,DAT_100170c08,
                            PTR__OBJC_CLASS___NSColor_1002eea80,
                            PTR_s_colorWithDeviceRed_green_blue_al_1002e84a0);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)puVar1)(uVar5,PTR_s_set_1002e6510);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar5);
  (*(code *)puVar1)(DAT_100170c08,uVar4,PTR_s_setLineWidth__1002e6530);
  (*(code *)puVar1)(uVar4,PTR_s_stroke_1002e6a90);
  (*(code *)puVar1)(PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98,
                    PTR_s_restoreGraphicsState_1002e6ab0);
  (*(code *)puVar2)(uVar4);
  (*(code *)puVar2)(uVar3);
  return;
}



// ===== drawingPath  @ 0x10002c963 =====

/* Function Stack Size: 0x10 bytes */

ID Pixelate::drawingPath(ID param_1,SEL param_2)

{
  return 0;
}



// ===== hitTestPath  @ 0x10002c96b =====

/* Function Stack Size: 0x10 bytes */

CGPath * Pixelate::hitTestPath(ID param_1,SEL param_2)

{
  return (CGPath *)0x0;
}



// ===== setHandles:  @ 0x10002c973 =====

/* Function Stack Size: 0x90 bytes */

void Pixelate::setHandles_(ID param_1,SEL param_2,AnonymousStructure3 param_3)

{
  double *pdVar1;
  undefined *op;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 auStack_248 [16];
  double local_1c8;
  undefined8 uStack_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined local_1a8 [56];
  double local_170;
  undefined local_128 [16];
  double local_118;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  objc_super local_28;
  
  local_28.super_class = (class_t *)PTR_Pixelate_1002ef840;
  puVar4 = auStack_248;
  puVar3 = (undefined8 *)register0x00000020;
  local_28.receiver = param_1;
  for (lVar2 = 0x10; puVar3 = puVar3 + 1, lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar4 = puVar4 + 1;
  }
  _objc_msgSendSuper2(&local_28,PTR_s_setHandles__1002e8480);
  op = PTR_s_handles_1002e6518;
  _objc_msgSend_stret((undefined *)&local_a8,param_1,PTR_s_handles_1002e6518);
  local_1b8 = local_a8;
  uStack_1b4 = uStack_a4;
  uStack_1b0 = uStack_a0;
  uStack_1ac = uStack_9c;
  _objc_msgSend_stret(local_128,param_1,op);
  local_1c8 = local_118;
  uStack_1c0 = 0;
  _objc_msgSend_stret(local_1a8,param_1,op);
  lVar2 = _rect;
  pdVar1 = (double *)(param_1 + _rect);
  *pdVar1 = (double)CONCAT44(uStack_1b4,local_1b8);
  pdVar1[1] = (double)CONCAT44(uStack_1ac,uStack_1b0);
  pdVar1 = (double *)(param_1 + 0x10 + lVar2);
  *pdVar1 = local_1c8 - (double)CONCAT44(uStack_1b4,local_1b8);
  pdVar1[1] = local_170 - (double)CONCAT44(uStack_1ac,uStack_1b0);
  return;
}



// ===== didGetCreated  @ 0x10002ca4a =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Function Stack Size: 0x10 bytes */

char Pixelate::didGetCreated(ID param_1,SEL param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  ulong uVar4;
  ulong uVar5;
  
  pdVar1 = (double *)(param_1 + 0x10 + _rect);
  dVar2 = *pdVar1;
  dVar3 = pdVar1[1];
  uVar4 = -(ulong)(dVar2 == 0.0);
  uVar5 = -(ulong)(dVar3 == 0.0);
  return DAT_100170c30 <
         (double)(uVar5 & _UNK_1001710e8 | ~uVar5 & (ulong)dVar3) *
         (double)(uVar4 & _DAT_1001710e0 | ~uVar4 & (ulong)dVar2);
}



// ===== isContentsUnderPoint:  @ 0x10002ca95 =====

/* Function Stack Size: 0x20 bytes */

char Pixelate::isContentsUnderPoint_(ID param_1,SEL param_2,CGPoint param_3)

{
  char cVar1;
  
  cVar1 = _NSPointInRect(param_3.field0_0x0,param_3.field1_0x8);
  return cVar1;
}



// ===== isContentsInRect:  @ 0x10002cad8 =====

/* Function Stack Size: 0x30 bytes */

char Pixelate::isContentsInRect_(ID param_1,SEL param_2,CGRect param_3)

{
  char cVar1;
  
  cVar1 = _NSIntersectsRect();
  return cVar1;
}



// ===== keysForValuesToObserveForUndo  @ 0x10002cb3f =====

/* Function Stack Size: 0x10 bytes */

ID Pixelate::keysForValuesToObserveForUndo(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = (*(code *)PTR__objc_msgSend_10027d560)
                    (PTR__OBJC_CLASS___NSSet_1002eec28,PTR_s_setWithObjects__1002e8490,
                     PTR_cf_handles_1002f8ab8,0);
  return IVar1;
}



