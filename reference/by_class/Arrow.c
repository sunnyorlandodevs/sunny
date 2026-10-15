// ===== cursorForHandle:  @ 0x1000696ad =====

/* Function Stack Size: 0x18 bytes */

ID Arrow::cursorForHandle_(ID param_1,SEL param_2,long_long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID IVar4;
  
  puVar1 = PTR__objc_msgSend_10027d560;
  if (param_3 == 0xffffffffffffffff) {
    uVar2 = (*(code *)PTR__objc_msgSend_10027d560)
                      (PTR__OBJC_CLASS___NSCursor_1002eeed0,PTR_s_openHandCursor_1002e8468);
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  }
  else {
    uVar2 = 0;
    if (param_3 < 2) {
      uVar2 = (*(code *)PTR__objc_msgSend_10027d560)
                        (PTR_Cursors_1002eeed8,PTR_s_sharedInstance_1002e65b8);
      uVar3 = _objc_retainAutoreleasedReturnValue(uVar2);
      uVar2 = (*(code *)puVar1)(uVar3,PTR_s_resize_1002e9e78);
      uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
      (*(code *)PTR__objc_release_10027d590)(uVar3);
    }
  }
  IVar4 = _objc_autoreleaseReturnValue(uVar2);
  return IVar4;
}



// ===== zIndex  @ 0x100069731 =====

/* Function Stack Size: 0x10 bytes */

long_long Arrow::zIndex(ID param_1,SEL param_2)

{
  return 3;
}



// ===== scaleTo:  @ 0x10006973c =====

/* Function Stack Size: 0x18 bytes */

void Arrow::scaleTo_(ID param_1,SEL param_2,double param_3)

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
  double adStack_1c8 [16];
  double local_148;
  double dStack_140;
  double local_130 [16];
  double local_b0 [16];
  
  bVar9 = 0;
  local_148 = param_3;
  dStack_140 = in_XMM0_Qb;
  _objc_msgSend_stret((undefined *)local_b0,param_1,PTR_s_handles_1002e6518);
  puVar2 = PTR__objc_msgSend_10027d560;
  uVar3 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_class_1002e6a28);
  lVar4 = (*(code *)puVar2)(uVar3,PTR_s_numberOfHandles_1002e8488);
  if (0 < lVar4) {
    dStack_140 = local_148;
    lVar8 = 0;
    lVar4 = 0;
    do {
      _objc_msgSend_stret((undefined *)local_130,param_1,PTR_s_handles_1002e6518);
      dVar1 = *(double *)((long)local_130 + lVar8 + 8);
      *(double *)((long)local_b0 + lVar8) = *(double *)((long)local_130 + lVar8) * local_148;
      *(double *)((long)local_b0 + lVar8 + 8) = dVar1 * dStack_140;
      lVar4 = lVar4 + 1;
      uVar3 = (*(code *)puVar2)(param_1,PTR_s_class_1002e6a28);
      lVar5 = (*(code *)puVar2)(uVar3,PTR_s_numberOfHandles_1002e8488);
      lVar8 = lVar8 + 0x10;
    } while (lVar4 < lVar5);
  }
  pdVar6 = local_b0;
  pdVar7 = adStack_1c8;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *pdVar7 = *pdVar6;
    pdVar6 = pdVar6 + (ulong)bVar9 * -2 + 1;
    pdVar7 = pdVar7 + (ulong)bVar9 * -2 + 1;
  }
  (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_setHandles__1002e8480);
  return;
}



// ===== resizeByMovingHandle:withDelta:toLocation:  @ 0x10006983f =====

/* Function Stack Size: 0x38 bytes */

long_long Arrow::resizeByMovingHandle_withDelta_toLocation_
                    (ID param_1,SEL param_2,long_long param_3,CGPoint param_4,CGPoint param_5)

