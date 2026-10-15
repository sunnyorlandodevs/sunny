// ===== cursorForHandle:  @ 0x1000314dd =====

/* Function Stack Size: 0x18 bytes */

ID Overlay::cursorForHandle_(ID param_1,SEL param_2,long_long param_3)

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
      if ((param_3 & 0xfffffffffffffffd) != 1) goto LAB_10003158a;
      uVar2 = (*(code *)PTR__objc_msgSend_10027d560)
                        (PTR_Cursors_1002eeed8,PTR_s_sharedInstance_1002e65b8);
      uVar3 = _objc_retainAutoreleasedReturnValue(uVar2);
      puVar5 = PTR_s_resizeTopLeftBottomRight_1002e8470;
    }
    uVar2 = (*(code *)puVar1)(uVar3,puVar5);
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    (*(code *)PTR__objc_release_10027d590)(uVar3);
  }
LAB_10003158a:
  IVar4 = _objc_autoreleaseReturnValue(uVar2);
  return IVar4;
}



// ===== zIndex  @ 0x100031596 =====

/* Function Stack Size: 0x10 bytes */

long_long Overlay::zIndex(ID param_1,SEL param_2)

{
  return 2;
}



// ===== resizeByMovingHandle:withDelta:toLocation:  @ 0x1000315a1 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Function Stack Size: 0x38 bytes */

long_long Overlay::resizeByMovingHandle_withDelta_toLocation_
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
    if ((DAT_1002f9f20 & 1) == 0) {
      _DAT_1002f9f00 = 1;
      uRam00000001002f9f08 = 0;
      _DAT_1002f9f10 = _DAT_1001710d0;
      uRam00000001002f9f18 = _UNK_1001710d8;
      DAT_1002f9f20 = 1;
    }
    param_3 = *(long_long *)(&DAT_1002f9f00 + param_3 * 8);
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
    if ((DAT_1002f9f50 & 1) == 0) {
      _DAT_1002f9f30 = _DAT_1001710d0;
      uRam00000001002f9f38 = _UNK_1001710d8;
      _DAT_1002f9f40 = 1;
      uRam00000001002f9f48 = 0;
      DAT_1002f9f50 = 1;
    }
    param_3 = *(long_long *)(&DAT_1002f9f30 + param_3 * 8);
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



// ===== translateWithDelta:toLocation:  @ 0x10003198e =====

/* Function Stack Size: 0x30 bytes */

void Overlay::translateWithDelta_toLocation_(ID param_1,SEL param_2,CGPoint param_3,CGPoint param_4)

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



// ===== keyPathsForSettableValues  @ 0x100031aa0 =====

/* Function Stack Size: 0x10 bytes */

ID Overlay::keyPathsForSettableValues(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = (*(code *)PTR__objc_msgSend_10027d560)
                    (PTR__OBJC_CLASS___NSSet_1002eec28,PTR_s_setWithObjects__1002e8490,
                     PTR_cf_color_1002f8ac0,PTR_cf_size_1002f8ac8,PTR_cf_hasShadow_1002f8ad0,0);
  return IVar1;
}



// ===== drawingBounds  @ 0x100031b44 =====

/* Function Stack Size: 0x10 bytes */

CGRect * Overlay::drawingBounds(CGRect *__return_storage_ptr__,ID param_1,SEL param_2)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  ID self;
  ID self_00;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  double dStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  double local_48;
  undefined8 uStack_40;
  
  puVar1 = PTR_s_canvasView_1002e6c08;
  uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_canvasView_1002e6c08);
  self = _objc_retainAutoreleasedReturnValue(uVar4);
  if (self == 0) {
    local_48 = 0.0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_58,self,PTR_s_frame_1002e64b0);
  }
  dVar3 = local_48;
  uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,puVar1);
  self_00 = _objc_retainAutoreleasedReturnValue(uVar4);
  if (self_00 == 0) {
    local_68 = 0;
    dStack_60 = 0.0;
    local_78 = 0;
    uStack_70 = 0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_78,self_00,PTR_s_frame_1002e64b0);
  }
  dVar2 = dStack_60;
  (__return_storage_ptr__->field0_0x0).field1_0x8 = 0.0;
  (__return_storage_ptr__->field0_0x0).field0_0x0 = 0.0;
  puVar1 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(self_00);
  (*(code *)puVar1)(self);
  (__return_storage_ptr__->field1_0x10).field0_0x0 = dVar3;
  (__return_storage_ptr__->field1_0x10).field1_0x8 = dVar2;
  return __return_storage_ptr__;
}