{
  undefined *op;
  char cVar1;
  long lVar2;
  double *pdVar3;
  double *pdVar4;
  byte bVar5;
  double dVar6;
  double dVar7;
  double adStack_258 [16];
  double local_1d8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  double local_1b8;
  double local_1b0;
  double local_1a8;
  double local_1a0;
  double local_198;
  double local_190;
  undefined local_128 [16];
  double local_118;
  double local_110;
  double local_a8;
  double local_a0;
  
  op = PTR_s_handles_1002e6518;
  local_1d0 = param_5.field1_0x8;
  local_1d8 = param_5.field0_0x0;
  bVar5 = 0;
  _objc_msgSend_stret((undefined *)&local_a8,param_1,PTR_s_handles_1002e6518,param_4.field0_0x0,
                      param_4.field1_0x8);
  local_1b0 = local_a8;
  local_1b8 = local_a0;
  _objc_msgSend_stret(local_128,param_1,op);
  if (param_3 == 0) {
    local_1c8 = local_110;
    local_1c0 = local_118;
    local_1b0 = local_1d8;
    local_1b8 = local_1d0;
  }
  else {
    local_1c8 = local_1d0;
    local_1c0 = local_1d8;
    if (param_3 != 1) {
      local_1c8 = local_110;
      local_1c0 = local_118;
    }
  }
  cVar1 = (*(code *)PTR__objc_msgSend_10027d560)
                    (PTR__OBJC_CLASS___NSEvent_1002eebe0,PTR_s_isShiftDown_1002e7130);
  if (cVar1 != '\0') {
    if (param_3 == 0) {
      local_1b0 = (double)FUN_10004f039(local_1c0,local_1c8,local_1d8,local_1d0);
      dVar6 = (double)FUN_10004f05a(local_1c0,local_1c8,local_1d8,local_1d0);
      dVar7 = (double)_round(dVar6 / DAT_1001714c8);
      dVar6 = local_1c8;
      local_1b0 = (double)FUN_10004f091(local_1c0,local_1c8,local_1b0,DAT_1001714c8 * dVar7);
      local_1b8 = dVar6;
    }
    else {
      local_1c0 = (double)FUN_10004f039(local_1b0,local_1b8,local_1d8,local_1d0);
      dVar6 = (double)FUN_10004f05a(local_1b0,local_1b8,local_1d8,local_1d0);
      dVar7 = (double)_round(dVar6 / DAT_1001714c8);
      dVar6 = local_1b8;
      local_1c0 = (double)FUN_10004f091(local_1b0,local_1b8,local_1c0,DAT_1001714c8 * dVar7);
      local_1c8 = dVar6;
    }
  }
  _objc_msgSend_stret((undefined *)&local_1a8,param_1,op);
  local_1a8 = local_1b0;
  local_1a0 = local_1b8;
  local_198 = local_1c0;
  local_190 = local_1c8;
  pdVar3 = &local_1a8;
  pdVar4 = adStack_258;
  for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
    *pdVar4 = *pdVar3;
    pdVar3 = pdVar3 + (ulong)bVar5 * -2 + 1;
    pdVar4 = pdVar4 + (ulong)bVar5 * -2 + 1;
  }
  (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_setHandles__1002e8480);
  return param_3;
}



// ===== translateWithDelta:toLocation:  @ 0x100069aff =====

/* Function Stack Size: 0x30 bytes */

void Arrow::translateWithDelta_toLocation_(ID param_1,SEL param_2,CGPoint param_3,CGPoint param_4)

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



// ===== keyPathsForSettableValues  @ 0x100069c11 =====

/* Function Stack Size: 0x10 bytes */

ID Arrow::keyPathsForSettableValues(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = (*(code *)PTR__objc_msgSend_10027d560)
                    (PTR__OBJC_CLASS___NSSet_1002eec28,PTR_s_setWithObjects__1002e8490,
                     PTR_cf_color_1002f8ac0,PTR_cf_size_1002f8ac8,PTR_cf_hasShadow_1002f8ad0,0);
  return IVar1;
}



// ===== drawingBounds  @ 0x100069cb5 =====

/* Function Stack Size: 0x10 bytes */

CGRect * Arrow::drawingBounds(CGRect *__return_storage_ptr__,ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ID self;
  double dVar4;
  double dVar5;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  uVar3 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_drawingPath_1002e84e0);
  self = _objc_retainAutoreleasedReturnValue(uVar3);
  if (self == 0) {
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_58,self,PTR_s_bounds_1002e6938);
  }
  puVar2 = PTR_s_size_1002e66a8;
  puVar1 = PTR__objc_msgSend_10027d560;
  dVar4 = (double)(*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_size_1002e66a8);
  dVar5 = DAT_1001710f0 - dVar4 * DAT_100170dc0;
  dVar4 = (double)(*(code *)puVar1)(param_1,puVar2);
  _NSInsetRect(dVar5,DAT_1001710f0 - dVar4 * DAT_100170dc0,__return_storage_ptr__);
  (*(code *)PTR__objc_release_10027d590)(self);
  return __return_storage_ptr__;
}



// ===== drawContentsInView:isBeingCreated:isBeingEdited:  @ 0x100069dab =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Function Stack Size: 0x20 bytes */

void Arrow::drawContentsInView_isBeingCreated_isBeingEdited_
               (ID param_1,SEL param_2,ID param_3,char param_4,char param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  char cVar8;
  double dVar9;
  undefined4 local_58;
  undefined4 local_48;
  
  puVar5 = PTR__objc_msgSend_10027d560;
  (*(code *)PTR__objc_msgSend_10027d560)
            (PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98,PTR_s_saveGraphicsState_1002e6a70);
  dVar9 = (double)(*(code *)puVar5)(PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98,
                                    PTR_s_currentContextScaleFactor_1002e86c8);
  cVar8 = (*(code *)puVar5)(param_1,PTR_s_hasShadow_1002e8330);
  if (cVar8 != '\0') {
    uVar1 = (*(code *)puVar5)(PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98,
                              PTR_s_currentContext_1002e6a60);
    uVar1 = _objc_retainAutoreleasedReturnValue(uVar1);
    uVar1 = _objc_retainAutorelease(uVar1);
    uVar2 = (*(code *)puVar5)(uVar1,PTR_s_CGContext_1002e8e78);
    local_58 = (uint)_DAT_100170c70 ^ SUB84(dVar9,0);
    uVar3 = _CGColorCreateGenericRGB(0,0,0,DAT_100170dc0);
    local_48 = SUB84(dVar9 + dVar9,0);
    _CGContextSetShadowWithColor(0,local_58,local_48,uVar2,uVar3);
    (*(code *)PTR__objc_release_10027d590)(uVar1);
  }
  puVar7 = PTR_s_drawingPath_1002e84e0;
  uVar1 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_drawingPath_1002e84e0);
  lVar4 = _objc_retainAutoreleasedReturnValue(uVar1);
  (*(code *)PTR__objc_release_10027d590)(lVar4);
  if (lVar4 != 0) {
    uVar1 = (*(code *)puVar5)(param_1,PTR_s_color_1002e84d0);
    uVar1 = _objc_retainAutoreleasedReturnValue(uVar1);
    (*(code *)puVar5)(uVar1,PTR_s_set_1002e6510);
    puVar6 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar1);
    uVar1 = (*(code *)puVar5)(param_1,puVar7);
    uVar1 = _objc_retainAutoreleasedReturnValue(uVar1);
    (*(code *)puVar5)(uVar1,PTR_s_fill_1002e6aa8);
    (*(code *)puVar6)(uVar1);
  }
  (*(code *)PTR__objc_msgSend_10027d560)
            (PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98,PTR_s_restoreGraphicsState_1002e6ab0);
  return;
}



// ===== didGetCreated  @ 0x100069f34 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Function Stack Size: 0x10 bytes */

char Arrow::didGetCreated(ID param_1,SEL param_2)

{
  undefined *op;
  double dVar1;
  undefined local_118 [16];
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_98;
  undefined8 local_90;
  
  op = PTR_s_handles_1002e6518;
  _objc_msgSend_stret((undefined *)&local_98,param_1,PTR_s_handles_1002e6518);
  _objc_msgSend_stret(local_118,param_1,op);
  dVar1 = (double)FUN_10004f039(local_98,local_90,local_108,local_100);
  return _DAT_1001712b0 < dVar1;
}



// ===== drawSelectionInView:  @ 0x100069fcf =====

/* Function Stack Size: 0x18 bytes */

void Arrow::drawSelectionInView_(ID param_1,SEL param_2,ID param_3)

{
  return;
}



// ===== hitTestPath  @ 0x100069fd5 =====

/* Function Stack Size: 0x10 bytes */

CGPath * Arrow::hitTestPath(ID param_1,SEL param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  CGPath *pCVar5;
  
  lVar2 = _hitTestPath;
  puVar1 = PTR__objc_msgSend_10027d560;
  pCVar5 = *(CGPath **)(param_1 + _hitTestPath);
  if (pCVar5 == (CGPath *)0x0) {
    uVar3 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_drawingPath_1002e84e0);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    uVar4 = (*(code *)puVar1)(uVar3,PTR_s_quartzPath_1002e86f0);
    uVar4 = _CGPathCreateCopyByStrokingPath(DAT_100170eb0,DAT_100170eb0,uVar4,0,0,0);
    *(undefined8 *)(param_1 + lVar2) = uVar4;
    (*(code *)PTR__objc_release_10027d590)(uVar3);
    pCVar5 = *(CGPath **)(param_1 + lVar2);
  }
  return pCVar5;
}



// ===== isContentsUnderPoint:  @ 0x10006a053 =====

/* Function Stack Size: 0x20 bytes */