// ===== didGetCreated  @ 0x100031c2c =====

/* Function Stack Size: 0x10 bytes */

char Overlay::didGetCreated(ID param_1,SEL param_2)

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



// ===== drawContentsInView:isBeingCreated:isBeingEdited:  @ 0x100031d68 =====

/* Function Stack Size: 0x20 bytes */

void Overlay::drawContentsInView_isBeingCreated_isBeingEdited_
               (ID param_1,SEL param_2,ID param_3,char param_4,char param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  ID self;
  undefined8 uVar5;
  long lVar6;
  undefined7 in_register_00000009;
  undefined *puVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_50 [32];
  
  puVar1 = PTR__objc_msgSend_10027d560;
  (*(code *)PTR__objc_msgSend_10027d560)
            (PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98,PTR_s_saveGraphicsState_1002e6a70,param_3
             ,CONCAT71(in_register_00000009,param_4));
  dVar8 = (double)(*(code *)puVar1)(PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98,
                                    PTR_s_currentContextScaleFactor_1002e86c8);
  cVar3 = (*(code *)puVar1)(param_1,PTR_s_hasShadow_1002e8330);
  if (cVar3 != '\0') {
    uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_drawingPath_1002e84e0);
    self = _objc_retainAutoreleasedReturnValue(uVar4);
    if (self == 0) {
      local_68 = 0;
      uStack_60 = 0;
      local_78 = 0;
      uStack_70 = 0;
    }
    else {
      _objc_msgSend_stret((undefined *)&local_78,self,PTR_s_bounds_1002e6938);
    }
    puVar7 = PTR_s_strokeWidth_1002e6528;
    dVar9 = (double)(*(code *)puVar1)(param_1,PTR_s_strokeWidth_1002e6528);
    dVar9 = dVar9 * DAT_100170dc8;
    dVar10 = (double)(*(code *)puVar1)(param_1,puVar7);
    _NSInsetRect(dVar9,DAT_100170dc8 * dVar10,local_50);
    (*(code *)PTR__objc_release_10027d590)(self);
    uVar4 = (*(code *)puVar1)(PTR_OverlayCircle_1002eee70,PTR_s_class_1002e6a28);
    cVar3 = (*(code *)puVar1)(param_1,PTR_s_isKindOfClass__1002e6ef8,uVar4);
    puVar7 = PTR_s_bezierPathWithRect__1002e6520;
    if (cVar3 != '\0') {
      puVar7 = PTR_s_bezierPathWithOvalInRect__1002e86d0;
    }
    uVar4 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSBezierPath_1002eea90,puVar7);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    (*(code *)puVar1)(uVar4,PTR_s_addClip_1002e86d8);
    (*(code *)PTR__objc_release_10027d590)(uVar4);
    uVar4 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSShadow_1002eef38,PTR_s_alloc_1002e64e8);
    uVar4 = (*(code *)puVar1)(uVar4,PTR_s_init_1002e6538);
    uVar5 = (*(code *)puVar1)(0,DAT_100171190,PTR__OBJC_CLASS___NSColor_1002eea80,
                              PTR_s_colorWithWhite_alpha__1002e6508);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)puVar1)(uVar4,PTR_s_setShadowColor__1002e86e0,uVar5);
    puVar7 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar5);
    (*(code *)puVar1)(dVar8 + dVar8,uVar4,PTR_s_setShadowBlurRadius__1002e86e8);
    (*(code *)puVar1)(uVar4,PTR_s_set_1002e6510);
    (*(code *)puVar7)(uVar4);
  }
  puVar7 = PTR_s_drawingPath_1002e84e0;
  uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_drawingPath_1002e84e0);
  lVar6 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)PTR__objc_release_10027d590)(lVar6);
  if (lVar6 != 0) {
    uVar4 = (*(code *)puVar1)(param_1,PTR_s_color_1002e84d0);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    (*(code *)puVar1)(uVar4,PTR_s_set_1002e6510);
    puVar2 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar4);
    uVar4 = (*(code *)puVar1)(param_1,puVar7);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    (*(code *)puVar1)(uVar4,PTR_s_stroke_1002e6a90);
    (*(code *)puVar2)(uVar4);
  }
  (*(code *)PTR__objc_msgSend_10027d560)
            (PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98,PTR_s_restoreGraphicsState_1002e6ab0);
  return;
}