char Arrow::isContentsUnderPoint_(ID param_1,SEL param_2,CGPoint param_3)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  bool bVar4;
  
  uVar3 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_hitTestPath_1002e84e8);
  cVar2 = _CGPathContainsPoint(param_3.field0_0x0,param_3.field1_0x8,uVar3,0,0);
  puVar1 = PTR__objc_msgSend_10027d560;
  bVar4 = true;
  if (cVar2 == '\0') {
    uVar3 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_drawingPath_1002e84e0);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    cVar2 = (*(code *)puVar1)(param_3.field0_0x0,param_3.field1_0x8,uVar3,
                              PTR_s_containsPoint__1002e9e80);
    (*(code *)PTR__objc_release_10027d590)(uVar3);
    bVar4 = cVar2 != '\0';
  }
  return bVar4;
}



// ===== isContentsInRect:  @ 0x10006a0e8 =====

/* Function Stack Size: 0x30 bytes */

char Arrow::isContentsInRect_(ID param_1,SEL param_2,CGRect param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_hitTestPath_1002e84e8);
  cVar1 = FUN_10004f0ea(uVar2);
  return cVar1;
}



// ===== keysForValuesToObserveForUndo  @ 0x10006a131 =====

/* Function Stack Size: 0x10 bytes */

ID Arrow::keysForValuesToObserveForUndo(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = (*(code *)PTR__objc_msgSend_10027d560)
                    (PTR__OBJC_CLASS___NSSet_1002eec28,PTR_s_setWithObjects__1002e8490,
                     PTR_cf_handles_1002f8ab8,PTR_cf_color_1002f8ac0,PTR_cf_size_1002f8ac8,0);
  return IVar1;
}



// ===== dealloc  @ 0x10006a171 =====

/* Function Stack Size: 0x10 bytes */

void Arrow::dealloc(ID param_1,SEL param_2)

{
  objc_super local_20;
  
  if (*(long *)(param_1 + _hitTestPath) != 0) {
    _CFRelease();
  }
  local_20.super_class = (class_t *)PTR_Arrow_1002ef9b0;
  local_20.receiver = param_1;
  _objc_msgSendSuper2(&local_20,PTR_s_dealloc_1002e63c0);
  return;
}



// ===== setSize:  @ 0x10006a1b8 =====

/* Function Stack Size: 0x18 bytes */

void Arrow::setSize_(ID param_1,SEL param_2,double param_3)

{
  undefined8 uVar1;
  objc_super local_20;
  
  local_20.super_class = (class_t *)PTR_Arrow_1002ef9b0;
  local_20.receiver = param_1;
  _objc_msgSendSuper2(&local_20,PTR_s_setSize__1002e8348);
  *(undefined8 *)(param_1 + _hitTestPath) = 0;
  uVar1 = *(undefined8 *)(param_1 + _drawingPath);
  *(undefined8 *)(param_1 + _drawingPath) = 0;
  (*(code *)PTR__objc_release_10027d590)(uVar1);
  return;
}



// ===== setHandles:  @ 0x10006a212 =====

/* Function Stack Size: 0x90 bytes */

void Arrow::setHandles_(ID param_1,SEL param_2,AnonymousStructure3 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 auStack_a8 [17];
  objc_super local_20;
  
  local_20.super_class = (class_t *)PTR_Arrow_1002ef9b0;
  puVar4 = auStack_a8;
  puVar3 = (undefined8 *)register0x00000020;
  local_20.receiver = param_1;
  for (lVar2 = 0x10; puVar3 = puVar3 + 1, lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar4 = puVar4 + 1;
  }
  _objc_msgSendSuper2(&local_20,PTR_s_setHandles__1002e8480);
  *(undefined8 *)(param_1 + _hitTestPath) = 0;
  uVar1 = *(undefined8 *)(param_1 + _drawingPath);
  *(undefined8 *)(param_1 + _drawingPath) = 0;
  (*(code *)PTR__objc_release_10027d590)(uVar1);
  return;
}



// ===== drawingPath  @ 0x10006a284 =====

/* Function Stack Size: 0x10 bytes */

ID Arrow::drawingPath(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + _drawingPath);
}



// ===== setDrawingPath:  @ 0x10006a295 =====

/* Function Stack Size: 0x18 bytes */

void Arrow::setDrawingPath_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = _drawingPath;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = uVar3;
  (*(code *)PTR__objc_release_10027d590)(uVar1);
  return;
}



// ===== setHitTestPath:  @ 0x10006a2c1 =====

/* Function Stack Size: 0x18 bytes */

void Arrow::setHitTestPath_(ID param_1,SEL param_2,CGPath *param_3)

{
  *(CGPath **)(param_1 + _hitTestPath) = param_3;
  return;
}



// ===== .cxx_destruct  @ 0x10006a2d2 =====

/* Function Stack Size: 0x10 bytes */

void Arrow::_cxx_destruct(ID param_1,SEL param_2)

{
  _objc_storeStrong(param_1 + _drawingPath,0);
  return;
}