// ===== drawSelectionInView:  @ 0x10003202e =====

/* Function Stack Size: 0x18 bytes */

void Overlay::drawSelectionInView_(ID param_1,SEL param_2,ID param_3)

{
  return;
}



// ===== hitTestPath  @ 0x100032034 =====

/* Function Stack Size: 0x10 bytes */

CGPath * Overlay::hitTestPath(ID param_1,SEL param_2)

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



// ===== isContentsUnderPoint:  @ 0x1000320d3 =====

/* Function Stack Size: 0x20 bytes */

char Overlay::isContentsUnderPoint_(ID param_1,SEL param_2,CGPoint param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_hitTestPath_1002e84e8);
  cVar1 = _CGPathContainsPoint(param_3.field0_0x0,param_3.field1_0x8,uVar2,0,0);
  return cVar1;
}



// ===== isContentsInRect:  @ 0x100032111 =====

/* Function Stack Size: 0x30 bytes */

char Overlay::isContentsInRect_(ID param_1,SEL param_2,CGRect param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_hitTestPath_1002e84e8);
  cVar1 = FUN_10004f0ea(uVar2);
  return cVar1 != '\0';
}



// ===== keysForValuesToObserveForUndo  @ 0x10003215f =====

/* Function Stack Size: 0x10 bytes */

ID Overlay::keysForValuesToObserveForUndo(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = (*(code *)PTR__objc_msgSend_10027d560)
                    (PTR__OBJC_CLASS___NSSet_1002eec28,PTR_s_setWithObjects__1002e8490,
                     PTR_cf_handles_1002f8ab8,PTR_cf_color_1002f8ac0,PTR_cf_size_1002f8ac8,0);
  return IVar1;
}



// ===== dealloc  @ 0x10003219f =====

/* Function Stack Size: 0x10 bytes */

void Overlay::dealloc(ID param_1,SEL param_2)

{
  objc_super local_20;
  
  _NSLog(&cf_dealloc___,param_1);
  if (*(long *)(param_1 + _hitTestPath) != 0) {
    _CFRelease();
  }
  local_20.super_class = (class_t *)PTR_Overlay_1002ef868;
  local_20.receiver = param_1;
  _objc_msgSendSuper2(&local_20,PTR_s_dealloc_1002e63c0);
  return;
}



// ===== strokeWidth  @ 0x1000321f7 =====

/* Function Stack Size: 0x10 bytes */

double Overlay::strokeWidth(ID param_1,SEL param_2)

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



// ===== setHandles:  @ 0x100032229 =====

/* Function Stack Size: 0x90 bytes */

void Overlay::setHandles_(ID param_1,SEL param_2,AnonymousStructure3 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 auStack_a8 [17];
  objc_super local_20;
  
  local_20.super_class = (class_t *)PTR_Overlay_1002ef868;
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



// ===== setSize:  @ 0x10003229b =====

/* Function Stack Size: 0x18 bytes */

void Overlay::setSize_(ID param_1,SEL param_2,double param_3)

{
  undefined8 uVar1;
  objc_super local_20;
  
  local_20.super_class = (class_t *)PTR_Overlay_1002ef868;
  local_20.receiver = param_1;
  _objc_msgSendSuper2(&local_20,PTR_s_setSize__1002e8348);
  *(undefined8 *)(param_1 + _hitTestPath) = 0;
  uVar1 = *(undefined8 *)(param_1 + _drawingPath);
  *(undefined8 *)(param_1 + _drawingPath) = 0;
  (*(code *)PTR__objc_release_10027d590)(uVar1);
  return;
}



// ===== drawingPath  @ 0x1000325bf =====

/* Function Stack Size: 0x10 bytes */

ID Overlay::drawingPath(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + _drawingPath);
}



// ===== setHitTestPath:  @ 0x1000325d0 =====

/* Function Stack Size: 0x18 bytes */

void Overlay::setHitTestPath_(ID param_1,SEL param_2,CGPath *param_3)

{
  *(CGPath **)(param_1 + _hitTestPath) = param_3;
  return;
}



// ===== .cxx_destruct  @ 0x1000325e1 =====

/* Function Stack Size: 0x10 bytes */

void Overlay::_cxx_destruct(ID param_1,SEL param_2)

{
  _objc_storeStrong(param_1 + _drawingPath,0);
  return;
}



