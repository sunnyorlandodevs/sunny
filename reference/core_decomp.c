// ===== awakeFromNib  @ 0x1000023b0 =====

/* Function Stack Size: 0x10 bytes */

void ContentView::awakeFromNib(ID param_1,SEL param_2)

{
  (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_setFrame__1002e6500);
  return;
}



// ===== drawRect:  @ 0x1000023f4 =====

/* Function Stack Size: 0x30 bytes */

void ContentView::drawRect_(ID param_1,SEL param_2,CGRect param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  ID local_28;
  undefined *local_20;
  
  local_20 = PTR_ContentView_1002ef708;
  local_28 = param_1;
  NSView::drawRect_((ID)&local_28,PTR_s_drawRect__1002e64a8);
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar2 = (*(code *)PTR__objc_msgSend_10027d560)
                    (DAT_100170c00,DAT_100170c08,PTR__OBJC_CLASS___NSColor_1002eea80,
                     PTR_s_colorWithWhite_alpha__1002e6508);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)puVar1)(uVar2,PTR_s_set_1002e6510);
  (*(code *)PTR__objc_release_10027d590)(uVar2);
  _NSRectFill();
  return;
}



// ===== acceptsFirstResponder  @ 0x1000024bb =====

/* Function Stack Size: 0x10 bytes */

char ContentView::acceptsFirstResponder(ID param_1,SEL param_2)

{
  return '\x01';
}



// ===== dealloc  @ 0x1000024c6 =====

/* Function Stack Size: 0x10 bytes */

void ContentView::dealloc(ID param_1,SEL param_2)

{
  ID local_20;
  undefined *local_18;
  
  _NSLog(&cf_dealloc___,param_1);
  local_18 = PTR_ContentView_1002ef708;
  local_20 = param_1;
  NSView::dealloc((ID)&local_20,PTR_s_dealloc_1002e63c0);
  return;
}



// ===== drawingPath  @ 0x100002509 =====

/* Function Stack Size: 0x10 bytes */

ID OverlayRectangle::drawingPath(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  double dVar2;
  undefined *puVar3;
  long lVar4;
  ID IVar5;
  undefined8 uVar6;
  long lVar7;
  AnonymousStructure3 local_1a8;
  AnonymousStructure3 local_128;
  AnonymousStructure3 local_a8;
  
  lVar4 = Overlay::_drawingPath;
  puVar3 = PTR_s_handles_1002e6518;
  lVar7 = *(long *)(param_1 + Overlay::_drawingPath);
  if (lVar7 == 0) {
    Graphic::handles(&local_a8,param_1,PTR_s_handles_1002e6518);
    Graphic::handles(&local_128,param_1,puVar3);
    Graphic::handles(&local_1a8,param_1,puVar3);
    puVar3 = PTR__objc_msgSend_10027d560;
    IVar5 = NSBezierPath::bezierPathWithRect_
                      ((ID)PTR__OBJC_CLASS___NSBezierPath_1002eea90,
                       PTR_s_bezierPathWithRect__1002e6520);
    uVar6 = _objc_retainAutoreleasedReturnValue(IVar5);
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = uVar6;
    (*(code *)PTR__objc_release_10027d590)(uVar1);
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    dVar2 = Overlay::strokeWidth(param_1,PTR_s_strokeWidth_1002e6528);
    (*(code *)puVar3)(SUB84(dVar2,0),uVar1,PTR_s_setLineWidth__1002e6530);
    lVar7 = *(long *)(param_1 + lVar4);
  }
  IVar5 = _objc_retainAutoreleaseReturnValue(lVar7);
  return IVar5;
}



// ===== initAtPoint:inWindow:  @ 0x100003d2d =====

/* Function Stack Size: 0x28 bytes */

ID ArrowNormal::initAtPoint_inWindow_(ID param_1,SEL param_2,CGPoint param_3,ID param_4)

{
  undefined *puVar1;
  char cVar2;
  ID IVar3;
  ID IVar4;
  undefined8 uVar5;
  ID in_RCX;
  ID local_30;
  undefined *local_28;
  
  local_28 = PTR_ArrowNormal_1002ef710;
  local_30 = param_1;
  IVar3 = Graphic::initAtPoint_inWindow_
                    ((Graphic *)&local_30,(ID)PTR_s_initAtPoint_inWindow__1002e6678,(SEL)param_4,
                     param_3,in_RCX);
  puVar1 = PTR__objc_msgSend_10027d560;
  if (IVar3 != 0) {
    IVar4 = NSUserDefaults::standardUserDefaults
                      ((ID)PTR__OBJC_CLASS___NSUserDefaults_1002eeab0,
                       PTR_s_standardUserDefaults_1002e6570);
    uVar5 = _objc_retainAutoreleasedReturnValue(IVar4);
    cVar2 = (*(code *)puVar1)(uVar5,PTR_s_boolForKey__1002e6680,PTR_cf_kInvertArrowKey_1002f8458);
    (*(code *)PTR__objc_release_10027d590)(uVar5);
    if (cVar2 != '\0') {
      *(undefined1 *)(IVar3 + _isInverted) = 1;
    }
  }
  return IVar3;
}



// ===== encodeWithCoder:  @ 0x100003dc2 =====

/* Function Stack Size: 0x18 bytes */

void ArrowNormal::encodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ID IVar2;
  ID local_38;
  undefined *local_30;
  
  puVar1 = PTR_s_encodeWithCoder__1002e6688;
  local_30 = PTR_ArrowNormal_1002ef710;
  local_38 = param_1;
  IVar2 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  Graphic::encodeWithCoder_((ID)&local_38,puVar1,IVar2);
  (*(code *)PTR__objc_msgSend_10027d560)
            (param_3,PTR_s_encodeBool_forKey__1002e6690,(int)*(char *)(param_1 + _isInverted),
             &cf_isInverted);
  (*(code *)PTR__objc_release_10027d590)(IVar2);
  return;
}



// ===== initWithCoder:  @ 0x100003e40 =====

/* Function Stack Size: 0x18 bytes */

ID ArrowNormal::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  undefined1 uVar1;
  ID IVar2;
  ID IVar3;
  ID local_28;
  undefined *local_20;
  
  IVar2 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  local_20 = PTR_ArrowNormal_1002ef710;
  local_28 = param_1;
  IVar3 = Graphic::initWithCoder_((ID)&local_28,PTR_s_initWithCoder__1002e6698,IVar2);
  if (IVar3 != 0) {
    uVar1 = (*(code *)PTR__objc_msgSend_10027d560)
                      (IVar2,PTR_s_decodeBoolForKey__1002e66a0,&cf_isInverted);
    *(undefined1 *)(IVar3 + _isInverted) = uVar1;
  }
  (*(code *)PTR__objc_release_10027d590)(IVar2);
  return IVar3;
}



// ===== drawingPath  @ 0x100003eba =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Function Stack Size: 0x10 bytes */

ID ArrowNormal::drawingPath(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  ID IVar10;
  ID IVar11;
  undefined8 uVar12;
  AnonymousStructure3 *__return_storage_ptr__;
  long lVar13;
  uint uVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined4 uVar17;
  double dVar18;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  uint local_2a8;
  uint local_298;
  undefined4 uStack_294;
  double dStack_290;
  undefined1 local_268 [16];
  double local_258;
  double dStack_250;
  undefined1 local_248 [16];
  undefined1 local_238 [128];
  AnonymousStructure3 local_1b8;
  AnonymousStructure3 local_138;
  AnonymousStructure3 local_b0;
  
  lVar9 = Arrow::_drawingPath;
  puVar7 = PTR_s_size_1002e66a8;
  lVar13 = *(long *)(param_1 + Arrow::_drawingPath);
  if (lVar13 == 0) {
    dVar5 = Graphic::size(param_1,PTR_s_size_1002e66a8);
    if ((dVar5 != 0.0) || (NAN(dVar5))) {
      dVar5 = Graphic::size(param_1,puVar7);
      if ((dVar5 != DAT_100170c08) || (NAN(dVar5) || NAN(DAT_100170c08))) {
        Graphic::size(param_1,puVar7);
        uVar16 = (uint)DAT_100170c38;
        uVar17 = (undefined4)((ulong)DAT_100170c38 >> 0x20);
        local_298 = (uint)DAT_100170c40;
        uVar14 = (uint)DAT_100170c48;
        uVar15 = (undefined4)((ulong)DAT_100170c48 >> 0x20);
      }
      else {
        uVar16 = (uint)DAT_100170c20;
        uVar17 = (undefined4)((ulong)DAT_100170c20 >> 0x20);
        local_298 = (uint)DAT_100170c28;
        uVar14 = (uint)DAT_100170c30;
        uVar15 = (undefined4)((ulong)DAT_100170c30 >> 0x20);
      }
    }
    else {
      uVar16 = SUB84(DAT_100170c08,0);
      uVar17 = (undefined4)((ulong)DAT_100170c08 >> 0x20);
      local_298 = (uint)DAT_100170c10;
      uVar14 = (uint)DAT_100170c18;
      uVar15 = (undefined4)((ulong)DAT_100170c18 >> 0x20);
    }
    puVar7 = PTR__objc_msgSend_10027d560;
    dVar5 = DAT_100170c50 * (double)CONCAT44(uVar15,uVar14);
    IVar10 = NSBezierPath::alloc((ID)PTR__OBJC_CLASS___NSBezierPath_1002eea90,PTR_s_alloc_1002e64e8)
    ;
    IVar10 = NSBezierPath::init(IVar10,PTR_s_init_1002e6538);
    (*(code *)puVar7)((int)*(undefined8 *)PTR__CGPointZero_10027d040,
                      (int)*(undefined8 *)(PTR__CGPointZero_10027d040 + 8),IVar10,
                      PTR_s_moveToPoint__1002e66b0);
    puVar8 = PTR_s_lineToPoint__1002e66b8;
    uVar15 = SUB84(dVar5,0);
    (*(code *)puVar7)(uVar14,uVar15,IVar10,PTR_s_lineToPoint__1002e66b8);
    (*(code *)puVar7)(local_298,uVar15,IVar10,puVar8);
    (*(code *)puVar7)(uVar16,uVar15,IVar10,puVar8);
    (*(code *)puVar7)(0,uVar15,IVar10,puVar8);
    (*(code *)puVar7)(uVar16 ^ _DAT_100170c70,uVar15,IVar10,puVar8);
    (*(code *)puVar7)(local_298 ^ _DAT_100170c70,uVar15,IVar10,puVar8);
    (*(code *)puVar7)(uVar14 ^ _DAT_100170c70,uVar15,IVar10,puVar8);
    NSBezierPath::closePath(IVar10,PTR_s_closePath_1002e66c0);
    puVar8 = PTR_s_handles_1002e6518;
    if (*(char *)(param_1 + _isInverted) == '\0') {
      Graphic::handles(&local_1b8,param_1,PTR_s_handles_1002e6518);
      local_298 = SUB84(local_1b8.field0_0x0[0].field0_0x0,0);
      uStack_294 = (undefined4)((ulong)local_1b8.field0_0x0[0].field0_0x0 >> 0x20);
      dStack_290 = local_1b8.field0_0x0[0].field1_0x8;
      Graphic::handles((AnonymousStructure3 *)local_238,param_1,puVar8);
      __return_storage_ptr__ = (AnonymousStructure3 *)(local_238 + 0x10);
    }
    else {
      Graphic::handles(&local_b0,param_1,PTR_s_handles_1002e6518);
      local_298 = SUB84(local_b0.field0_0x0[1].field0_0x0,0);
      uStack_294 = (undefined4)((ulong)local_b0.field0_0x0[1].field0_0x0 >> 0x20);
      dStack_290 = local_b0.field0_0x0[1].field1_0x8;
      __return_storage_ptr__ = &local_138;
      Graphic::handles(__return_storage_ptr__,param_1,puVar8);
    }
    dVar2 = __return_storage_ptr__->field0_0x0[0].field0_0x0;
    dVar3 = __return_storage_ptr__->field0_0x0[0].field1_0x8;
    dVar6 = dVar2 - (double)CONCAT44(uStack_294,local_298);
    dVar18 = dVar3 - dStack_290;
    dVar4 = (double)_atan2(SUB84(dVar6,0),SUB84(dVar18,0));
    dVar4 = (dVar4 * DAT_100170c58) / _DAT_100170c60;
    dVar5 = SQRT(dVar18 * dVar18 + dVar6 * dVar6) / dVar5;
    dVar6 = DAT_100170c08;
    if (dVar5 <= DAT_100170c08) {
      dVar6 = dVar5;
    }
    IVar11 = NSAffineTransform::transform
                       ((ID)PTR__OBJC_CLASS___NSAffineTransform_1002eeb10,PTR_s_transform_1002e66c8)
    ;
    uVar12 = _objc_retainAutoreleasedReturnValue(IVar11);
    local_2c8 = SUB84(dStack_290,0);
    uStack_2c4 = (undefined4)((ulong)dStack_290 >> 0x20);
    (*(code *)puVar7)(local_298,uVar12,PTR_s_translateXBy_yBy__1002e66d0);
    (*(code *)puVar7)(SUB84(dVar6,0),uVar12,PTR_s_scaleBy__1002e66d8);
    local_2a8 = SUB84(dVar4,0);
    (*(code *)puVar7)(_DAT_100170c70 ^ local_2a8,uVar12,PTR_s_rotateByDegrees__1002e66e0);
    NSBezierPath::transformUsingAffineTransform_
              (IVar10,PTR_s_transformUsingAffineTransform__1002e66e8,uVar12);
    if (DAT_100170c08 < dVar5) {
      dVar4 = (double)___sincos_stret(SUB84(((DAT_100170c68 - dVar4) * _DAT_100170c60) /
                                            DAT_100170c58,0));
      puVar7 = PTR_s_setAssociatedPoints_atIndex__1002e66f0;
      dVar6 = (double)CONCAT44(uStack_2c4,local_2c8) * (double)CONCAT44(uVar17,uVar16);
      dVar4 = dVar4 * (double)CONCAT44(uVar17,uVar16);
      dVar5 = dVar3 - dVar4;
      local_248._8_4_ = SUB84(dVar5,0);
      local_248._0_8_ = dVar2 - dVar6;
      local_248._12_4_ = (int)((ulong)dVar5 >> 0x20);
      dVar4 = dVar4 + dVar3;
      local_268._8_4_ = SUB84(dVar4,0);
      local_268._0_8_ = dVar6 + dVar2;
      local_268._12_4_ = (int)((ulong)dVar4 >> 0x20);
      local_258 = dVar2;
      dStack_250 = dVar3;
      NSBezierPath::setAssociatedPoints_atIndex_
                (IVar10,PTR_s_setAssociatedPoints_atIndex__1002e66f0,local_248,3);
      NSBezierPath::setAssociatedPoints_atIndex_(IVar10,puVar7,&local_258,4);
      NSBezierPath::setAssociatedPoints_atIndex_(IVar10,puVar7,local_268,5);
    }
    uVar1 = *(undefined8 *)(param_1 + lVar9);
    *(ID *)(param_1 + lVar9) = IVar10;
    puVar7 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar1);
    (*(code *)puVar7)(uVar12);
    lVar13 = *(long *)(param_1 + lVar9);
  }
  IVar10 = _objc_retainAutoreleaseReturnValue(lVar13);
  return IVar10;
}



// ===== strokeWidth  @ 0x10001b2f3 =====

/* Function Stack Size: 0x10 bytes */

double ArrowLine::strokeWidth(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  float fVar8;
  double dVar9;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  puVar2 = PTR_s_numberWithDouble__1002e6d50;
  puVar1 = PTR__objc_msgSend_10027d560;
  local_38 = *(long *)PTR____stack_chk_guard_10027d368;
  uVar3 = (*(code *)PTR__objc_msgSend_10027d560)
                    (DAT_100170c38,PTR__OBJC_CLASS___NSNumber_1002eeaa0,
                     PTR_s_numberWithDouble__1002e6d50);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  local_50 = uVar3;
  uVar4 = (*(code *)puVar1)(DAT_100170fe0,PTR__OBJC_CLASS___NSNumber_1002eeaa0,puVar2);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  local_48 = uVar4;
  uVar5 = (*(code *)puVar1)(DAT_100170ec8,PTR__OBJC_CLASS___NSNumber_1002eeaa0,puVar2);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  local_40 = uVar5;
  uVar6 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSArray_1002eeaa8,
                            PTR_s_arrayWithObjects_count__1002e6568,&local_50,3);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar5);
  (*(code *)puVar2)(uVar4);
  (*(code *)puVar2)(uVar3);
  puVar1 = PTR__objc_msgSend_10027d560;
  dVar9 = (double)(*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_size_1002e66a8);
  uVar7 = (long)dVar9;
  if (DAT_100170fe8 <= dVar9) {
    uVar7 = (long)(dVar9 - DAT_100170fe8) ^ 0x8000000000000000;
  }
  uVar3 = (*(code *)puVar1)(uVar6,PTR_s_objectAtIndex__1002e6a80,uVar7);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  fVar8 = (float)(*(code *)puVar1)(uVar3,PTR_s_floatValue_1002e6d30);
  (*(code *)puVar2)(uVar3);
  (*(code *)puVar2)(uVar6);
  if (*(long *)PTR____stack_chk_guard_10027d368 == local_38) {
    return (double)fVar8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



// ===== drawingPath  @ 0x10001b472 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Function Stack Size: 0x10 bytes */

ID ArrowLine::drawingPath(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ID IVar7;
  long lVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined local_130 [16];
  double local_120;
  double local_118;
  double local_b0;
  double local_a8;
  
  lVar3 = Arrow::_drawingPath;
  puVar1 = PTR__objc_msgSend_10027d560;
  lVar8 = *(long *)(param_1 + Arrow::_drawingPath);
  if (lVar8 == 0) {
    dVar9 = (double)(*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_strokeWidth_1002e6528);
    puVar2 = PTR_s_handles_1002e6518;
    _objc_msgSend_stret((undefined *)&local_b0,param_1,PTR_s_handles_1002e6518);
    _objc_msgSend_stret(local_130,param_1,puVar2);
    dVar10 = (double)_atan2();
    dVar10 = (dVar10 * DAT_100170c68) / _DAT_100170c60;
    dVar11 = SQRT((local_118 - local_a8) * (local_118 - local_a8) +
                  (local_120 - local_b0) * (local_120 - local_b0));
    uVar4 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSAffineTransform_1002eeb10,
                              PTR_s_transform_1002e66c8);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar4);
    (*(code *)puVar1)(local_b0,local_a8,uVar5,PTR_s_translateXBy_yBy__1002e66d0);
    (*(code *)puVar1)(dVar10,uVar5,PTR_s_rotateByDegrees__1002e66e0);
    uVar4 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSBezierPath_1002eea90,PTR_s_alloc_1002e64e8);
    uVar6 = (*(code *)puVar1)(uVar4,PTR_s_init_1002e6538);
    (*(code *)puVar1)(*(undefined8 *)PTR__CGPointZero_10027d040,
                      *(undefined8 *)(PTR__CGPointZero_10027d040 + 8),uVar6,
                      PTR_s_moveToPoint__1002e66b0);
    puVar2 = PTR_s_lineToPoint__1002e66b8;
    dVar10 = DAT_100170dc8 * dVar9;
    (*(code *)puVar1)(dVar10,0,uVar6,PTR_s_lineToPoint__1002e66b8);
    (*(code *)puVar1)(dVar10,dVar11,uVar6,puVar2);
    dVar9 = dVar9 * DAT_100170dc0;
    (*(code *)puVar1)(dVar9,dVar11,uVar6,puVar2);
    (*(code *)puVar1)(dVar9,0,uVar6,puVar2);
    (*(code *)puVar1)(uVar6,PTR_s_closePath_1002e66c0);
    (*(code *)puVar1)(uVar6,PTR_s_transformUsingAffineTransform__1002e66e8,uVar5);
    uVar4 = *(undefined8 *)(param_1 + lVar3);
    *(undefined8 *)(param_1 + lVar3) = uVar6;
    puVar1 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar4);
    (*(code *)puVar1)(uVar5);
    lVar8 = *(long *)(param_1 + lVar3);
  }
  IVar7 = _objc_retainAutoreleaseReturnValue(lVar8);
  return IVar7;
}



// ===== init  @ 0x100023c92 =====

/* Function Stack Size: 0x10 bytes */

ID HistoryManager::init(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  objc_super local_38;
  undefined1 local_28 [8];
  
  local_38.super_class = (class_t *)PTR_HistoryManager_1002ef7f8;
  local_38.receiver = param_1;
  IVar2 = _objc_msgSendSuper2(&local_38,PTR_s_init_1002e6538);
  puVar1 = PTR__objc_msgSend_10027d560;
  if (IVar2 != 0) {
    uVar3 = (*(code *)PTR__objc_msgSend_10027d560)
                      (PTR__OBJC_CLASS___NSUserDefaults_1002eeab0,
                       PTR_s_standardUserDefaults_1002e6570);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    uVar4 = (*(code *)puVar1)(uVar3,PTR_s_objectForKey__1002e6550,PTR_cf_recentUploads_1002f8850);
    lVar5 = _objc_retainAutoreleasedReturnValue(uVar4);
    (*(code *)PTR__objc_release_10027d590)(uVar3);
    if (lVar5 == 0) {
      uVar3 = (*(code *)PTR__objc_msgSend_10027d560)
                        (PTR__OBJC_CLASS___NSArray_1002eeaa8,PTR_s_arrayWithObjects_count__1002e6568
                         ,local_28,0);
    }
    else {
      uVar3 = (*(code *)PTR__objc_msgSend_10027d560)
                        (PTR__OBJC_CLASS___NSKeyedUnarchiver_1002eed30,
                         PTR_s_unarchiveObjectWithData__1002e6f00,lVar5);
    }
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
    uVar3 = *(undefined8 *)(IVar2 + _recentUploads);
    *(undefined8 *)(IVar2 + _recentUploads) = uVar4;
    (*(code *)PTR__objc_release_10027d590)(uVar3);
    (*(code *)PTR__objc_release_10027d590)(lVar5);
  }
  return IVar2;
}



// ===== addItem:  @ 0x100023d81 =====

/* Function Stack Size: 0x18 bytes */

void HistoryManager::addItem_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *pcVar7;
  
  uVar6 = *(undefined8 *)(param_1 + _recentUploads);
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  pcVar7 = (code *)PTR__objc_msgSend_10027d560;
  uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(uVar6,PTR_s_mutableCopy_1002e6730);
  (*pcVar7)(uVar4,PTR_s_insertObject_atIndex__1002e8008,param_3,0);
  (*(code *)PTR__objc_release_10027d590)(uVar3);
  uVar5 = (*pcVar7)(uVar4,PTR_s_count_1002e6488);
  uVar6 = uVar4;
  if (5 < uVar5) {
    uVar6 = (*pcVar7)(uVar4,PTR_s_subarrayWithRange__1002e7790,0,5);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar6);
    uVar6 = (*pcVar7)(uVar3,PTR_s_mutableCopy_1002e6730);
    puVar1 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar4);
    (*(code *)puVar1)(uVar3);
    pcVar7 = (code *)PTR__objc_msgSend_10027d560;
  }
  (*pcVar7)(param_1,PTR_s_willChangeValueForKey__1002e7cc8,PTR_cf_recentUploads_1002f8850);
  lVar2 = _recentUploads;
  uVar3 = *(undefined8 *)(param_1 + _recentUploads);
  *(undefined8 *)(param_1 + _recentUploads) = uVar6;
  uVar6 = (*(code *)PTR__objc_retain_10027d598)(uVar6);
  (*(code *)PTR__objc_release_10027d590)(uVar3);
  (*pcVar7)(param_1,PTR_s_didChangeValueForKey__1002e7cd0,PTR_cf_recentUploads_1002f8850);
  uVar3 = (*pcVar7)(PTR__OBJC_CLASS___NSUserDefaults_1002eeab0,PTR_s_standardUserDefaults_1002e6570)
  ;
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*pcVar7)(PTR__OBJC_CLASS___NSKeyedArchiver_1002eed38,
                    PTR_s_archivedDataWithRootObject__1002e8010,*(undefined8 *)(param_1 + lVar2));
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*pcVar7)(uVar3,PTR_s_setObject_forKey__1002e65b0,uVar4,PTR_cf_recentUploads_1002f8850);
  (*(code *)PTR__objc_release_10027d590)(uVar6);
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  (*(code *)PTR__objc_release_10027d590)(uVar3);
  return;
}



// ===== clearHistory  @ 0x100023f0a =====

/* Function Stack Size: 0x10 bytes */

void HistoryManager::clearHistory(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 local_38 [8];
  
  puVar1 = PTR__objc_msgSend_10027d560;
  (*(code *)PTR__objc_msgSend_10027d560)
            (param_1,PTR_s_willChangeValueForKey__1002e7cc8,PTR_cf_recentUploads_1002f8850);
  uVar4 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSArray_1002eeaa8,
                            PTR_s_arrayWithObjects_count__1002e6568,local_38,0);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar4);
  lVar3 = _recentUploads;
  uVar4 = *(undefined8 *)(param_1 + _recentUploads);
  *(undefined8 *)(param_1 + _recentUploads) = uVar5;
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  (*(code *)puVar1)(param_1,PTR_s_didChangeValueForKey__1002e7cd0,PTR_cf_recentUploads_1002f8850);
  uVar4 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSUserDefaults_1002eeab0,
                            PTR_s_standardUserDefaults_1002e6570);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSKeyedArchiver_1002eed38,
                            PTR_s_archivedDataWithRootObject__1002e8010,
                            *(undefined8 *)(param_1 + lVar3));
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)puVar1)(uVar4,PTR_s_setObject_forKey__1002e65b0,uVar5,PTR_cf_recentUploads_1002f8850);
  (*(code *)puVar2)(uVar5);
  (*(code *)puVar2)(uVar4);
  return;
}



// ===== recentUploads  @ 0x100023fed =====

/* Function Stack Size: 0x10 bytes */

ID HistoryManager::recentUploads(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + _recentUploads);
}



// ===== .cxx_destruct  @ 0x100023ffe =====

/* Function Stack Size: 0x10 bytes */

void HistoryManager::_cxx_destruct(ID param_1,SEL param_2)

{
  _objc_storeStrong(param_1 + _recentUploads,0);
  return;
}



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



// ===== dealloc  @ 0x10002b0a6 =====

/* Function Stack Size: 0x10 bytes */

void CanvasView::dealloc(ID param_1,SEL param_2)

{
  objc_super local_20;
  
  _NSLog(&cf_dealloc___,param_1);
  local_20.super_class = (class_t *)PTR_CanvasView_1002ef838;
  local_20.receiver = param_1;
  _objc_msgSendSuper2(&local_20,PTR_s_dealloc_1002e63c0);
  return;
}



// ===== drawImage:  @ 0x10002b0e9 =====

/* Function Stack Size: 0x18 bytes */

void CanvasView::drawImage_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar3 = PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98;
  puVar2 = PTR_s_saveGraphicsState_1002e6a70;
  uVar4 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  puVar1 = PTR__objc_msgSend_10027d560;
  (*(code *)PTR__objc_msgSend_10027d560)(puVar3,puVar2);
  uVar5 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98,
                            PTR_s_currentContext_1002e6a60);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)puVar1)(uVar5,PTR_s_setImageInterpolation__1002e83d0,2);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar5);
  uVar5 = (*(code *)puVar1)(param_3,PTR_s_image_1002e69f0);
  (*(code *)puVar2)(uVar4);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)puVar1)(*(undefined8 *)PTR__NSZeroPoint_10027d308,
                    *(undefined8 *)(PTR__NSZeroPoint_10027d308 + 8),DAT_100170c08,uVar4,
                    PTR_s_drawAtPoint_fromRect_operation_f_1002e83d8,2);
  (*(code *)puVar2)(uVar4);
  (*(code *)puVar1)(PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98,
                    PTR_s_restoreGraphicsState_1002e6ab0);
  return;
}



// ===== drawGraphics:size:  @ 0x10002b1fd =====

/* Function Stack Size: 0x28 bytes */

void __thiscall
CanvasView::drawGraphics_size_(CanvasView *this,ID param_1,SEL param_2,ID param_3,CGSize param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  
  uVar4 = (*(code *)PTR__objc_retain_10027d598)(param_2);
  puVar1 = PTR__objc_msgSend_10027d560;
  (*(code *)PTR__objc_msgSend_10027d560)
            (PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98,PTR_s_saveGraphicsState_1002e6a70);
  puVar2 = PTR_s_enumerateObjectsUsingBlock__1002e6d78;
  (*(code *)puVar1)(uVar4,PTR_s_enumerateObjectsUsingBlock__1002e6d78,
                    &PTR___NSConcreteGlobalBlock_10027f290);
  puVar3 = PTR__OBJC_CLASS___NSPredicate_1002eebf8;
  uVar5 = (*(code *)puVar1)(PTR_Overlay_1002eeec8,PTR_s_class_1002e6a28);
  uVar5 = (*(code *)puVar1)(puVar3,PTR_s_predicateWithFormat__1002e6d40,&cf_selfisKindOfClass___,
                            uVar5);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar6 = (*(code *)puVar1)(uVar4,PTR_s_filteredArrayUsingPredicate__1002e6d48,uVar5);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  (*(code *)PTR__objc_release_10027d590)(uVar5);
  lVar7 = (*(code *)puVar1)(uVar6,PTR_s_count_1002e6488);
  if (lVar7 != 0) {
    (*(code *)PTR__objc_msgSend_10027d560)
              (param_4.field0_0x0,param_4.field1_0x8,PTR_Overlay_1002eeec8,
               PTR_s_drawOverlayForGraphics_withSize__1002e83e8,uVar6);
  }
  (*(code *)puVar1)(uVar4,puVar2,&PTR___NSConcreteGlobalBlock_10027f2d0);
  (*(code *)puVar1)(PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98,
                    PTR_s_restoreGraphicsState_1002e6ab0);
  puVar1 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar6);
  (*(code *)puVar1)(uVar4);
  return;
}



// ===== drawRect:  @ 0x10002b430 =====

/* Function Stack Size: 0x30 bytes */

void CanvasView::drawRect_(ID param_1,SEL param_2,CGRect param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ID self;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  code *local_d0;
  undefined *local_c8;
  long local_c0;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  undefined local_98 [16];
  undefined8 local_88;
  undefined8 local_80;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  code *local_68;
  undefined *local_60;
  ID local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  
  puVar1 = PTR__objc_msgSend_10027d560;
  (*(code *)PTR__objc_msgSend_10027d560)
            (PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98,PTR_s_saveGraphicsState_1002e6a70);
  puVar2 = PTR_s_graphics_1002e6d18;
  uVar4 = (*(code *)puVar1)(param_1,PTR_s_graphics_1002e6d18);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  local_78 = PTR___NSConcreteStackBlock_10027d330;
  local_70 = 0xc2000000;
  local_6c = 0;
  local_68 = FUN_10002b75c;
  local_60 = &DAT_10027f2f0;
  local_38 = param_3.field1_0x10.field1_0x8;
  local_40 = param_3.field1_0x10.field0_0x0;
  local_48 = param_3.field0_0x0.field1_0x8;
  local_50 = param_3.field0_0x0.field0_0x0;
  self = (*(code *)PTR__objc_retain_10027d598)(param_1);
  local_58 = self;
  (*(code *)puVar1)(uVar4,PTR_s_enumerateObjectsUsingBlock__1002e6d78,&local_78);
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  uVar4 = (*(code *)puVar1)(self,puVar2);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1002eebf8;
  uVar5 = (*(code *)puVar1)(PTR_Overlay_1002eeec8,PTR_s_class_1002e6a28);
  uVar5 = (*(code *)puVar1)(puVar2,PTR_s_predicateWithFormat__1002e6d40,&cf_selfisKindOfClass___,
                            uVar5);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar6 = (*(code *)puVar1)(uVar4,PTR_s_filteredArrayUsingPredicate__1002e6d48,uVar5);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar5);
  (*(code *)puVar2)(uVar4);
  lVar7 = (*(code *)puVar1)(uVar6,PTR_s_count_1002e6488);
  puVar3 = PTR_Overlay_1002eeec8;
  if (lVar7 != 0) {
    _objc_msgSend_stret(local_98,self,PTR_s_frame_1002e64b0);
    (*(code *)PTR__objc_msgSend_10027d560)
              (local_88,local_80,puVar3,PTR_s_drawOverlayForGraphics_withSize__1002e83e8,uVar6);
  }
  uVar4 = (*(code *)puVar1)(self,PTR_s_graphics_1002e6d18);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  local_e0 = PTR___NSConcreteStackBlock_10027d330;
  local_d8 = 0xc2000000;
  local_d4 = 0;
  local_d0 = FUN_10002b8eb;
  local_c8 = &DAT_10027f320;
  local_a0 = param_3.field1_0x10.field1_0x8;
  local_a8 = param_3.field1_0x10.field0_0x0;
  local_b0 = param_3.field0_0x0.field1_0x8;
  local_b8 = param_3.field0_0x0.field0_0x0;
  lVar7 = (*(code *)PTR__objc_retain_10027d598)(self);
  local_c0 = lVar7;
  (*(code *)puVar1)(uVar4,PTR_s_enumerateObjectsUsingBlock__1002e6d78,&local_e0);
  (*(code *)puVar2)(uVar4);
  lVar9 = _selection + lVar7;
  lVar8 = _objc_loadWeakRetained(lVar9);
  (*(code *)puVar2)(lVar8);
  if (lVar8 != 0) {
    uVar4 = _objc_loadWeakRetained(lVar9);
    (*(code *)PTR__objc_msgSend_10027d560)(uVar4,PTR_s_drawContentsInView__1002e8418,lVar7);
    (*(code *)PTR__objc_release_10027d590)(uVar4);
  }
  lVar8 = _objc_loadWeakRetained(lVar7 + _crop);
  (*(code *)PTR__objc_release_10027d590)(lVar8);
  if (lVar8 != 0) {
    uVar4 = (*(code *)puVar1)(lVar7,PTR_s_crop_1002e6d98);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    (*(code *)puVar1)(uVar4,PTR_s_drawContentsInView__1002e8418,lVar7);
    (*(code *)PTR__objc_release_10027d590)(uVar4);
  }
  (*(code *)PTR__objc_msgSend_10027d560)
            (PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98,PTR_s_restoreGraphicsState_1002e6ab0);
  (*(code *)puVar2)(local_c0);
  (*(code *)puVar2)(uVar6);
  (*(code *)puVar2)(local_58);
  return;
}



// ===== setCursor:  @ 0x10002bb40 =====

/* Function Stack Size: 0x18 bytes */

void CanvasView::setCursor_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__objc_retain_10027d598;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar4 = *(undefined8 *)(param_1 + _cursor);
  *(undefined8 *)(param_1 + _cursor) = uVar3;
  uVar3 = (*(code *)puVar1)(uVar3);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_window_1002e6878);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)puVar1)(uVar4,PTR_s_invalidateCursorRectsForView__1002e8420,param_1);
  (*(code *)puVar2)(uVar3);
  (*(code *)puVar2)(uVar4);
  return;
}



// ===== resetCursorRects  @ 0x10002bbcc =====

/* Function Stack Size: 0x10 bytes */

void CanvasView::resetCursorRects(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined local_60 [32];
  objc_super local_40;
  
  local_40.super_class = (class_t *)PTR_CanvasView_1002ef838;
  local_40.receiver = param_1;
  _objc_msgSendSuper2(&local_40,PTR_s_resetCursorRects_1002e8428);
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar2 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_cursor_1002e8430);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar2);
  uVar2 = (*(code *)puVar1)(param_1,PTR_s_window_1002e6878);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  uVar4 = (*(code *)puVar1)(uVar2,PTR_s_attachedSheet_1002e8438);
  lVar5 = _objc_retainAutoreleasedReturnValue(uVar4);
  puVar1 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(lVar5);
  (*(code *)puVar1)(uVar2);
  uVar2 = uVar3;
  if (lVar5 != 0) {
    uVar2 = (*(code *)PTR__objc_msgSend_10027d560)
                      (PTR__OBJC_CLASS___NSCursor_1002eeed0,PTR_s_arrowCursor_1002e8440);
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    (*(code *)PTR__objc_release_10027d590)(uVar3);
  }
  _objc_msgSend_stret(local_60,param_1,PTR_s_bounds_1002e6938);
  (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_addCursorRect_cursor__1002e8448,uVar2);
  (*(code *)PTR__objc_release_10027d590)(uVar2);
  return;
}



// ===== acceptsFirstResponder  @ 0x10002bcef =====

/* Function Stack Size: 0x10 bytes */

char CanvasView::acceptsFirstResponder(ID param_1,SEL param_2)

{
  return '\x01';
}



// ===== resignFirstResponder  @ 0x10002bcfa =====

/* Function Stack Size: 0x10 bytes */

char CanvasView::resignFirstResponder(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _NSLog(&cf___resignFirstResponder,param_1);
  *(undefined1 *)(param_1 + _isFirstResponder) = 0;
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar2 = (*(code *)PTR__objc_msgSend_10027d560)
                    (PTR__OBJC_CLASS___NSCursor_1002eeed0,PTR_s_arrowCursor_1002e8440);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)puVar1)(param_1,PTR_s_setCursor__1002e8450,uVar2);
  (*(code *)PTR__objc_release_10027d590)(uVar2);
  return '\x01';
}



// ===== becomeFirstResponder  @ 0x10002bd70 =====

/* Function Stack Size: 0x10 bytes */

char CanvasView::becomeFirstResponder(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar3 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_crop_1002e6d98);
  lVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)PTR__objc_release_10027d590)(lVar4);
  puVar2 = PTR_s_setIsFirstResponder__1002e8458;
  puVar1 = PTR__objc_msgSend_10027d560;
  if (lVar4 == 0) {
    uVar3 = (*(code *)PTR__objc_msgSend_10027d560)
                      (PTR__OBJC_CLASS___NSNumber_1002eeaa0,PTR_s_numberWithBool__1002e71e8,1);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    (*(code *)puVar1)(0,param_1,PTR_s_performSelector_withObject_after_1002e6870,puVar2,uVar3);
    (*(code *)PTR__objc_release_10027d590)(uVar3);
  }
  return lVar4 == 0;
}



// ===== setIsFirstResponder:  @ 0x10002be04 =====

/* Function Stack Size: 0x14 bytes */

void CanvasView::setIsFirstResponder_(ID param_1,SEL param_2,char param_3)

{
  *(char *)(param_1 + _isFirstResponder) = param_3;
  _NSLog(&cf___becomeFirstResponder,param_1);
  return;
}



// ===== selection  @ 0x10002be27 =====

/* Function Stack Size: 0x10 bytes */

ID CanvasView::selection(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  
  uVar1 = _objc_loadWeakRetained(param_1 + _selection);
  IVar2 = _objc_autoreleaseReturnValue(uVar1);
  return IVar2;
}



// ===== setSelection:  @ 0x10002be40 =====

/* Function Stack Size: 0x18 bytes */

void CanvasView::setSelection_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeWeak(param_1 + _selection,param_3);
  return;
}



// ===== crop  @ 0x10002be54 =====

/* Function Stack Size: 0x10 bytes */

ID CanvasView::crop(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  
  uVar1 = _objc_loadWeakRetained(param_1 + _crop);
  IVar2 = _objc_autoreleaseReturnValue(uVar1);
  return IVar2;
}



// ===== setCrop:  @ 0x10002be6d =====

/* Function Stack Size: 0x18 bytes */

void CanvasView::setCrop_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeWeak(param_1 + _crop,param_3);
  return;
}



// ===== text  @ 0x10002be81 =====

/* Function Stack Size: 0x10 bytes */

ID CanvasView::text(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  
  uVar1 = _objc_loadWeakRetained(param_1 + _text);
  IVar2 = _objc_autoreleaseReturnValue(uVar1);
  return IVar2;
}



// ===== setText:  @ 0x10002be9a =====

/* Function Stack Size: 0x18 bytes */

void CanvasView::setText_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeWeak(param_1 + _text,param_3);
  return;
}



// ===== graphics  @ 0x10002beae =====

/* Function Stack Size: 0x10 bytes */

ID CanvasView::graphics(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  
  uVar1 = _objc_loadWeakRetained(param_1 + _graphics);
  IVar2 = _objc_autoreleaseReturnValue(uVar1);
  return IVar2;
}



// ===== setGraphics:  @ 0x10002bec7 =====

/* Function Stack Size: 0x18 bytes */

void CanvasView::setGraphics_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeWeak(param_1 + _graphics,param_3);
  return;
}



// ===== creatingGraphic  @ 0x10002bedb =====

/* Function Stack Size: 0x10 bytes */

ID CanvasView::creatingGraphic(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  
  uVar1 = _objc_loadWeakRetained(param_1 + _creatingGraphic);
  IVar2 = _objc_autoreleaseReturnValue(uVar1);
  return IVar2;
}



// ===== setCreatingGraphic:  @ 0x10002bef4 =====

/* Function Stack Size: 0x18 bytes */

void CanvasView::setCreatingGraphic_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeWeak(param_1 + _creatingGraphic,param_3);
  return;
}



// ===== selectionIndexes  @ 0x10002bf08 =====

/* Function Stack Size: 0x10 bytes */

ID CanvasView::selectionIndexes(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  
  uVar1 = _objc_loadWeakRetained(param_1 + _selectionIndexes);
  IVar2 = _objc_autoreleaseReturnValue(uVar1);
  return IVar2;
}



// ===== setSelectionIndexes:  @ 0x10002bf21 =====

/* Function Stack Size: 0x18 bytes */

void CanvasView::setSelectionIndexes_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeWeak(param_1 + _selectionIndexes,param_3);
  return;
}



// ===== cursor  @ 0x10002bf35 =====

/* Function Stack Size: 0x10 bytes */

ID CanvasView::cursor(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + _cursor);
}



// ===== isFirstResponder  @ 0x10002bf46 =====

/* Function Stack Size: 0x10 bytes */

char CanvasView::isFirstResponder(ID param_1,SEL param_2)

{
  return *(char *)(param_1 + _isFirstResponder);
}



// ===== .cxx_destruct  @ 0x10002bf57 =====

/* Function Stack Size: 0x10 bytes */

void CanvasView::_cxx_destruct(ID param_1,SEL param_2)

{
  _objc_storeStrong(_cursor + param_1,0);
  _objc_destroyWeak(_selectionIndexes + param_1);
  _objc_destroyWeak(_creatingGraphic + param_1);
  _objc_destroyWeak(_graphics + param_1);
  _objc_destroyWeak(_text + param_1);
  _objc_destroyWeak(_crop + param_1);
  _objc_destroyWeak(param_1 + _selection);
  return;
}



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



// ===== encodeWithCoder:  @ 0x10002cb84 =====

/* Function Stack Size: 0x18 bytes */

void Pen::encodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  objc_super local_38;
  
  puVar1 = PTR_s_encodeWithCoder__1002e6688;
  local_38.super_class = (class_t *)PTR_Pen_1002ef848;
  local_38.receiver = param_1;
  uVar2 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  _objc_msgSendSuper2(&local_38,puVar1,uVar2);
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar3 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_points_1002e84a8);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)puVar1)(param_3,PTR_s_encodeObject_forKey__1002e72f0,uVar3,PTR_cf_points_1002f88c0);
  puVar1 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar2);
  (*(code *)puVar1)(uVar3);
  return;
}



// ===== initWithCoder:  @ 0x10002cc20 =====

/* Function Stack Size: 0x18 bytes */

ID Pen::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined8 uVar4;
  objc_super local_38;
  
  uVar2 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  local_38.super_class = (class_t *)PTR_Pen_1002ef848;
  local_38.receiver = param_1;
  IVar3 = _objc_msgSendSuper2(&local_38,PTR_s_initWithCoder__1002e6698,uVar2);
  puVar1 = PTR__objc_msgSend_10027d560;
  if (IVar3 != 0) {
    uVar4 = (*(code *)PTR__objc_msgSend_10027d560)
                      (uVar2,PTR_s_decodeObjectForKey__1002e7308,PTR_cf_points_1002f88c0);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    (*(code *)puVar1)(IVar3,PTR_s_setPoints__1002e84b0,uVar4);
    (*(code *)PTR__objc_release_10027d590)(uVar4);
  }
  (*(code *)PTR__objc_release_10027d590)(uVar2);
  return IVar3;
}



// ===== zIndex  @ 0x10002ccdd =====

/* Function Stack Size: 0x10 bytes */

long_long Pen::zIndex(ID param_1,SEL param_2)

{
  return 3;
}



// ===== cursorForHandle:  @ 0x10002cd01 =====

/* Function Stack Size: 0x18 bytes */

ID Pen::cursorForHandle_(ID param_1,SEL param_2,long_long param_3)

{
  undefined8 uVar1;
  ID IVar2;
  
  uVar1 = 0;
  if (param_3 == 0xffffffffffffffff) {
    uVar1 = (*(code *)PTR__objc_msgSend_10027d560)
                      (PTR__OBJC_CLASS___NSCursor_1002eeed0,PTR_s_openHandCursor_1002e8468);
    uVar1 = _objc_retainAutoreleasedReturnValue(uVar1);
  }
  IVar2 = _objc_autoreleaseReturnValue(uVar1);
  return IVar2;
}



// ===== resizeByMovingHandle:withDelta:toLocation:  @ 0x10002cd32 =====

/* Function Stack Size: 0x38 bytes */

long_long Pen::resizeByMovingHandle_withDelta_toLocation_
                    (ID param_1,SEL param_2,long_long param_3,CGPoint param_4,CGPoint param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar2 = (*(code *)PTR__objc_msgSend_10027d560)
                    (param_4.field0_0x0,param_4.field1_0x8,param_1,PTR_s_points_1002e84a8);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  uVar3 = (*(code *)puVar1)(param_5.field0_0x0,param_5.field1_0x8,
                            PTR__OBJC_CLASS___NSValue_1002eeaf0,PTR_s_valueWithPoint__1002e84b8);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*(code *)puVar1)(uVar2,PTR_s_arrayByAddingObject__1002e84c0,uVar3);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)puVar1)(param_1,PTR_s_setPoints__1002e84b0,uVar4);
  puVar1 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  (*(code *)puVar1)(uVar3);
  (*(code *)puVar1)(uVar2);
  return param_3;
}



// ===== scaleTo:  @ 0x10002cded =====

/* Function Stack Size: 0x18 bytes */

void Pen::scaleTo_(ID param_1,SEL param_2,double param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  double local_40;
  undefined1 local_38 [8];
  
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar3 = (*(code *)PTR__objc_msgSend_10027d560)
                    (PTR__OBJC_CLASS___NSArray_1002eeaa8,PTR_s_arrayWithObjects_count__1002e6568,
                     local_38,0);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*(code *)puVar1)(uVar3,PTR_s_mutableCopy_1002e6730);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar3);
  uVar3 = (*(code *)puVar1)(param_1,PTR_s_points_1002e84a8);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  local_68 = PTR___NSConcreteStackBlock_10027d330;
  local_60 = 0xc2000000;
  local_5c = 0;
  local_58 = FUN_10002cef0;
  local_50 = &DAT_10027f350;
  local_48 = uVar4;
  local_40 = param_3;
  uVar4 = (*(code *)PTR__objc_retain_10027d598)(uVar4);
  (*(code *)puVar1)(uVar3,PTR_s_enumerateObjectsUsingBlock__1002e6d78,&local_68);
  (*(code *)puVar2)(uVar3);
  (*(code *)puVar1)(param_1,PTR_s_setPoints__1002e84b0,uVar4);
  (*(code *)puVar2)(local_48);
  (*(code *)puVar2)(uVar4);
  return;
}



// ===== translateWithDelta:toLocation:  @ 0x10002cf82 =====

/* Function Stack Size: 0x30 bytes */

void Pen::translateWithDelta_toLocation_(ID param_1,SEL param_2,CGPoint param_3,CGPoint param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  double local_48;
  double local_40;
  undefined1 local_38 [8];
  
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar3 = (*(code *)PTR__objc_msgSend_10027d560)
                    (param_3.field0_0x0,param_3.field1_0x8,param_4.field0_0x0,param_4.field1_0x8,
                     PTR__OBJC_CLASS___NSArray_1002eeaa8,PTR_s_arrayWithObjects_count__1002e6568,
                     local_38,0);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*(code *)puVar1)(uVar3,PTR_s_mutableCopy_1002e6730);
  (*(code *)PTR__objc_release_10027d590)(uVar3);
  uVar3 = (*(code *)puVar1)(param_1,PTR_s_points_1002e84a8);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  local_70 = PTR___NSConcreteStackBlock_10027d330;
  local_68 = 0xc2000000;
  local_64 = 0;
  local_60 = FUN_10002d097;
  local_58 = &DAT_10027f380;
  local_50 = uVar4;
  local_48 = param_3.field0_0x0;
  local_40 = param_3.field1_0x8;
  uVar4 = (*(code *)PTR__objc_retain_10027d598)(uVar4);
  (*(code *)puVar1)(uVar3,PTR_s_enumerateObjectsUsingBlock__1002e6d78,&local_70);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar3);
  (*(code *)puVar1)(param_1,PTR_s_setPoints__1002e84b0,uVar4);
  (*(code *)puVar2)(local_50);
  (*(code *)puVar2)(uVar4);
  return;
}



// ===== keyPathsForSettableValues  @ 0x10002d126 =====

/* Function Stack Size: 0x10 bytes */

ID Pen::keyPathsForSettableValues(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = (*(code *)PTR__objc_msgSend_10027d560)
                    (PTR__OBJC_CLASS___NSSet_1002eec28,PTR_s_setWithObjects__1002e8490,
                     PTR_cf_color_1002f8ac0,PTR_cf_size_1002f8ac8,PTR_cf_hasShadow_1002f8ad0,0);
  return IVar1;
}



// ===== drawingBounds  @ 0x10002d1c7 =====

/* Function Stack Size: 0x10 bytes */

CGRect * Pen::drawingBounds(CGRect *__return_storage_ptr__,ID param_1,SEL param_2)

{
  _NSInsetRect(DAT_100171110,DAT_100171110);
  return __return_storage_ptr__;
}



// ===== didGetCreated  @ 0x10002d21b =====

/* Function Stack Size: 0x10 bytes */

char Pen::didGetCreated(ID param_1,SEL param_2)

{
  return '\x01';
}



// ===== drawContentsInView:isBeingCreated:isBeingEdited:  @ 0x10002d226 =====

/* Function Stack Size: 0x20 bytes */

void Pen::drawContentsInView_isBeingCreated_isBeingEdited_
               (ID param_1,SEL param_2,ID param_3,char param_4,char param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar4 = (*(code *)PTR__objc_msgSend_10027d560)
                    (PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98,PTR_s_currentContext_1002e6a60);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar4 = _objc_retainAutorelease(uVar4);
  uVar5 = (*(code *)puVar1)(uVar4,PTR_s_graphicsPort_1002e6a68);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  _CGContextSaveGState(uVar5);
  _CGContextSetLineCap(uVar5,1);
  uVar4 = (*(code *)puVar1)(param_1,PTR_s_color_1002e84d0);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar4 = _objc_retainAutorelease(uVar4);
  uVar6 = (*(code *)puVar1)(uVar4,PTR_s_CGColor_1002e7270);
  _CGContextSetStrokeColorWithColor(uVar5,uVar6);
  (*(code *)puVar2)(uVar4);
  (*(code *)puVar1)(param_1,PTR_s_strokeWidth_1002e6528);
  _CGContextSetLineWidth(uVar5);
  (*(code *)puVar1)(param_1,PTR_s_setHasShadow__1002e7248,0);
  cVar3 = (*(code *)puVar1)(param_1,PTR_s_hasShadow_1002e8330);
  if (cVar3 != '\0') {
    uVar4 = _CGColorCreateGenericRGB(0,0,0,DAT_100171118);
    _CGContextSetShadowWithColor(0,DAT_100170dc8,DAT_100170c38,uVar5,uVar4);
  }
  if (param_4 == '\0') {
    uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_drawingPath_1002e84e0);
    _CGContextAddPath(uVar5,uVar4);
  }
  else {
    uVar4 = (*(code *)puVar1)(param_1,PTR_s_points_1002e84a8);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar6 = (*(code *)puVar1)(param_1,PTR_s_pathFromPoints_smooth__1002e84d8,uVar4,1);
    _CGContextAddPath(uVar5,uVar6);
    (*(code *)PTR__objc_release_10027d590)(uVar4);
  }
  _CGContextStrokePath(uVar5);
  _CGContextRestoreGState(uVar5);
  return;
}



// ===== drawSelectionInView:  @ 0x10002d3c1 =====

/* Function Stack Size: 0x18 bytes */

void Pen::drawSelectionInView_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar2 = (*(code *)PTR__objc_msgSend_10027d560)
                    (PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98,PTR_s_currentContext_1002e6a60);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  uVar2 = _objc_retainAutorelease(uVar2);
  uVar3 = (*(code *)puVar1)(uVar2,PTR_s_graphicsPort_1002e6a68);
  (*(code *)PTR__objc_release_10027d590)(uVar2);
  _CGContextSaveGState(uVar3);
  uVar2 = (*(code *)puVar1)(DAT_1001710f8,DAT_100171100,DAT_100171108,DAT_100171120,
                            PTR__OBJC_CLASS___NSColor_1002eea80,
                            PTR_s_colorWithDeviceRed_green_blue_al_1002e84a0);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  uVar2 = _objc_retainAutorelease(uVar2);
  uVar4 = (*(code *)puVar1)(uVar2,PTR_s_CGColor_1002e7270);
  _CGContextSetStrokeColorWithColor(uVar3,uVar4);
  _CGContextSetLineWidth(DAT_100170c08,uVar3);
  uVar4 = (*(code *)puVar1)(param_1,PTR_s_drawingPath_1002e84e0);
  _CGContextAddPath(uVar3,uVar4);
  _CGContextStrokePath(uVar3);
  _CGContextRestoreGState(uVar3);
  (*(code *)PTR__objc_release_10027d590)(uVar2);
  return;
}



// ===== hitTestPath  @ 0x10002d4cc =====

/* Function Stack Size: 0x10 bytes */

CGPath * Pen::hitTestPath(ID param_1,SEL param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  CGPath *pCVar4;
  double dVar5;
  double dVar6;
  
  lVar2 = _hitTestPath;
  puVar1 = PTR__objc_msgSend_10027d560;
  pCVar4 = *(CGPath **)(param_1 + _hitTestPath);
  if (pCVar4 == (CGPath *)0x0) {
    uVar3 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_drawingPath_1002e84e0);
    dVar5 = (double)(*(code *)puVar1)(param_1,PTR_s_strokeWidth_1002e6528);
    dVar6 = DAT_100170eb0;
    if (DAT_100170eb0 <= dVar5) {
      dVar6 = dVar5;
    }
    pCVar4 = (CGPath *)_CGPathCreateCopyByStrokingPath(dVar6,uVar3,0,0,0);
    *(CGPath **)(param_1 + lVar2) = pCVar4;
  }
  return pCVar4;
}



// ===== isContentsUnderPoint:  @ 0x10002d53d =====

/* Function Stack Size: 0x20 bytes */

char Pen::isContentsUnderPoint_(ID param_1,SEL param_2,CGPoint param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_hitTestPath_1002e84e8);
  cVar1 = _CGPathContainsPoint(param_3.field0_0x0,param_3.field1_0x8,uVar2,0,0);
  return cVar1;
}



// ===== isContentsInRect:  @ 0x10002d57b =====

/* Function Stack Size: 0x30 bytes */

char Pen::isContentsInRect_(ID param_1,SEL param_2,CGRect param_3)

{
  char cVar1;
  undefined8 uVar2;
  
  uVar2 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_hitTestPath_1002e84e8);
  cVar1 = FUN_10004f0ea(uVar2);
  return cVar1 != '\0';
}



// ===== keysForValuesToObserveForUndo  @ 0x10002d5c9 =====

/* Function Stack Size: 0x10 bytes */

ID Pen::keysForValuesToObserveForUndo(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = (*(code *)PTR__objc_msgSend_10027d560)
                    (PTR__OBJC_CLASS___NSSet_1002eec28,PTR_s_setWithObjects__1002e8490,
                     PTR_cf_points_1002f88c0,PTR_cf_color_1002f8ac0,PTR_cf_size_1002f8ac8,0);
  return IVar1;
}



// ===== initAtPoint:inWindow:  @ 0x10002d606 =====

/* Function Stack Size: 0x28 bytes */

ID Pen::initAtPoint_inWindow_(ID param_1,SEL param_2,CGPoint param_3,ID param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  objc_super local_48;
  undefined1 local_38 [8];
  
  local_48.super_class = (class_t *)PTR_Pen_1002ef848;
  local_48.receiver = param_1;
  IVar3 = _objc_msgSendSuper2(&local_48,PTR_s_initAtPoint_inWindow__1002e6678);
  puVar1 = PTR__objc_msgSend_10027d560;
  if (IVar3 != 0) {
    uVar4 = (*(code *)PTR__objc_msgSend_10027d560)
                      (PTR__OBJC_CLASS___NSArray_1002eeaa8,PTR_s_arrayWithObjects_count__1002e6568,
                       local_38,0);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar4 = *(undefined8 *)(IVar3 + _points);
    *(undefined8 *)(IVar3 + _points) = uVar5;
    (*(code *)PTR__objc_release_10027d590)(uVar4);
    uVar4 = (*(code *)puVar1)(IVar3,PTR_s_points_1002e84a8);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar5 = (*(code *)puVar1)(param_3.field0_0x0,param_3.field1_0x8,
                              PTR__OBJC_CLASS___NSValue_1002eeaf0,PTR_s_valueWithPoint__1002e84b8);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    uVar6 = (*(code *)puVar1)(uVar4,PTR_s_arrayByAddingObject__1002e84c0,uVar5);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)puVar1)(IVar3,PTR_s_setPoints__1002e84b0,uVar6);
    puVar2 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar6);
    (*(code *)puVar2)(uVar5);
    (*(code *)puVar2)(uVar4);
    dVar7 = param_3.field0_0x0 + DAT_100170c08;
    uVar4 = (*(code *)puVar1)(IVar3,PTR_s_points_1002e84a8);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar5 = (*(code *)puVar1)(dVar7,param_3.field1_0x8,PTR__OBJC_CLASS___NSValue_1002eeaf0,
                              PTR_s_valueWithPoint__1002e84b8);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    uVar6 = (*(code *)puVar1)(uVar4,PTR_s_arrayByAddingObject__1002e84c0,uVar5);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)puVar1)(IVar3,PTR_s_setPoints__1002e84b0,uVar6);
    puVar1 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar6);
    (*(code *)puVar1)(uVar5);
    (*(code *)puVar1)(uVar4);
  }
  return IVar3;
}



// ===== dealloc  @ 0x10002d7aa =====

/* Function Stack Size: 0x10 bytes */

void Pen::dealloc(ID param_1,SEL param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  objc_super local_28;
  
  puVar1 = PTR_s_hitTestPath_1002e84e8;
  lVar2 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_hitTestPath_1002e84e8);
  if (lVar2 != 0) {
    uVar3 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,puVar1);
    _CFRelease(uVar3);
  }
  puVar1 = PTR_s_drawingPath_1002e84e0;
  lVar2 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_drawingPath_1002e84e0);
  if (lVar2 != 0) {
    uVar3 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,puVar1);
    _CFRelease(uVar3);
  }
  local_28.super_class = (class_t *)PTR_Pen_1002ef848;
  local_28.receiver = param_1;
  _objc_msgSendSuper2(&local_28,PTR_s_dealloc_1002e63c0);
  return;
}



// ===== setPoints:  @ 0x10002d835 =====

/* Function Stack Size: 0x18 bytes */

void Pen::setPoints_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 local_48 [32];
  
  puVar1 = PTR__objc_retain_10027d598;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar4 = *(undefined8 *)(param_1 + _points);
  *(undefined8 *)(param_1 + _points) = uVar3;
  uVar3 = (*(code *)puVar1)(uVar3);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar4 = (*(code *)PTR__objc_msgSend_10027d560)
                    (param_1,PTR_s_pathFromPoints_smooth__1002e84d8,uVar3,1);
  (*(code *)puVar1)(param_1,PTR_s_setDrawingPath__1002e84f0,uVar4);
  (*(code *)puVar1)(param_1,PTR_s_setHitTestPath__1002e84f8,0);
  uVar4 = (*(code *)puVar1)(param_1,PTR_s_drawingPath_1002e84e0);
  _CGPathGetBoundingBox(local_48,uVar4);
  (*(code *)puVar1)(param_1,PTR_s_setRect__1002e8500);
  (*(code *)puVar2)(uVar3);
  return;
}



// ===== strokeWidth  @ 0x10002d910 =====

/* Function Stack Size: 0x10 bytes */

double Pen::strokeWidth(ID param_1,SEL param_2)

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



// ===== pathFromPoints:smooth:  @ 0x10002d942 =====

/* Function Stack Size: 0x1c bytes */

CGPath * Pen::pathFromPoints_smooth_(ID param_1,SEL param_2,ID param_3,char param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  CGPath *pCVar11;
  ulong uVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double in_XMM1_Qa;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  CGPath *local_38;
  
  uVar7 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  puVar3 = PTR_s_count_1002e6488;
  uVar8 = (*(code *)PTR__objc_msgSend_10027d560)(uVar7,PTR_s_count_1002e6488);
  puVar2 = PTR__objc_msgSend_10027d560;
  pCVar11 = (CGPath *)0x0;
  if (1 < uVar8) {
    if (param_4 == '\0') {
      pCVar11 = (CGPath *)_CGPathCreateMutable();
      local_58 = PTR___NSConcreteStackBlock_10027d330;
      local_50 = 0xc0000000;
      local_4c = 0;
      local_48 = FUN_10002dcbb;
      local_40 = &DAT_10027f3b0;
      local_38 = pCVar11;
      (*(code *)PTR__objc_msgSend_10027d560)
                (uVar7,PTR_s_enumerateObjectsUsingBlock__1002e6d78,&local_58);
    }
    else {
      uVar9 = (*(code *)PTR__objc_msgSend_10027d560)(uVar7,PTR_s_copy_1002e72e8);
      iVar4 = (*(code *)puVar2)(uVar9,puVar3);
      iVar13 = 1;
      do {
        uVar10 = (*(code *)puVar2)(param_1,PTR_s_perpendicularDistanceSimplificat_1002e8510,uVar9);
        uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
        (*(code *)PTR__objc_release_10027d590)(uVar9);
        puVar3 = PTR_s_count_1002e6488;
        iVar5 = (*(code *)puVar2)(uVar10,PTR_s_count_1002e6488);
        iVar6 = (*(code *)puVar2)(uVar10,puVar3);
        if (4 < iVar13) break;
        iVar13 = iVar13 + 1;
        bVar1 = iVar5 < iVar4;
        uVar9 = uVar10;
        iVar4 = iVar6;
      } while (bVar1);
      pCVar11 = (CGPath *)_CGPathCreateMutable();
      uVar9 = (*(code *)puVar2)(uVar10,PTR_s_objectAtIndexedSubscript__1002e6400,0);
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      dVar14 = (double)(*(code *)puVar2)(uVar9,PTR_s_pointValue_1002e84c8);
      (*(code *)PTR__objc_release_10027d590)(uVar9);
      uVar8 = (*(code *)puVar2)(uVar10,PTR_s_count_1002e6488);
      uVar12 = 1;
      dVar16 = dVar14;
      dVar18 = in_XMM1_Qa;
      dVar15 = dVar14;
      dVar17 = in_XMM1_Qa;
      if (1 < uVar8) {
        do {
          dVar16 = dVar15;
          dVar18 = dVar17;
          dVar17 = in_XMM1_Qa;
          uVar9 = (*(code *)puVar2)(uVar10,PTR_s_objectAtIndexedSubscript__1002e6400,uVar12);
          uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
          dVar15 = (double)(*(code *)puVar2)(uVar9,PTR_s_pointValue_1002e84c8);
          (*(code *)PTR__objc_release_10027d590)(uVar9);
          dVar20 = (dVar15 + dVar16) * DAT_100170dc0;
          dVar19 = (dVar17 + dVar18) * DAT_100170dc0;
          _CGPathMoveToPoint((dVar14 + dVar16) * DAT_100170dc0,(in_XMM1_Qa + dVar18) * DAT_100170dc0
                             ,pCVar11,0);
          _CGPathAddQuadCurveToPoint(dVar16,dVar18,dVar20,dVar19,pCVar11,0);
          uVar12 = uVar12 + 1;
          uVar8 = (*(code *)puVar2)(uVar10,PTR_s_count_1002e6488);
          dVar14 = dVar16;
          in_XMM1_Qa = dVar18;
        } while (uVar12 < uVar8);
      }
      dVar14 = (dVar15 + dVar15) * DAT_100170dc0;
      dVar19 = (dVar17 + dVar17) * DAT_100170dc0;
      _CGPathMoveToPoint((dVar16 + dVar15) * DAT_100170dc0,(dVar18 + dVar17) * DAT_100170dc0,pCVar11
                         ,0);
      _CGPathAddQuadCurveToPoint(dVar15,dVar17,dVar14,dVar19,pCVar11,0);
      (*(code *)PTR__objc_release_10027d590)(uVar10);
    }
  }
  (*(code *)PTR__objc_release_10027d590)(uVar7);
  return pCVar11;
}



// ===== perpendicularDistanceSimplificationOnPoints:  @ 0x10002dcf8 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Function Stack Size: 0x18 bytes */

ID Pen::perpendicularDistanceSimplificationOnPoints_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ID IVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  double in_XMM1_Qa;
  double dVar16;
  double dVar17;
  double dVar18;
  double local_40;
  
  uVar6 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  puVar5 = PTR_s_count_1002e6488;
  uVar7 = (*(code *)PTR__objc_msgSend_10027d560)(uVar6,PTR_s_count_1002e6488);
  puVar3 = PTR__objc_msgSend_10027d560;
  if (uVar7 < 3) {
    uVar8 = (*(code *)PTR__objc_retain_10027d598)(uVar6);
  }
  else {
    uVar8 = (*(code *)PTR__objc_msgSend_10027d560)
                      (PTR__OBJC_CLASS___NSMutableArray_1002eeb90,PTR_s_alloc_1002e64e8);
    uVar8 = (*(code *)puVar3)(uVar8,PTR_s_init_1002e6538);
    uVar9 = (*(code *)puVar3)(uVar6,PTR_s_objectAtIndexedSubscript__1002e6400,0);
    uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
    (*(code *)puVar3)(uVar8,PTR_s_addObject__1002e6750,uVar9);
    (*(code *)PTR__objc_release_10027d590)(uVar9);
    lVar10 = (*(code *)puVar3)(uVar6,puVar5);
    puVar5 = PTR_s_objectAtIndexedSubscript__1002e6400;
    if (1 < lVar10 - 1U) {
      bVar2 = false;
      uVar7 = 1;
      do {
        uVar9 = (*(code *)puVar3)(uVar6,puVar5,uVar7 - 1);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        dVar12 = (double)(*(code *)puVar3)(uVar9,PTR_s_pointValue_1002e84c8);
        puVar4 = PTR__objc_release_10027d590;
        dVar16 = in_XMM1_Qa;
        (*(code *)PTR__objc_release_10027d590)(uVar9);
        uVar9 = (*(code *)puVar3)(uVar6,puVar5,uVar7);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        dVar13 = (double)(*(code *)puVar3)(uVar9,PTR_s_pointValue_1002e84c8);
        dVar17 = dVar16;
        (*(code *)puVar4)(uVar9);
        uVar1 = uVar7 + 1;
        uVar9 = (*(code *)puVar3)(uVar6,puVar5);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        dVar14 = (double)(*(code *)puVar3)(uVar9,PTR_s_pointValue_1002e84c8);
        dVar18 = dVar17;
        (*(code *)puVar4)(uVar9);
        local_40 = in_XMM1_Qa;
        if (bVar2) {
          uVar9 = (*(code *)puVar3)(uVar8,PTR_s_lastObject_1002e7690);
          uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
          dVar12 = (double)(*(code *)puVar3)(uVar9,PTR_s_pointValue_1002e84c8);
          (*(code *)PTR__objc_release_10027d590)(uVar9);
          local_40 = dVar18;
        }
        fVar15 = (float)(dVar14 - dVar12);
        if ((fVar15 != 0.0) || (NAN(fVar15))) {
          fVar15 = (float)((dVar17 - local_40) / (dVar14 - dVar12));
          if ((fVar15 != 0.0) || (NAN(fVar15))) {
            fVar15 = (float)((uint)(float)((double)(float)(dVar17 - dVar14 * (double)fVar15) +
                                          (dVar13 * (double)fVar15 - dVar16)) & _DAT_100171130) /
                     SQRT(fVar15 * fVar15 + DAT_100171058);
          }
          else {
            in_XMM1_Qa = dVar13;
            if (((dVar14 < dVar13) && (dVar12 < dVar13)) ||
               ((fVar15 = (float)((uint)(float)(local_40 - dVar16) & _DAT_100171130),
                dVar13 < dVar14 && (dVar13 < dVar12)))) goto LAB_10002df94;
          }
LAB_10002e025:
          bVar2 = true;
          in_XMM1_Qa = (double)(ulong)(uint)DAT_100171140;
          if (DAT_100171140 <= fVar15) goto LAB_10002e038;
        }
        else {
          in_XMM1_Qa = dVar16;
          if (((dVar16 <= dVar17) || (dVar16 <= local_40)) &&
             ((fVar15 = (float)((uint)(float)(dVar12 - dVar13) & _DAT_100171130), dVar17 <= dVar16
              || (local_40 <= dVar16)))) goto LAB_10002e025;
LAB_10002df94:
          uVar9 = (*(code *)puVar3)(uVar6,puVar5,uVar7);
          uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
          (*(code *)puVar3)(uVar8,PTR_s_addObject__1002e6750,uVar9);
          (*(code *)PTR__objc_release_10027d590)(uVar9);
LAB_10002e038:
          uVar9 = (*(code *)puVar3)(uVar6,puVar5,uVar7);
          uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
          (*(code *)puVar3)(uVar8,PTR_s_addObject__1002e6750,uVar9);
          (*(code *)PTR__objc_release_10027d590)(uVar9);
          bVar2 = false;
        }
        lVar10 = (*(code *)PTR__objc_msgSend_10027d560)(uVar6,PTR_s_count_1002e6488);
        uVar7 = uVar1;
      } while (uVar1 < lVar10 - 1U);
    }
    uVar9 = (*(code *)puVar3)(uVar6,PTR_s_lastObject_1002e7690);
    uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
    (*(code *)puVar3)(uVar8,PTR_s_addObject__1002e6750,uVar9);
    (*(code *)PTR__objc_release_10027d590)(uVar9);
  }
  (*(code *)PTR__objc_release_10027d590)(uVar6);
  IVar11 = _objc_autoreleaseReturnValue(uVar8);
  return IVar11;
}



// ===== points  @ 0x10002e0f8 =====

/* Function Stack Size: 0x10 bytes */

ID Pen::points(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + _points);
}



// ===== setStrokeWidth:  @ 0x10002e109 =====

/* Function Stack Size: 0x18 bytes */

void Pen::setStrokeWidth_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + _strokeWidth) = param_3;
  return;
}



// ===== setHitTestPath:  @ 0x10002e11b =====

/* Function Stack Size: 0x18 bytes */

void Pen::setHitTestPath_(ID param_1,SEL param_2,CGPath *param_3)

{
  *(CGPath **)(param_1 + _hitTestPath) = param_3;
  return;
}



// ===== drawingPath  @ 0x10002e12c =====

/* Function Stack Size: 0x10 bytes */

CGPath * Pen::drawingPath(ID param_1,SEL param_2)

{
  return *(CGPath **)(param_1 + _drawingPath);
}



// ===== setDrawingPath:  @ 0x10002e13d =====

/* Function Stack Size: 0x18 bytes */

void Pen::setDrawingPath_(ID param_1,SEL param_2,CGPath *param_3)

{
  *(CGPath **)(param_1 + _drawingPath) = param_3;
  return;
}



// ===== rect  @ 0x10002e14e =====

/* Function Stack Size: 0x10 bytes */

CGRect * Pen::rect(CGRect *__return_storage_ptr__,ID param_1,SEL param_2)

{
  double dVar1;
  long lVar2;
  
  lVar2 = _rect;
  (__return_storage_ptr__->field1_0x10).field1_0x8 = *(double *)(param_1 + 0x18 + _rect);
  (__return_storage_ptr__->field1_0x10).field0_0x0 = *(double *)(param_1 + 0x10 + lVar2);
  dVar1 = *(double *)(param_1 + lVar2);
  (__return_storage_ptr__->field0_0x0).field1_0x8 = *(double *)(param_1 + 8 + lVar2);
  (__return_storage_ptr__->field0_0x0).field0_0x0 = dVar1;
  return __return_storage_ptr__;
}



// ===== setRect:  @ 0x10002e180 =====

/* Function Stack Size: 0x30 bytes */

void Pen::setRect_(ID param_1,SEL param_2,CGRect param_3)

{
  long lVar1;
  
  lVar1 = _rect;
  *(double *)(param_1 + 0x18 + _rect) = param_3.field1_0x10.field1_0x8;
  *(double *)(param_1 + 0x10 + lVar1) = param_3.field1_0x10.field0_0x0;
  *(double *)(param_1 + 8 + lVar1) = param_3.field0_0x0.field1_0x8;
  *(double *)(param_1 + lVar1) = param_3.field0_0x0.field0_0x0;
  return;
}



// ===== .cxx_destruct  @ 0x10002e1b0 =====

/* Function Stack Size: 0x10 bytes */

void Pen::_cxx_destruct(ID param_1,SEL param_2)

{
  _objc_storeStrong(param_1 + _points,0);
  return;
}



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



// ===== init  @ 0x1000403fa =====

/* Function Stack Size: 0x10 bytes */

ID Document::init(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  objc_super local_48;
  undefined1 local_38 [8];
  
  local_48.super_class = (class_t *)PTR_Document_1002ef8b8;
  local_48.receiver = param_1;
  IVar3 = _objc_msgSendSuper2(&local_48,PTR_s_init_1002e6538);
  puVar1 = PTR__objc_msgSend_10027d560;
  if (IVar3 != 0) {
    uVar4 = (*(code *)PTR__objc_msgSend_10027d560)
                      (PTR__OBJC_CLASS___NSArray_1002eeaa8,PTR_s_arrayWithObjects_count__1002e6568,
                       local_38,0);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar6 = (*(code *)puVar1)(uVar5,PTR_s_mutableCopy_1002e6730);
    uVar4 = *(undefined8 *)(IVar3 + _graphics);
    *(undefined8 *)(IVar3 + _graphics) = uVar6;
    puVar2 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar4);
    (*(code *)puVar2)(uVar5);
    uVar4 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSNotificationCenter_1002eead0,
                              PTR_s_defaultCenter_1002e65d0);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar4 = *(undefined8 *)PTR__NSUndoManagerCheckpointNotification_10027d288;
    uVar6 = (*(code *)puVar1)(IVar3,PTR_s_undoManager_1002e6bc8);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)PTR__objc_msgSend_10027d560)
              (uVar5,PTR_s_addObserver_selector_name_object_1002e69a0,IVar3,
               PTR_s_observeUndoManagerCheckpoint__1002e8e80,uVar4,uVar6);
    (*(code *)puVar2)(uVar6);
    (*(code *)puVar2)(uVar5);
  }
  return IVar3;
}



// ===== dealloc  @ 0x100040505 =====

/* Function Stack Size: 0x10 bytes */

void Document::dealloc(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  objc_super local_38;
  
  _NSLog(&cf_dealloc___,param_1);
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar3 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_graphics_1002e6d18);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)puVar1)(param_1,PTR_s_stopObservingGraphics__1002e8e88,uVar3);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar3);
  uVar3 = (*(code *)puVar1)(param_1,PTR_s_image_1002e69f0);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)puVar1)(param_1,PTR_s_stopObservingImage__1002e8e90,uVar3);
  (*(code *)puVar2)(uVar3);
  uVar3 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSNotificationCenter_1002eead0,
                            PTR_s_defaultCenter_1002e65d0);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)puVar1)(uVar3,PTR_s_removeObserver__1002e69b0,param_1);
  (*(code *)puVar2)(uVar3);
  local_38.super_class = (class_t *)PTR_Document_1002ef8b8;
  local_38.receiver = param_1;
  _objc_msgSendSuper2(&local_38,PTR_s_dealloc_1002e63c0);
  return;
}



// ===== makeWindowControllers  @ 0x1000405f0 =====

/* Function Stack Size: 0x10 bytes */

void Document::makeWindowControllers(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_R14;
  objc_super local_68;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  undefined8 local_38;
  
  puVar2 = PTR_s_documentType_1002e6f10;
  lVar3 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_documentType_1002e6f10);
  if (lVar3 == 0) {
    uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_image_1002e69f0);
    unaff_R14 = _objc_retainAutoreleasedReturnValue(uVar4);
    if (unaff_R14 != 0) {
      bVar1 = true;
      goto LAB_100040641;
    }
LAB_10004068e:
    local_58 = PTR___NSConcreteStackBlock_10027d330;
    local_50 = 0xc2000000;
    local_4c = 0;
    local_48 = FUN_10004078c;
    local_40 = &DAT_10027fbf0;
    local_38 = (*(code *)PTR__objc_retain_10027d598)(param_1);
    _dispatch_async(PTR___dispatch_main_q_10027d378,&local_58);
    (*(code *)PTR__objc_release_10027d590)(local_38);
  }
  else {
    bVar1 = false;
LAB_100040641:
    lVar3 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,puVar2);
    if (lVar3 == 1) {
      uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_video_1002e8078);
      lVar3 = _objc_retainAutoreleasedReturnValue(uVar4);
      (*(code *)PTR__objc_release_10027d590)(lVar3);
      if (bVar1) {
        (*(code *)PTR__objc_release_10027d590)(unaff_R14);
      }
      if (lVar3 == 0) goto LAB_10004068e;
    }
    else if (bVar1) {
      (*(code *)PTR__objc_release_10027d590)(unaff_R14);
    }
    local_68.super_class = (class_t *)PTR_Document_1002ef8b8;
    local_68.receiver = param_1;
    _objc_msgSendSuper2(&local_68,PTR_s_makeWindowControllers_1002e8bc0);
    puVar2 = PTR__objc_msgSend_10027d560;
    uVar4 = (*(code *)PTR__objc_msgSend_10027d560)
                      (PTR__OBJC_CLASS___NSStoryboard_1002eeb58,
                       PTR_s_storyboardWithName_bundle__1002e6928,&cf_Storyboard,0);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar5 = (*(code *)puVar2)(uVar4,PTR_s_instantiateInitialController_1002e8e98);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)puVar2)(param_1,PTR_s_addWindowController__1002e8ea0,uVar5);
    puVar2 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar5);
    (*(code *)puVar2)(uVar4);
  }
  return;
}



// ===== setInputType:  @ 0x1000407c0 =====

/* Function Stack Size: 0x18 bytes */

void Document::setInputType_(ID param_1,SEL param_2,long_long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_s_image_1002e69f0;
  puVar1 = PTR__objc_msgSend_10027d560;
  if (param_3 != 2) {
    if (param_3 != 5) goto LAB_100040889;
    uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_image_1002e69f0);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar5 = (*(code *)puVar1)(uVar4,puVar2);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    cVar3 = (*(code *)puVar1)(uVar5,PTR_s_isWindowSnapshot_1002e8ea8);
    puVar1 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar5);
    (*(code *)puVar1)(uVar4);
    param_3 = 1;
    if (cVar3 == '\0') goto LAB_100040889;
  }
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,puVar2);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)puVar1)(uVar4,PTR_s_setHasShadow__1002e7248,1);
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  param_3 = 2;
LAB_100040889:
  *(long_long *)(param_1 + _inputType) = param_3;
  return;
}



// ===== dataSignalOfType:  @ 0x1000408a3 =====

/* Function Stack Size: 0x18 bytes */

ID Document::dataSignalOfType_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ID IVar16;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  uVar4 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  lVar5 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_documentType_1002e6f10);
  puVar3 = PTR_RACSignal_1002eee10;
  puVar2 = PTR_s_cachedExportData_1002e8eb0;
  puVar1 = PTR__objc_retain_10027d598;
  if (lVar5 == 1) {
    uVar6 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_cachedExportData_1002e8eb0);
    lVar5 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)PTR__objc_release_10027d590)(lVar5);
    puVar3 = PTR_RACSignal_1002eee10;
    puVar1 = PTR__objc_msgSend_10027d560;
    if (lVar5 == 0) {
      uVar6 = (*(code *)PTR__objc_msgSend_10027d560)
                        (PTR_RACSignal_1002eee10,PTR_s_return__1002e82f0,param_1);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar6);
      puVar3 = PTR_s_deliverOnMainThread_1002e8328;
      uVar6 = (*(code *)puVar1)(uVar7,PTR_s_deliverOnMainThread_1002e8328);
      uVar8 = _objc_retainAutoreleasedReturnValue(uVar6);
      uVar6 = (*(code *)puVar1)(uVar8,PTR_s_doNext__1002e7d28,&PTR___NSConcreteGlobalBlock_10027fc70
                               );
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar6);
      puVar2 = PTR_s_flattenMap__1002e7d90;
      uVar6 = (*(code *)puVar1)(uVar9,PTR_s_flattenMap__1002e7d90,
                                &PTR___NSConcreteGlobalBlock_10027fcb0);
      uVar10 = _objc_retainAutoreleasedReturnValue(uVar6);
      uVar6 = (*(code *)puVar1)(PTR_RACScheduler_1002eeec0,PTR_s_scheduler_1002e8308);
      uVar11 = _objc_retainAutoreleasedReturnValue(uVar6);
      uVar6 = (*(code *)puVar1)(uVar10,PTR_s_deliverOn__1002e8310,uVar11);
      uVar12 = _objc_retainAutoreleasedReturnValue(uVar6);
      uVar6 = (*(code *)puVar1)(uVar12,puVar2,&PTR___NSConcreteGlobalBlock_10027fcf0);
      uVar13 = _objc_retainAutoreleasedReturnValue(uVar6);
      uVar6 = (*(code *)puVar1)(uVar13,puVar3);
      uVar14 = _objc_retainAutoreleasedReturnValue(uVar6);
      uVar6 = (*(code *)puVar1)(uVar14,PTR_s_doNext__1002e7d28,
                                &PTR___NSConcreteGlobalBlock_10027fd30);
      uVar15 = _objc_retainAutoreleasedReturnValue(uVar6);
      uVar6 = (*(code *)puVar1)(uVar15,PTR_s_map__1002e7290,&PTR___NSConcreteGlobalBlock_10027fd70);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      puVar1 = PTR__objc_release_10027d590;
      (*(code *)PTR__objc_release_10027d590)(uVar15);
      (*(code *)puVar1)(uVar14);
      (*(code *)puVar1)(uVar13);
      (*(code *)puVar1)(uVar12);
      (*(code *)puVar1)(uVar11);
      (*(code *)puVar1)(uVar10);
      (*(code *)puVar1)(uVar9);
      (*(code *)puVar1)(uVar8);
      (*(code *)puVar1)(uVar7);
    }
    else {
      uVar6 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,puVar2);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar6);
      uVar6 = (*(code *)puVar1)(puVar3,PTR_s_return__1002e82f0,uVar7);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      (*(code *)PTR__objc_release_10027d590)(uVar7);
    }
  }
  else {
    local_60 = PTR___NSConcreteStackBlock_10027d330;
    local_58 = 0xc2000000;
    local_54 = 0;
    local_50 = FUN_100040b6f;
    local_48 = &DAT_10027fc20;
    local_40 = (*(code *)PTR__objc_retain_10027d598)(param_1);
    local_38 = (*(code *)puVar1)(uVar4);
    uVar6 = (*(code *)PTR__objc_msgSend_10027d560)(puVar3,PTR_s_createSignal__1002e7d80,&local_60);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    puVar1 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(local_38);
    (*(code *)puVar1)(local_40);
  }
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  IVar16 = _objc_autoreleaseReturnValue(uVar6);
  return IVar16;
}



// ===== dataOfType:error:  @ 0x1000413c1 =====

/* Function Stack Size: 0x20 bytes */

ID Document::dataOfType_error_(ID param_1,SEL param_2,ID param_3,ID *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ID IVar12;
  long lVar13;
  cfstringStruct *local_68;
  cfstringStruct *pcStack_60;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar13 = *(long *)PTR____stack_chk_guard_10027d368;
  local_38 = lVar13;
  uVar6 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  cVar5 = (*(code *)PTR__objc_msgSend_10027d560)
                    (uVar6,PTR_s_isEqualToString__1002e6410,PTR_cf_se_razola_glui_1002f8a88);
  puVar2 = PTR_s_documentType_1002e6f10;
  puVar1 = PTR__objc_msgSend_10027d560;
  if (cVar5 == '\0') {
    lVar10 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_documentType_1002e6f10);
    if (lVar10 == 0) {
      uVar7 = (*(code *)PTR__objc_msgSend_10027d560)
                        (param_1,PTR_s_annotationImageDataForTypeName_w_1002e8ec0,uVar6,1);
      lVar10 = _objc_retainAutoreleasedReturnValue(uVar7);
      puVar2 = PTR__OBJC_CLASS___NSError_1002eeef8;
      puVar1 = PTR__objc_msgSend_10027d560;
      if (lVar10 != 0) goto LAB_1000417c7;
      uVar7 = *(undefined8 *)PTR__NSCocoaErrorDomain_10027d0a8;
      local_48 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_10027d198;
      local_40 = *(undefined8 *)PTR__NSLocalizedFailureReasonErrorKey_10027d1a0;
      local_68 = &cf_Couldnotsavefile_;
      pcStack_60 = &cf_Anunexpectederroroccured_;
      uVar8 = (*(code *)PTR__objc_msgSend_10027d560)
                        (PTR__OBJC_CLASS___NSDictionary_1002eeb78,
                         PTR_s_dictionaryWithObjects_forKeys_co_1002e6978,&local_68,&local_48,2);
      uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
      uVar7 = (*(code *)puVar1)(puVar2,PTR_s_errorWithDomain_code_userInfo__1002e8548,uVar7,0x200,
                                uVar8);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      IVar12 = _objc_autorelease(uVar7);
      *param_4 = IVar12;
      puVar1 = PTR__objc_release_10027d590;
      (*(code *)PTR__objc_release_10027d590)(uVar8);
      (*(code *)puVar1)(0);
      lVar13 = *(long *)PTR____stack_chk_guard_10027d368;
    }
    else {
      lVar11 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,puVar2);
      lVar10 = 0;
      if (lVar11 != 1) goto LAB_1000417c7;
      uVar7 = (*(code *)PTR__objc_msgSend_10027d560)
                        (PTR__OBJC_CLASS___NSError_1002eeef8,
                         PTR_s_annotateErrorWithCode_descriptio_1002e8ec8,0x2b,
                         &
                         cf__DocumentdataOfType_error__calledonvideodocumenttype_MustusedataSignalOfType_
                        );
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      IVar12 = _objc_autorelease(uVar7);
      *param_4 = IVar12;
    }
    lVar10 = 0;
  }
  else {
    uVar7 = (*(code *)PTR__objc_msgSend_10027d560)
                      (PTR__OBJC_CLASS___NSMutableDictionary_1002eecd8,PTR_s_dictionary_1002e7328);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    puVar2 = PTR__OBJC_CLASS___NSKeyedArchiver_1002eed38;
    uVar8 = (*(code *)puVar1)(param_1,PTR_s_graphics_1002e6d18);
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
    uVar9 = (*(code *)puVar1)(puVar2,PTR_s_archivedDataWithRootObject__1002e8010,uVar8);
    uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
    (*(code *)puVar1)(uVar7,PTR_s_setObject_forKey__1002e65b0,uVar9,&cf_graphics);
    puVar2 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar9);
    (*(code *)puVar2)(uVar8);
    puVar2 = PTR__OBJC_CLASS___NSKeyedArchiver_1002eed38;
    uVar8 = (*(code *)puVar1)(param_1,PTR_s_export_1002e6c50);
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
    uVar9 = (*(code *)puVar1)(puVar2,PTR_s_archivedDataWithRootObject__1002e8010,uVar8);
    uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
    (*(code *)puVar1)(uVar7,PTR_s_setObject_forKey__1002e65b0,uVar9,&cf_export);
    puVar2 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar9);
    (*(code *)puVar2)(uVar8);
    puVar2 = PTR__OBJC_CLASS___NSKeyedArchiver_1002eed38;
    uVar8 = (*(code *)puVar1)(param_1,PTR_s_image_1002e69f0);
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
    uVar9 = (*(code *)puVar1)(puVar2,PTR_s_archivedDataWithRootObject__1002e8010,uVar8);
    uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
    puVar4 = PTR_s_setObject_forKey__1002e65b0;
    (*(code *)puVar1)(uVar7,PTR_s_setObject_forKey__1002e65b0,uVar9,&cf_image);
    puVar2 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar9);
    (*(code *)puVar2)(uVar8);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1002eeaa0;
    uVar8 = (*(code *)puVar1)(param_1,PTR_s_inputType_1002e8018);
    puVar3 = PTR_s_numberWithInteger__1002e6560;
    uVar8 = (*(code *)puVar1)(puVar2,PTR_s_numberWithInteger__1002e6560,uVar8);
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
    (*(code *)puVar1)(uVar7,puVar4,uVar8,&cf_inputType);
    puVar2 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar8);
    uVar8 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSNumber_1002eeaa0,puVar3,2);
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
    (*(code *)puVar1)(uVar7,PTR_s_setObject_forKey__1002e65b0,uVar8,&cf_version);
    (*(code *)puVar2)(uVar8);
    local_50 = 0;
    uVar8 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSPropertyListSerialization_1002ef060,
                              PTR_s_dataWithPropertyList_format_opti_1002e8ef0,uVar7,200,0,&local_50
                             );
    lVar10 = _objc_retainAutoreleasedReturnValue(uVar8);
    lVar13 = *(long *)PTR____stack_chk_guard_10027d368;
    (*(code *)puVar2)(uVar7);
  }
LAB_1000417c7:
  (*(code *)PTR__objc_release_10027d590)(uVar6);
  if (lVar13 == local_38) {
    IVar12 = _objc_autoreleaseReturnValue(lVar10);
    return IVar12;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



// ===== annotationImageDataForTypeName:withImage:  @ 0x1000417f2 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Function Stack Size: 0x1c bytes */

ID Document::annotationImageDataForTypeName_withImage_
             (ID param_1,SEL param_2,ID param_3,char param_4)

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
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ID IVar13;
  undefined *puVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double local_38;
  
  puVar2 = PTR__OBJC_CLASS___NSUserDefaults_1002eeab0;
  puVar14 = PTR_s_standardUserDefaults_1002e6570;
  uVar4 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar5 = (*(code *)PTR__objc_msgSend_10027d560)(puVar2,puVar14);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  cVar3 = (*(code *)puVar1)(uVar5,PTR_s_boolForKey__1002e6680,
                            PTR_cf_kDisableAutoScalingKey_1002f8938);
  (*(code *)PTR__objc_release_10027d590)(uVar5);
  puVar14 = PTR_s_image_1002e69f0;
  if (cVar3 == '\0') {
    local_38 = DAT_100170c08;
  }
  else {
    uVar5 = (*(code *)puVar1)(param_1,PTR_s_image_1002e69f0);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    local_38 = (double)(*(code *)puVar1)(uVar5,PTR_s_PPI_1002e7448);
    local_38 = local_38 / _DAT_100170f98;
    (*(code *)PTR__objc_release_10027d590)(uVar5);
  }
  uVar5 = (*(code *)puVar1)(param_1,puVar14);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  cVar3 = (*(code *)puVar1)(uVar5,PTR_s_hasShadow_1002e8330);
  puVar14 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar5);
  puVar2 = PTR_s_image_1002e69f0;
  dVar15 = DAT_100170fe0 * local_38;
  dVar17 = dVar15;
  dVar19 = dVar15;
  if (cVar3 == '\0') {
    dVar17 = *(double *)(PTR__NSZeroPoint_10027d308 + 8);
    dVar19 = *(double *)PTR__NSZeroPoint_10027d308;
  }
  dVar18 = dVar17;
  uVar5 = (*(code *)puVar1)(param_1,PTR_s_image_1002e69f0);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar6 = (*(code *)puVar1)(uVar5,puVar2);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  dVar16 = (double)(*(code *)puVar1)(uVar6,PTR_s_size_1002e66a8);
  (*(code *)puVar14)(uVar6);
  (*(code *)puVar14)(uVar5);
  uVar5 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSBitmapImageRep_1002eeeb0,PTR_s_alloc_1002e64e8);
  uVar5 = (*(code *)puVar1)(uVar5,PTR_s_initWithBitmapDataPlanes_pixelsW_1002e8ef8,0,
                            (long)(dVar19 + dVar19 + local_38 * dVar16),
                            (long)(dVar17 + dVar17 + local_38 * dVar18),8,4,1,0,
                            *(undefined8 *)PTR__NSCalibratedRGBColorSpace_10027d0a0,0,0);
  (*(code *)puVar1)(PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98,PTR_s_saveGraphicsState_1002e6a70)
  ;
  puVar2 = PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98;
  uVar6 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98,
                            PTR_s_graphicsContextWithBitmapImageRe_1002e8f00,uVar5);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  (*(code *)puVar1)(puVar2,PTR_s_setCurrentContext__1002e8f08,uVar6);
  (*(code *)puVar14)(uVar6);
  if ((local_38 != DAT_100170c08) || (NAN(local_38) || NAN(DAT_100170c08))) {
    uVar6 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSAffineTransform_1002eeb10,
                              PTR_s_transform_1002e66c8);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)puVar1)(local_38,uVar6,PTR_s_scaleBy__1002e66d8);
    (*(code *)puVar1)(uVar6,PTR_s_concat_1002e8f10);
    (*(code *)PTR__objc_release_10027d590)(uVar6);
  }
  puVar14 = PTR_s_image_1002e69f0;
  uVar6 = (*(code *)puVar1)(param_1,PTR_s_image_1002e69f0);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  cVar3 = (*(code *)puVar1)(uVar6,PTR_s_hasShadow_1002e8330);
  (*(code *)PTR__objc_release_10027d590)(uVar6);
  if (cVar3 != '\0') {
    uVar6 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSAffineTransform_1002eeb10,
                              PTR_s_transform_1002e66c8);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)puVar1)(dVar19,dVar17,uVar7,PTR_s_translateXBy_yBy__1002e66d0);
    (*(code *)puVar1)(uVar7,PTR_s_concat_1002e8f10);
    uVar6 = (*(code *)puVar1)(param_1,PTR_s_graphics_1002e6d18);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    puVar14 = PTR__OBJC_CLASS___NSPredicate_1002eebf8;
    uVar8 = (*(code *)puVar1)(PTR_Overlay_1002eeec8,PTR_s_class_1002e6a28);
    uVar8 = (*(code *)puVar1)(puVar14,PTR_s_predicateWithFormat__1002e6d40,&cf_selfisKindOfClass___,
                              uVar8);
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
    uVar9 = (*(code *)puVar1)(uVar6,PTR_s_filteredArrayUsingPredicate__1002e6d48,uVar8);
    uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
    puVar14 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar8);
    (*(code *)puVar14)(uVar6);
    lVar10 = (*(code *)puVar1)(uVar9,PTR_s_count_1002e6488);
    uVar6 = *(undefined8 *)(&DAT_1001712f0 + (ulong)(lVar10 == 0) * 8);
    uVar8 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98,
                              PTR_s_currentContext_1002e6a60);
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
    uVar8 = _objc_retainAutorelease(uVar8);
    uVar11 = (*(code *)puVar1)(uVar8,PTR_s_graphicsPort_1002e6a68);
    uVar6 = (*(code *)puVar1)(0,uVar6,PTR__OBJC_CLASS___NSColor_1002eea80,
                              PTR_s_colorWithWhite_alpha__1002e6508);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    uVar6 = _objc_retainAutorelease(uVar6);
    uVar12 = (*(code *)puVar1)(uVar6,PTR_s_CGColor_1002e7270);
    _CGContextSetShadowWithColor(0,0,dVar15,uVar11,uVar12);
    (*(code *)puVar14)(uVar6);
    (*(code *)puVar14)(uVar8);
    (*(code *)puVar14)(uVar9);
    (*(code *)puVar14)(uVar7);
    puVar14 = PTR_s_image_1002e69f0;
  }
  puVar2 = PTR_CanvasView_1002ef068;
  if (param_4 != '\0') {
    uVar6 = (*(code *)puVar1)(param_1,puVar14);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)puVar1)(puVar2,PTR_s_drawImage__1002e8f18,uVar6);
    (*(code *)PTR__objc_release_10027d590)(uVar6);
  }
  uVar6 = (*(code *)puVar1)(param_1,puVar14);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  cVar3 = (*(code *)puVar1)(uVar6,PTR_s_hasShadow_1002e8330);
  (*(code *)PTR__objc_release_10027d590)(uVar6);
  if (cVar3 != '\0') {
    uVar6 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98,
                              PTR_s_currentContext_1002e6a60);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    uVar6 = _objc_retainAutorelease(uVar6);
    uVar7 = (*(code *)puVar1)(uVar6,PTR_s_graphicsPort_1002e6a68);
    _CGContextSetShadowWithColor(0,0,0,uVar7,0);
    (*(code *)PTR__objc_release_10027d590)(uVar6);
  }
  puVar2 = PTR_CanvasView_1002ef068;
  uVar6 = (*(code *)puVar1)(param_1,PTR_s_graphics_1002e6d18);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  puVar14 = PTR_s_image_1002e69f0;
  uVar7 = (*(code *)puVar1)(param_1,PTR_s_image_1002e69f0);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  uVar8 = (*(code *)puVar1)(uVar7,puVar14);
  uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
  (*(code *)puVar1)(uVar8,PTR_s_size_1002e66a8);
  (*(code *)puVar1)(puVar2,PTR_s_drawGraphics_size__1002e8f20,uVar6);
  puVar14 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar8);
  (*(code *)puVar14)(uVar7);
  (*(code *)puVar14)(uVar6);
  (*(code *)puVar1)(PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98,
                    PTR_s_restoreGraphicsState_1002e6ab0);
  uVar6 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSColorSpace_1002ef070,PTR_s_sRGBColorSpace_1002e8f28)
  ;
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  uVar7 = (*(code *)puVar1)(uVar5,PTR_s_bitmapImageRepByConvertingToColo_1002e8f30,uVar6,0);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  (*(code *)puVar14)(uVar5);
  (*(code *)puVar14)(uVar6);
  (*(code *)puVar1)(dVar16,dVar18,uVar7,PTR_s_setSize__1002e8348);
  uVar5 = (*(code *)puVar1)(param_1,PTR_s_imageFileTypeFromUTIString__1002e8f38,uVar4);
  (*(code *)puVar14)(uVar4);
  uVar4 = (*(code *)puVar1)(uVar7,PTR_s_representationUsingType_properti_1002e8f40,uVar5,0);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)puVar14)(uVar7);
  IVar13 = _objc_autoreleaseReturnValue(uVar4);
  return IVar13;
}



// ===== readFromData:ofType:error:  @ 0x100041eb8 =====

/* Function Stack Size: 0x28 bytes */

char Document::readFromData_ofType_error_(ID param_1,SEL param_2,ID param_3,ID param_4,ID *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  uVar5 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  cVar4 = (*(code *)PTR__objc_msgSend_10027d560)
                    (param_4,PTR_s_isEqualToString__1002e6410,PTR_cf_se_razola_glui_1002f8a88);
  if (cVar4 == '\0') {
    cVar4 = '\0';
  }
  else {
    uVar6 = (*(code *)PTR__objc_msgSend_10027d560)
                      (PTR__OBJC_CLASS___NSPropertyListSerialization_1002ef060,
                       PTR_s_propertyListWithData_options_for_1002e8f48,uVar5,0,0,0);
    lVar7 = _objc_retainAutoreleasedReturnValue(uVar6);
    puVar2 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1002eed30;
    puVar1 = PTR__objc_msgSend_10027d560;
    if (lVar7 != 0) {
      uVar6 = (*(code *)PTR__objc_msgSend_10027d560)(lVar7,PTR_s_objectForKey__1002e6550,&cf_image);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      uVar8 = (*(code *)puVar1)(puVar2,PTR_s_unarchiveObjectWithData__1002e6f00,uVar6);
      uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
      (*(code *)puVar1)(param_1,PTR_s_setImage__1002e6448,uVar8);
      puVar2 = PTR__objc_release_10027d590;
      (*(code *)PTR__objc_release_10027d590)(uVar8);
      (*(code *)puVar2)(uVar6);
      puVar3 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1002eed30;
      uVar6 = (*(code *)puVar1)(lVar7,PTR_s_objectForKey__1002e6550,&cf_export);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      uVar8 = (*(code *)puVar1)(puVar3,PTR_s_unarchiveObjectWithData__1002e6f00,uVar6);
      uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
      (*(code *)puVar1)(param_1,PTR_s_setExport__1002e8f50,uVar8);
      (*(code *)puVar2)(uVar8);
      (*(code *)puVar2)(uVar6);
      uVar6 = (*(code *)puVar1)(param_1,PTR_s_export_1002e6c50);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      (*(code *)puVar1)(uVar6,PTR_s_setDocument__1002e6c30,param_1);
      (*(code *)puVar2)(uVar6);
      puVar3 = PTR_s_objectForKey__1002e6550;
      uVar6 = (*(code *)puVar1)(lVar7,PTR_s_objectForKey__1002e6550,&cf_inputType);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      uVar8 = (*(code *)puVar1)(uVar6,PTR_s_integerValue_1002e6740);
      *(undefined8 *)(param_1 + _inputType) = uVar8;
      (*(code *)puVar2)(uVar6);
      puVar2 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1002eed30;
      uVar6 = (*(code *)puVar1)(lVar7,puVar3,&cf_graphics);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      uVar8 = (*(code *)puVar1)(puVar2,PTR_s_unarchiveObjectWithData__1002e6f00,uVar6);
      uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
      puVar2 = PTR__objc_release_10027d590;
      (*(code *)PTR__objc_release_10027d590)(uVar6);
      uVar6 = (*(code *)puVar1)(param_1,PTR_s_undoManager_1002e6bc8);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      (*(code *)puVar1)(uVar6,PTR_s_disableUndoRegistration_1002e8f58);
      (*(code *)puVar2)(uVar6);
      puVar3 = PTR__OBJC_CLASS___NSIndexSet_1002eebc8;
      uVar6 = (*(code *)puVar1)(uVar8,PTR_s_count_1002e6488);
      uVar6 = (*(code *)puVar1)(puVar3,PTR_s_indexSetWithIndexesInRange__1002e8f60,0,uVar6);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      (*(code *)puVar1)(param_1,PTR_s_insertGraphics_atIndexes__1002e8f68,uVar8,uVar6);
      (*(code *)puVar2)(uVar6);
      uVar6 = (*(code *)puVar1)(param_1,PTR_s_undoManager_1002e6bc8);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      (*(code *)puVar1)(uVar6,PTR_s_enableUndoRegistration_1002e8f70);
      puVar1 = PTR__objc_release_10027d590;
      (*(code *)PTR__objc_release_10027d590)(uVar6);
      (*(code *)puVar1)(uVar8);
    }
    (*(code *)PTR__objc_release_10027d590)(lVar7);
    cVar4 = '\x01';
  }
  (*(code *)PTR__objc_release_10027d590)(uVar5);
  return cVar4;
}



// ===== canCloseDocumentWithDelegate:shouldCloseSelector:contextInfo:  @ 0x1000421a2 =====

/* Function Stack Size: 0x28 bytes */

void Document::canCloseDocumentWithDelegate_shouldCloseSelector_contextInfo_
               (ID param_1,SEL param_2,ID param_3,SEL param_4,void *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined8 local_48;
  SEL local_40;
  void *local_38;
  
  lVar5 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  cVar4 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_isDocumentEdited_1002e8f78);
  puVar1 = PTR__objc_msgSend_10027d560;
  if (cVar4 != '\0') {
    uVar6 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_windowControllers_1002e8f80);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    lVar7 = (*(code *)puVar1)(uVar6,PTR_s_count_1002e6488);
    (*(code *)PTR__objc_release_10027d590)(uVar6);
    puVar1 = PTR__NSApp_10027d058;
    if (lVar7 != 0) {
      cVar4 = (*(code *)PTR__objc_msgSend_10027d560)
                        (*(undefined8 *)PTR__NSApp_10027d058,PTR_s_isActive_1002e6c60);
      if (cVar4 == '\0') {
        (*(code *)PTR__objc_msgSend_10027d560)
                  (*(undefined8 *)puVar1,PTR_s_activateIgnoringOtherApps__1002e68b8,1);
      }
      puVar1 = PTR__objc_msgSend_10027d560;
      uVar6 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_windowControllers_1002e8f80);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      uVar8 = (*(code *)puVar1)(uVar6,PTR_s_objectAtIndexedSubscript__1002e6400,0);
      uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
      uVar9 = (*(code *)puVar1)(uVar8,PTR_s_window_1002e6878);
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      (*(code *)puVar1)(uVar9,PTR_s_makeKeyAndOrderFront__1002e68c0,0);
      puVar2 = PTR__objc_release_10027d590;
      (*(code *)PTR__objc_release_10027d590)(uVar9);
      (*(code *)puVar2)(uVar8);
      (*(code *)puVar2)(uVar6);
      puVar1 = PTR__objc_msgSend_10027d560;
      uVar6 = (*(code *)PTR__objc_msgSend_10027d560)
                        (PTR__OBJC_CLASS___NSAlert_1002eec88,PTR_s_alloc_1002e64e8);
      uVar6 = (*(code *)puVar1)(uVar6,PTR_s_init_1002e6538);
      puVar3 = PTR_s_addButtonWithTitle__1002e7178;
      uVar8 = (*(code *)puVar1)(uVar6,PTR_s_addButtonWithTitle__1002e7178,&cf_Discard);
      uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
      (*(code *)puVar2)(uVar8);
      uVar8 = (*(code *)puVar1)(uVar6,puVar3,&cf_Cancel);
      uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
      (*(code *)puVar2)(uVar8);
      (*(code *)puVar1)(uVar6,PTR_s_setMessageText__1002e7180,&cf_Discardimage_);
      (*(code *)puVar1)(uVar6,PTR_s_setInformativeText__1002e7188,&cf_Yourchangeswillbelost_);
      (*(code *)puVar1)(uVar6,PTR_s_setAlertStyle__1002e7190,1);
      uVar8 = (*(code *)puVar1)(param_1,PTR_s_windowControllers_1002e8f80);
      uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
      uVar9 = (*(code *)puVar1)(uVar8,PTR_s_objectAtIndexedSubscript__1002e6400,0);
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      uVar10 = (*(code *)puVar1)(uVar9,PTR_s_window_1002e6878);
      uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
      puVar1 = PTR__objc_retain_10027d598;
      local_70 = PTR___NSConcreteStackBlock_10027d330;
      local_68 = 0xc2000000;
      local_64 = 0;
      local_60 = FUN_1000424d5;
      local_58 = &DAT_10027fd90;
      local_50 = (*(code *)PTR__objc_retain_10027d598)(lVar5);
      local_40 = param_4;
      local_48 = (*(code *)puVar1)(param_1);
      local_38 = param_5;
      (*(code *)PTR__objc_msgSend_10027d560)
                (uVar6,PTR_s_beginSheetModalForWindow_complet_1002e7e10,uVar10,&local_70);
      puVar1 = PTR__objc_release_10027d590;
      (*(code *)PTR__objc_release_10027d590)(uVar10);
      (*(code *)puVar1)(uVar9);
      (*(code *)puVar1)(uVar8);
      (*(code *)puVar1)(local_48);
      (*(code *)puVar1)(local_50);
      (*(code *)puVar1)(uVar6);
      goto LAB_1000424bd;
    }
  }
  if ((lVar5 != 0) && (param_4 != (SEL)0x0)) {
    pcVar11 = (code *)(*(code *)PTR__objc_msgSend_10027d560)
                                (lVar5,PTR_s_methodForSelector__1002e6e88,param_4);
    if (pcVar11 != (code *)0x0) {
      (*pcVar11)(lVar5,param_4,param_1,1,param_5);
    }
  }
LAB_1000424bd:
  (*(code *)PTR__objc_release_10027d590)(lVar5);
  return;
}



// ===== displayName  @ 0x10004258a =====

/* Function Stack Size: 0x10 bytes */

ID Document::displayName(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID IVar4;
  
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar2 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_export_1002e6c50);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  uVar3 = (*(code *)puVar1)(uVar2,PTR_s_filename_1002e74b8);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)PTR__objc_release_10027d590)(uVar2);
  IVar4 = _objc_autoreleaseReturnValue(uVar3);
  return IVar4;
}



// ===== readVideoFromURL:inputType:  @ 0x1000425da =====

/* Function Stack Size: 0x20 bytes */

void Document::readVideoFromURL_inputType_(ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 in_R8;
  undefined8 in_R9;
  code *pcVar11;
  long local_38;
  
  uVar5 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  *(undefined8 *)(param_1 + _documentType) = 1;
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar6 = (*(code *)PTR__objc_msgSend_10027d560)(PTR_Video_1002ef078,PTR_s_alloc_1002e64e8);
  uVar7 = (*(code *)puVar1)(PTR__OBJC_CLASS___AVAsset_1002ef080,PTR_s_assetWithURL__1002e8f88,uVar5)
  ;
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  uVar8 = (*(code *)puVar1)(uVar6,PTR_s_initWithAsset__1002e8f90,uVar7);
  uVar6 = *(undefined8 *)(param_1 + _video);
  *(undefined8 *)(param_1 + _video) = uVar8;
  pcVar11 = (code *)PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar6);
  (*pcVar11)(uVar7);
  uVar6 = (*(code *)puVar1)(PTR__OBJC_CLASS___AVAssetImageGenerator_1002ef088,PTR_s_alloc_1002e64e8)
  ;
  uVar7 = (*(code *)puVar1)(param_1,PTR_s_video_1002e8078);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  uVar8 = (*(code *)puVar1)(uVar7,PTR_s_asset_1002e8080);
  uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
  uVar6 = (*(code *)puVar1)(uVar6,PTR_s_initWithAsset__1002e8f90,uVar8);
  (*pcVar11)(uVar8);
  (*pcVar11)(uVar7);
  local_38 = 0;
  uVar7 = (*(code *)puVar1)(uVar6,PTR_s_copyCGImageAtTime_actualTime_err_1002e8f98,0,&local_38,in_R8
                            ,in_R9,*(undefined8 *)PTR__kCMTimeZero_10027d458,
                            *(undefined8 *)(PTR__kCMTimeZero_10027d458 + 8),
                            *(undefined8 *)(PTR__kCMTimeZero_10027d458 + 0x10));
  lVar4 = local_38;
  puVar3 = PTR_Image_1002ef090;
  if (local_38 == 0) {
    (*(code *)PTR__objc_retain_10027d598)(0);
    puVar2 = PTR_s_alloc_1002e64e8;
    uVar8 = (*(code *)puVar1)(puVar3,PTR_s_alloc_1002e64e8);
    uVar9 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSImage_1002eea70,puVar2);
    uVar10 = (*(code *)puVar1)(param_1,PTR_s_video_1002e8078);
    uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
    (*(code *)puVar1)(uVar10,PTR_s_displaySize_1002e6800);
    uVar7 = (*(code *)puVar1)(uVar9,PTR_s_initWithCGImage_size__1002e8fa0,uVar7);
    uVar8 = (*(code *)puVar1)(uVar8,PTR_s_initWithImage__1002e8fa8,uVar7);
    pcVar11 = (code *)PTR__objc_release_10027d590;
    (*(code *)puVar1)(param_1,PTR_s_setImage__1002e6448,uVar8);
    (*pcVar11)(uVar8);
    (*pcVar11)(uVar7);
    (*pcVar11)(uVar10);
  }
  else {
    uVar7 = (*(code *)PTR__objc_retain_10027d598)(local_38);
    _NSLog(&cf_Errorcreatingthumbnail__,uVar7);
  }
  (*(code *)PTR__objc_msgSend_10027d560)
            (param_1,PTR_s_commonSetupForURL_inputType__1002e8fb0,uVar5,param_4);
  (*pcVar11)(lVar4);
  (*pcVar11)(uVar6);
  (*pcVar11)(uVar5);
  return;
}



// ===== readImageFromURL:inputType:  @ 0x100042859 =====

/* Function Stack Size: 0x20 bytes */

void Document::readImageFromURL_inputType_(ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *(undefined8 *)(param_1 + _documentType) = 0;
  puVar3 = PTR_Image_1002ef090;
  puVar2 = PTR_s_alloc_1002e64e8;
  uVar4 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar5 = (*(code *)PTR__objc_msgSend_10027d560)(puVar3,puVar2);
  uVar6 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSImage_1002eea70,puVar2);
  uVar6 = (*(code *)puVar1)(uVar6,PTR_s_initWithContentsOfURL__1002e8fb8,uVar4);
  uVar5 = (*(code *)puVar1)(uVar5,PTR_s_initWithImage__1002e8fa8,uVar6);
  (*(code *)puVar1)(param_1,PTR_s_setImage__1002e6448,uVar5);
  puVar1 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar5);
  (*(code *)puVar1)(uVar6);
  (*(code *)PTR__objc_msgSend_10027d560)
            (param_1,PTR_s_commonSetupForURL_inputType__1002e8fb0,uVar4,param_4);
  (*(code *)puVar1)(uVar4);
  return;
}



// ===== commonSetupForURL:inputType:  @ 0x10004292f =====

/* Function Stack Size: 0x20 bytes */

void Document::commonSetupForURL_inputType_(ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_Export_1002eee30;
  puVar1 = PTR_s_alloc_1002e64e8;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(puVar2,puVar1);
  uVar5 = (*(code *)PTR__objc_msgSend_10027d560)(param_3,PTR_s_lastPathComponent_1002e75f8);
  (*(code *)PTR__objc_release_10027d590)(uVar3);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar5 = (*(code *)PTR__objc_msgSend_10027d560)
                    (uVar3,PTR_s_stringByDeletingPathExtension_1002e8fc0);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar4 = (*(code *)PTR__objc_msgSend_10027d560)
                    (uVar4,PTR_s_initWithDocument_filename__1002e8fc8,param_1,uVar5);
  (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_setExport__1002e8f50,uVar4);
  puVar1 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  (*(code *)puVar1)(uVar5);
  (*(code *)puVar1)(uVar3);
  (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_setInputType__1002e8020,param_4);
  return;
}



// ===== imageFileTypeFromUTIString:  @ 0x100042a19 =====

/* Function Stack Size: 0x18 bytes */

unsigned_long_long Document::imageFileTypeFromUTIString_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  unsigned_long_long uVar4;
  
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  puVar1 = PTR_s_isEqualToString__1002e6410;
  cVar2 = (*(code *)PTR__objc_msgSend_10027d560)
                    (uVar3,PTR_s_isEqualToString__1002e6410,*(undefined8 *)PTR__kUTTypePNG_10027d510
                    );
  uVar4 = 4;
  if (cVar2 == '\0') {
    cVar2 = (*(code *)PTR__objc_msgSend_10027d560)
                      (uVar3,puVar1,*(undefined8 *)PTR__kUTTypeJPEG_10027d508);
    uVar4 = (ulong)(cVar2 == '\0') + 3;
  }
  (*(code *)PTR__objc_release_10027d590)(uVar3);
  return uVar4;
}



// ===== setImage:  @ 0x100042a8d =====

/* Function Stack Size: 0x18 bytes */

void Document::setImage_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR__objc_retain_10027d598;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar1 = *(undefined8 *)(param_1 + _image);
  *(undefined8 *)(param_1 + _image) = uVar3;
  uVar3 = (*(code *)puVar2)(uVar3);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar1);
  (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_startObservingImage__1002e8fd0,uVar3);
  (*(code *)puVar2)(uVar3);
  return;
}



// ===== mutableGraphics  @ 0x100042e5e =====

/* Function Stack Size: 0x10 bytes */

ID Document::mutableGraphics(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = (*(code *)PTR__objc_msgSend_10027d560)
                    (param_1,PTR_s_mutableArrayValueForKey__1002e8fe8,&cf_graphics);
  return IVar1;
}



// ===== insertGraphics:atIndexes:  @ 0x100042e77 =====

/* Function Stack Size: 0x20 bytes */

void Document::insertGraphics_atIndexes_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR__objc_retain_10027d598;
  uVar4 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar6 = *(undefined8 *)(param_1 + _graphics);
  uVar5 = (*(code *)puVar1)(param_4);
  puVar1 = PTR__objc_msgSend_10027d560;
  (*(code *)PTR__objc_msgSend_10027d560)(uVar6,PTR_s_insertObjects_atIndexes__1002e8ff0,uVar4,uVar5)
  ;
  uVar6 = (*(code *)puVar1)(param_1,PTR_s_undoManager_1002e6bc8);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  (*(code *)puVar1)(uVar6,PTR_s_registerUndoWithTarget_selector__1002e9000,param_1,
                    PTR_s_removeGraphicsAtIndexes__1002e8ff8,param_4);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar5);
  uVar5 = (*(code *)puVar1)(param_1,PTR_s_undoManager_1002e6bc8);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  cVar3 = (*(code *)puVar1)(uVar5,PTR_s_isUndoRegistrationEnabled_1002e9008);
  (*(code *)puVar2)(uVar5);
  puVar1 = PTR__objc_msgSend_10027d560;
  if (cVar3 != '\0') {
    uVar5 = (*(code *)PTR__objc_msgSend_10027d560)
                      (param_1,PTR_s_undoGroupInsertedGraphics_1002e9010);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)puVar1)(uVar5,PTR_s_addObjectsFromArray__1002e6f30,uVar4);
    (*(code *)PTR__objc_release_10027d590)(uVar5);
  }
  (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_startObservingGraphics__1002e9018,uVar4);
  puVar1 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar6);
  (*(code *)puVar1)(uVar4);
  return;
}



// ===== removeGraphicsAtIndexes:  @ 0x100042fc3 =====

/* Function Stack Size: 0x18 bytes */

void Document::removeGraphicsAtIndexes_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_s_objectsAtIndexes__1002e6d28;
  uVar4 = *(undefined8 *)(param_1 + _graphics);
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(uVar4,puVar2,uVar3);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)puVar1)(param_1,PTR_s_stopObservingGraphics__1002e8e88,uVar4);
  uVar5 = (*(code *)puVar1)(param_1,PTR_s_undoManager_1002e6bc8);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar6 = (*(code *)puVar1)(uVar5,PTR_s_prepareWithInvocationTarget__1002e9020,param_1);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  (*(code *)PTR__objc_msgSend_10027d560)
            (uVar6,PTR_s_insertGraphics_atIndexes__1002e8f68,uVar4,uVar3);
  puVar1 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar6);
  (*(code *)puVar1)(uVar5);
  (*(code *)PTR__objc_msgSend_10027d560)
            (*(undefined8 *)(param_1 + _graphics),PTR_s_removeObjectsAtIndexes__1002e9028,uVar3);
  (*(code *)puVar1)(uVar3);
  (*(code *)puVar1)(uVar4);
  return;
}



// ===== observeUndoManagerCheckpoint:  @ 0x1000430b6 =====

/* Function Stack Size: 0x18 bytes */

void Document::observeUndoManagerCheckpoint_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__objc_msgSend_10027d560;
  (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_setUndoGroupOldPropertiesPerGrap_1002e9030,0)
  ;
  (*(code *)puVar1)(param_1,PTR_s_setUndoGroupInsertedGraphics__1002e9038,0);
  (*(code *)puVar1)(param_1,PTR_s_setCachedExportData__1002e8ee8,0);
  return;
}



// ===== undoGroupInsertedGraphics  @ 0x1000430f7 =====

/* Function Stack Size: 0x10 bytes */

ID Document::undoGroupInsertedGraphics(ID param_1,SEL param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID IVar5;
  long lVar6;
  
  lVar2 = _undoGroupInsertedGraphics;
  puVar1 = PTR__objc_msgSend_10027d560;
  lVar6 = *(long *)(param_1 + _undoGroupInsertedGraphics);
  if (lVar6 == 0) {
    uVar3 = (*(code *)PTR__objc_msgSend_10027d560)
                      (PTR__OBJC_CLASS___NSMutableSet_1002eed08,PTR_s_alloc_1002e64e8);
    uVar4 = (*(code *)puVar1)(uVar3,PTR_s_init_1002e6538);
    uVar3 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = uVar4;
    (*(code *)PTR__objc_release_10027d590)(uVar3);
    lVar6 = *(long *)(param_1 + lVar2);
  }
  IVar5 = _objc_retainAutoreleaseReturnValue(lVar6);
  return IVar5;
}



// ===== setGraphicProperties:  @ 0x10004315a =====

/* Function Stack Size: 0x18 bytes */

void Document::setGraphicProperties_(ID param_1,SEL param_2,ID param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  uVar4 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  puVar2 = PTR__objc_msgSend_10027d560;
  uVar5 = (*(code *)PTR__objc_msgSend_10027d560)(uVar4,PTR_s_keyEnumerator_1002e9040);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar6 = (*(code *)puVar2)(uVar5,PTR_s_nextObject_1002e8588);
  lVar7 = _objc_retainAutoreleasedReturnValue(uVar6);
  puVar3 = PTR__objc_release_10027d590;
  pcVar1 = (code *)PTR__objc_release_10027d590;
  while (PTR__objc_release_10027d590 = pcVar1, lVar7 != 0) {
    uVar6 = (*(code *)puVar2)(uVar4,PTR_s_objectForKey__1002e6550,lVar7);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)puVar2)(lVar7,PTR_s_setValuesForKeysWithDictionary__1002e9048,uVar6);
    (*(code *)puVar3)(uVar6);
    uVar6 = (*(code *)puVar2)(uVar5,PTR_s_nextObject_1002e8588);
    lVar8 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)puVar3)(lVar7);
    lVar7 = lVar8;
    pcVar1 = (code *)PTR__objc_release_10027d590;
  }
  (*pcVar1)(uVar5);
  (*pcVar1)(uVar4);
  return;
}



// ===== startObservingGraphics:  @ 0x10004323a =====

/* Function Stack Size: 0x18 bytes */

void Document::startObservingGraphics_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong local_1d0;
  undefined8 local_1b8;
  long lStack_1b0;
  long *local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  long lStack_170;
  long *local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined1 local_138 [128];
  undefined1 local_b8 [128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10027d368;
  uVar5 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = (long *)0x0;
  uStack_160 = 0;
  local_178 = 0;
  lStack_170 = 0;
  local_1d0 = (*(code *)PTR__objc_msgSend_10027d560)
                        (uVar5,PTR_s_countByEnumeratingWithState_obje_1002e63e0,&local_178,local_b8,
                         0x10);
  if (local_1d0 != 0) {
    lVar1 = *local_168;
    do {
      uVar9 = 0;
      do {
        if (*local_168 != lVar1) {
          _objc_enumerationMutation(uVar5);
        }
        puVar4 = PTR__objc_msgSend_10027d560;
        uVar2 = *(undefined8 *)(lStack_170 + uVar9 * 8);
        uVar6 = (*(code *)PTR__objc_msgSend_10027d560)
                          (uVar2,PTR_s_keysForValuesToObserveForUndo_1002e9050);
        uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
        local_188 = 0;
        uStack_180 = 0;
        local_198 = 0;
        uStack_190 = 0;
        local_1a8 = (long *)0x0;
        uStack_1a0 = 0;
        local_1b8 = 0;
        lStack_1b0 = 0;
        uVar7 = (*(code *)puVar4)(uVar6,PTR_s_countByEnumeratingWithState_obje_1002e63e0,&local_1b8,
                                  local_138,0x10);
        if (uVar7 != 0) {
          lVar3 = *local_1a8;
          do {
            uVar8 = 0;
            do {
              if (*local_1a8 != lVar3) {
                _objc_enumerationMutation(uVar6);
              }
              (*(code *)PTR__objc_msgSend_10027d560)
                        (uVar2,PTR_s_addObserver_forKeyPath_options_c_1002e63b0,param_1,
                         *(undefined8 *)(lStack_1b0 + uVar8 * 8),3,PTR_LOOP_1002f8aa0);
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar7);
            uVar7 = (*(code *)PTR__objc_msgSend_10027d560)
                              (uVar6,PTR_s_countByEnumeratingWithState_obje_1002e63e0,&local_1b8,
                               local_138,0x10);
          } while (uVar7 != 0);
        }
        (*(code *)PTR__objc_msgSend_10027d560)
                  (uVar2,PTR_s_addObserver_forKeyPath_options_c_1002e63b0,param_1,
                   PTR_cf_keysForValuesToObserveForUndo_1002f8ae8,3,PTR_LOOP_1002f8aa8);
        (*(code *)PTR__objc_release_10027d590)(uVar6);
        uVar9 = uVar9 + 1;
      } while (uVar9 < local_1d0);
      local_1d0 = (*(code *)PTR__objc_msgSend_10027d560)
                            (uVar5,PTR_s_countByEnumeratingWithState_obje_1002e63e0,&local_178,
                             local_b8,0x10);
    } while (local_1d0 != 0);
  }
  (*(code *)PTR__objc_release_10027d590)(uVar5);
  if (*(long *)PTR____stack_chk_guard_10027d368 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



// ===== stopObservingGraphics:  @ 0x1000434b3 =====

/* Function Stack Size: 0x18 bytes */

void Document::stopObservingGraphics_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong local_1d0;
  undefined8 local_1b8;
  long lStack_1b0;
  long *local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  long lStack_170;
  long *local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined1 local_138 [128];
  undefined1 local_b8 [128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10027d368;
  uVar5 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = (long *)0x0;
  uStack_160 = 0;
  local_178 = 0;
  lStack_170 = 0;
  local_1d0 = (*(code *)PTR__objc_msgSend_10027d560)
                        (uVar5,PTR_s_countByEnumeratingWithState_obje_1002e63e0,&local_178,local_b8,
                         0x10);
  if (local_1d0 != 0) {
    lVar1 = *local_168;
    do {
      uVar9 = 0;
      do {
        if (*local_168 != lVar1) {
          _objc_enumerationMutation(uVar5);
        }
        puVar4 = PTR__objc_msgSend_10027d560;
        uVar2 = *(undefined8 *)(lStack_170 + uVar9 * 8);
        uVar6 = (*(code *)PTR__objc_msgSend_10027d560)
                          (uVar2,PTR_s_keysForValuesToObserveForUndo_1002e9050);
        uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
        local_188 = 0;
        uStack_180 = 0;
        local_198 = 0;
        uStack_190 = 0;
        local_1a8 = (long *)0x0;
        uStack_1a0 = 0;
        local_1b8 = 0;
        lStack_1b0 = 0;
        uVar7 = (*(code *)puVar4)(uVar6,PTR_s_countByEnumeratingWithState_obje_1002e63e0,&local_1b8,
                                  local_138,0x10);
        if (uVar7 != 0) {
          lVar3 = *local_1a8;
          do {
            uVar8 = 0;
            do {
              if (*local_1a8 != lVar3) {
                _objc_enumerationMutation(uVar6);
              }
              (*(code *)PTR__objc_msgSend_10027d560)
                        (uVar2,PTR_s_removeObserver_forKeyPath__1002e9058,param_1,
                         *(undefined8 *)(lStack_1b0 + uVar8 * 8));
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar7);
            uVar7 = (*(code *)PTR__objc_msgSend_10027d560)
                              (uVar6,PTR_s_countByEnumeratingWithState_obje_1002e63e0,&local_1b8,
                               local_138,0x10);
          } while (uVar7 != 0);
        }
        (*(code *)PTR__objc_msgSend_10027d560)
                  (uVar2,PTR_s_removeObserver_forKeyPath__1002e9058,param_1,
                   PTR_cf_keysForValuesToObserveForUndo_1002f8ae8);
        (*(code *)PTR__objc_release_10027d590)(uVar6);
        uVar9 = uVar9 + 1;
      } while (uVar9 < local_1d0);
      local_1d0 = (*(code *)PTR__objc_msgSend_10027d560)
                            (uVar5,PTR_s_countByEnumeratingWithState_obje_1002e63e0,&local_178,
                             local_b8,0x10);
    } while (local_1d0 != 0);
  }
  (*(code *)PTR__objc_release_10027d590)(uVar5);
  if (*(long *)PTR____stack_chk_guard_10027d368 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



// ===== startObservingImage:  @ 0x10004370e =====

/* Function Stack Size: 0x18 bytes */

void Document::startObservingImage_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_LOOP_1002f8ab0;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  puVar1 = PTR__objc_msgSend_10027d560;
  (*(code *)PTR__objc_msgSend_10027d560)
            (param_3,PTR_s_addObserver_forKeyPath_options_c_1002e63b0,param_1,&cf_image,3,puVar2);
  (*(code *)puVar1)(param_3,PTR_s_addObserver_forKeyPath_options_c_1002e63b0,param_1,&cf_scale,3,
                    PTR_LOOP_1002f8ab0);
  (*(code *)PTR__objc_release_10027d590)(uVar3);
  return;
}



// ===== stopObservingImage:  @ 0x100043797 =====

/* Function Stack Size: 0x18 bytes */

void Document::stopObservingImage_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_LOOP_1002f8ab0;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  puVar1 = PTR__objc_msgSend_10027d560;
  (*(code *)PTR__objc_msgSend_10027d560)
            (param_3,PTR_s_removeObserver_forKeyPath_contex_1002e63b8,param_1,&cf_image,puVar2);
  (*(code *)puVar1)(param_3,PTR_s_removeObserver_forKeyPath_contex_1002e63b8,param_1,&cf_scale,
                    PTR_LOOP_1002f8ab0);
  (*(code *)PTR__objc_release_10027d590)(uVar3);
  return;
}



// ===== observeValueForKeyPath:ofObject:change:context:  @ 0x100043814 =====

/* Function Stack Size: 0x30 bytes */

void Document::observeValueForKeyPath_ofObject_change_context_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,void *param_6)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  objc_super local_40;
  
  puVar2 = PTR__objc_retain_10027d598;
  uVar6 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar7 = (*(code *)puVar2)(param_4);
  uVar8 = (*(code *)puVar2)(param_5);
  puVar4 = PTR_s_isEqualTo__1002e7028;
  puVar3 = PTR_s_objectForKey__1002e6550;
  puVar2 = PTR__objc_msgSend_10027d560;
  if (PTR_LOOP_1002f8aa8 == param_6) {
    uVar11 = (*(code *)PTR__objc_msgSend_10027d560)
                       (uVar8,PTR_s_objectForKey__1002e6550,
                        *(undefined8 *)PTR__NSKeyValueChangeOldKey_10027d180);
    uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
    uVar12 = (*(code *)puVar2)(uVar8,puVar3,*(undefined8 *)PTR__NSKeyValueChangeNewKey_10027d170);
    uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
    uVar13 = (*(code *)puVar2)(uVar11,PTR_s_objectEnumerator_1002e8580);
    uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
    uVar14 = (*(code *)puVar2)(uVar13,PTR_s_nextObject_1002e8588);
    lVar9 = _objc_retainAutoreleasedReturnValue(uVar14);
    puVar3 = PTR_s_containsObject__1002e6ea0;
    while (lVar9 != 0) {
      cVar5 = (*(code *)PTR__objc_msgSend_10027d560)(uVar12,puVar3,lVar9);
      if (cVar5 == '\0') {
        (*(code *)PTR__objc_msgSend_10027d560)
                  (uVar7,PTR_s_removeObserver_forKeyPath__1002e9058,param_1,lVar9);
      }
      uVar14 = (*(code *)PTR__objc_msgSend_10027d560)(uVar13,PTR_s_nextObject_1002e8588);
      lVar10 = _objc_retainAutoreleasedReturnValue(uVar14);
      (*(code *)PTR__objc_release_10027d590)(lVar9);
      lVar9 = lVar10;
    }
    uVar14 = (*(code *)puVar2)(uVar12,PTR_s_objectEnumerator_1002e8580);
    uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
    uVar15 = (*(code *)puVar2)(uVar14,PTR_s_nextObject_1002e8588);
    lVar9 = _objc_retainAutoreleasedReturnValue(uVar15);
    (*(code *)PTR__objc_release_10027d590)(0);
    puVar2 = PTR_s_containsObject__1002e6ea0;
    pcVar1 = (code *)PTR__objc_release_10027d590;
    while (PTR__objc_release_10027d590 = pcVar1, lVar9 != 0) {
      cVar5 = (*(code *)PTR__objc_msgSend_10027d560)(uVar11,puVar2,lVar9);
      if (cVar5 == '\0') {
        (*(code *)PTR__objc_msgSend_10027d560)
                  (uVar7,PTR_s_addObserver_forKeyPath_options_c_1002e63b0,param_1,lVar9,3,
                   PTR_LOOP_1002f8aa0);
      }
      uVar15 = (*(code *)PTR__objc_msgSend_10027d560)(uVar14,PTR_s_nextObject_1002e8588);
      lVar10 = _objc_retainAutoreleasedReturnValue(uVar15);
      (*(code *)PTR__objc_release_10027d590)(lVar9);
      lVar9 = lVar10;
      pcVar1 = (code *)PTR__objc_release_10027d590;
    }
    (*pcVar1)(uVar14);
    (*pcVar1)(uVar13);
    (*pcVar1)(uVar12);
    (*pcVar1)(uVar11);
  }
  else if (PTR_LOOP_1002f8aa0 == param_6) {
    uVar11 = (*(code *)PTR__objc_retain_10027d598)(uVar7);
    puVar2 = PTR__objc_msgSend_10027d560;
    uVar12 = (*(code *)PTR__objc_msgSend_10027d560)
                       (param_1,PTR_s_undoGroupInsertedGraphics_1002e9010);
    uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
    cVar5 = (*(code *)puVar2)(uVar12,PTR_s_containsObject__1002e6ea0,uVar11);
    (*(code *)PTR__objc_release_10027d590)(uVar12);
    puVar3 = PTR_s_objectForKey__1002e6550;
    if (cVar5 == '\0') {
      uVar12 = (*(code *)puVar2)(uVar8,PTR_s_objectForKey__1002e6550,
                                 *(undefined8 *)PTR__NSKeyValueChangeNewKey_10027d170);
      uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
      uVar13 = (*(code *)puVar2)(uVar8,puVar3,*(undefined8 *)PTR__NSKeyValueChangeOldKey_10027d180);
      uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
      cVar5 = (*(code *)puVar2)(uVar12,PTR_s_isEqualTo__1002e7028,uVar13);
      if (cVar5 == '\0') {
        uVar14 = (*(code *)PTR__objc_msgSend_10027d560)
                           (param_1,PTR_s_undoGroupOldPropertiesPerGraphic_1002e9060);
        lVar9 = _objc_retainAutoreleasedReturnValue(uVar14);
        (*(code *)PTR__objc_release_10027d590)(lVar9);
        if (lVar9 == 0) {
          uVar14 = (*(code *)puVar2)(PTR__OBJC_CLASS___NSMapTable_1002ef098,PTR_s_alloc_1002e64e8);
          uVar14 = (*(code *)puVar2)(uVar14,PTR_s_init_1002e6538);
          (*(code *)puVar2)(param_1,PTR_s_setUndoGroupOldPropertiesPerGrap_1002e9030,uVar14);
          (*(code *)PTR__objc_release_10027d590)(uVar14);
          uVar14 = (*(code *)puVar2)(param_1,PTR_s_undoManager_1002e6bc8);
          uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
          uVar15 = (*(code *)puVar2)(param_1,PTR_s_undoGroupOldPropertiesPerGraphic_1002e9060);
          uVar15 = _objc_retainAutoreleasedReturnValue(uVar15);
          (*(code *)puVar2)(uVar14,PTR_s_registerUndoWithTarget_selector__1002e9000,param_1,
                            PTR_s_setGraphicProperties__1002e9068,uVar15);
          puVar3 = PTR__objc_release_10027d590;
          (*(code *)PTR__objc_release_10027d590)(uVar15);
          (*(code *)puVar3)(uVar14);
        }
        uVar14 = (*(code *)puVar2)(param_1,PTR_s_undoGroupOldPropertiesPerGraphic_1002e9060);
        uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
        uVar15 = (*(code *)puVar2)(uVar14,PTR_s_objectForKey__1002e6550,uVar11);
        lVar9 = _objc_retainAutoreleasedReturnValue(uVar15);
        (*(code *)PTR__objc_release_10027d590)(uVar14);
        if (lVar9 == 0) {
          uVar14 = (*(code *)puVar2)(PTR__OBJC_CLASS___NSMutableDictionary_1002eecd8,
                                     PTR_s_alloc_1002e64e8);
          lVar9 = (*(code *)puVar2)(uVar14,PTR_s_init_1002e6538);
          uVar14 = (*(code *)puVar2)(param_1,PTR_s_undoGroupOldPropertiesPerGraphic_1002e9060);
          uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
          (*(code *)puVar2)(uVar14,PTR_s_setObject_forKey__1002e65b0,lVar9,uVar11);
          (*(code *)PTR__objc_release_10027d590)(uVar14);
        }
        uVar14 = (*(code *)PTR__objc_msgSend_10027d560)(lVar9,PTR_s_objectForKey__1002e6550,uVar6);
        lVar10 = _objc_retainAutoreleasedReturnValue(uVar14);
        (*(code *)PTR__objc_release_10027d590)(lVar10);
        if (lVar10 == 0) {
          (*(code *)PTR__objc_msgSend_10027d560)
                    (lVar9,PTR_s_setObject_forKey__1002e65b0,uVar13,uVar6);
        }
        (*(code *)PTR__objc_release_10027d590)(lVar9);
      }
      puVar2 = PTR__objc_release_10027d590;
      (*(code *)PTR__objc_release_10027d590)(uVar13);
      (*(code *)puVar2)(uVar12);
    }
    (*(code *)PTR__objc_release_10027d590)(uVar11);
  }
  else if (PTR_LOOP_1002f8ab0 == param_6) {
    cVar5 = (*(code *)PTR__objc_msgSend_10027d560)(uVar6,PTR_s_isEqualTo__1002e7028,&cf_image);
    puVar2 = PTR__objc_msgSend_10027d560;
    if (cVar5 == '\0') {
      cVar5 = (*(code *)PTR__objc_msgSend_10027d560)(uVar6,puVar4,&cf_scale);
      puVar2 = PTR__objc_msgSend_10027d560;
      if (cVar5 != '\0') {
        uVar11 = (*(code *)PTR__objc_msgSend_10027d560)
                           (uVar8,PTR_s_objectForKey__1002e6550,
                            *(undefined8 *)PTR__NSKeyValueChangeOldKey_10027d180);
        uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
        uVar12 = (*(code *)puVar2)(param_1,PTR_s_undoManager_1002e6bc8);
        uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
        uVar13 = (*(code *)puVar2)(param_1,PTR_s_image_1002e69f0);
        uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
        (*(code *)puVar2)(uVar12,PTR_s_registerUndoWithTarget_selector__1002e9000,uVar13,
                          PTR_s_setScale__1002e6990,uVar11);
        puVar2 = PTR__objc_release_10027d590;
        (*(code *)PTR__objc_release_10027d590)(uVar13);
        (*(code *)puVar2)(uVar12);
        (*(code *)puVar2)(uVar11);
      }
    }
    else {
      uVar11 = (*(code *)PTR__objc_msgSend_10027d560)
                         (uVar8,PTR_s_objectForKey__1002e6550,
                          *(undefined8 *)PTR__NSKeyValueChangeOldKey_10027d180);
      uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
      uVar12 = (*(code *)puVar2)(param_1,PTR_s_undoManager_1002e6bc8);
      uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
      uVar13 = (*(code *)puVar2)(param_1,PTR_s_image_1002e69f0);
      uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
      (*(code *)PTR__objc_msgSend_10027d560)
                (uVar12,PTR_s_registerUndoWithTarget_selector__1002e9000,uVar13,
                 PTR_s_setImage__1002e6448,uVar11);
      puVar2 = PTR__objc_release_10027d590;
      (*(code *)PTR__objc_release_10027d590)(uVar13);
      (*(code *)puVar2)(uVar12);
      puVar2 = PTR__objc_msgSend_10027d560;
      uVar12 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_undoManager_1002e6bc8);
      uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
      puVar3 = PTR_s_image_1002e69f0;
      uVar13 = (*(code *)puVar2)(param_1,PTR_s_image_1002e69f0);
      uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
      puVar4 = PTR__OBJC_CLASS___NSNumber_1002eeaa0;
      uVar14 = (*(code *)puVar2)(param_1,puVar3);
      uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
      cVar5 = (*(code *)puVar2)(uVar14,PTR_s_hasShadow_1002e8330);
      uVar15 = (*(code *)puVar2)(puVar4,PTR_s_numberWithBool__1002e71e8,(int)cVar5);
      uVar15 = _objc_retainAutoreleasedReturnValue(uVar15);
      (*(code *)puVar2)(uVar12,PTR_s_registerUndoWithTarget_selector__1002e9000,uVar13,
                        PTR_s_setHasShadow__1002e7248,uVar15);
      puVar2 = PTR__objc_release_10027d590;
      (*(code *)PTR__objc_release_10027d590)(uVar15);
      (*(code *)puVar2)(uVar14);
      (*(code *)puVar2)(uVar13);
      (*(code *)puVar2)(uVar12);
      (*(code *)puVar2)(uVar11);
    }
  }
  else {
    local_40.super_class = (class_t *)PTR_Document_1002ef8b8;
    local_40.receiver = param_1;
    _objc_msgSendSuper2(&local_40,PTR_s_observeValueForKeyPath_ofObject__1002e63d0,uVar6,uVar7,uVar8
                        ,param_6);
  }
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar8);
  (*(code *)puVar2)(uVar7);
  (*(code *)puVar2)(uVar6);
  return;
}



// ===== autosave  @ 0x100043f6d =====

/* Function Stack Size: 0x10 bytes */

void Document::autosave(ID param_1,SEL param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_documentType_1002e6f10);
  puVar1 = PTR__objc_msgSend_10027d560;
  if (lVar2 == 1) {
    return;
  }
  (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_updateChangeCount__1002e7cd8,0);
  (*(code *)puVar1)(param_1,PTR_s_autosaveDocumentWithDelegate_did_1002e9078,param_1,
                    PTR_s_document_didAutosave_contextInfo_1002e9070,0);
  return;
}



// ===== document:didAutosave:contextInfo:  @ 0x100043fc5 =====

/* Function Stack Size: 0x24 bytes */

void Document::document_didAutosave_contextInfo_
               (ID param_1,SEL param_2,ID param_3,char param_4,void *param_5)

{
  if (param_4 != '\0') {
    (*(code *)PTR__objc_msgSend_10027d560)(param_3,PTR_s_updateChangeCount__1002e7cd8,2);
    return;
  }
  return;
}



// ===== documentType  @ 0x100043fe8 =====

/* Function Stack Size: 0x10 bytes */

unsigned_long_long Document::documentType(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + _documentType);
}



// ===== graphics  @ 0x100043ff9 =====

/* Function Stack Size: 0x10 bytes */

ID Document::graphics(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + _graphics);
}



// ===== image  @ 0x10004400a =====

/* Function Stack Size: 0x10 bytes */

ID Document::image(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + _image);
}



// ===== video  @ 0x10004401b =====

/* Function Stack Size: 0x10 bytes */

ID Document::video(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + _video);
}



// ===== export  @ 0x10004402c =====

/* Function Stack Size: 0x10 bytes */

ID Document::export(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + _export);
}



// ===== setExport:  @ 0x10004403d =====

/* Function Stack Size: 0x18 bytes */

void Document::setExport_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = _export;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = uVar3;
  (*(code *)PTR__objc_release_10027d590)(uVar1);
  return;
}



// ===== inputType  @ 0x100044069 =====

/* Function Stack Size: 0x10 bytes */

long_long Document::inputType(ID param_1,SEL param_2)

{
  return *(long_long *)(param_1 + _inputType);
}



// ===== cachedExportData  @ 0x10004407a =====

/* Function Stack Size: 0x10 bytes */

ID Document::cachedExportData(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + _cachedExportData);
}



// ===== setCachedExportData:  @ 0x10004408b =====

/* Function Stack Size: 0x18 bytes */

void Document::setCachedExportData_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = _cachedExportData;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = uVar3;
  (*(code *)PTR__objc_release_10027d590)(uVar1);
  return;
}



// ===== isExporting  @ 0x1000440b7 =====

/* Function Stack Size: 0x10 bytes */

char Document::isExporting(ID param_1,SEL param_2)

{
  return *(char *)(param_1 + _isExporting);
}



// ===== setIsExporting:  @ 0x1000440c8 =====

/* Function Stack Size: 0x14 bytes */

void Document::setIsExporting_(ID param_1,SEL param_2,char param_3)

{
  *(char *)(param_1 + _isExporting) = param_3;
  return;
}



// ===== setUndoGroupInsertedGraphics:  @ 0x1000440d8 =====

/* Function Stack Size: 0x18 bytes */

void Document::setUndoGroupInsertedGraphics_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = _undoGroupInsertedGraphics;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = uVar3;
  (*(code *)PTR__objc_release_10027d590)(uVar1);
  return;
}



// ===== undoGroupOldPropertiesPerGraphic  @ 0x100044104 =====

/* Function Stack Size: 0x10 bytes */

ID Document::undoGroupOldPropertiesPerGraphic(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + _undoGroupOldPropertiesPerGraphic);
}



// ===== setUndoGroupOldPropertiesPerGraphic:  @ 0x100044115 =====

/* Function Stack Size: 0x18 bytes */

void Document::setUndoGroupOldPropertiesPerGraphic_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = _undoGroupOldPropertiesPerGraphic;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = uVar3;
  (*(code *)PTR__objc_release_10027d590)(uVar1);
  return;
}



// ===== .cxx_destruct  @ 0x100044141 =====

/* Function Stack Size: 0x10 bytes */

void Document::_cxx_destruct(ID param_1,SEL param_2)

{
  _objc_storeStrong(_undoGroupOldPropertiesPerGraphic + param_1,0);
  _objc_storeStrong(_undoGroupInsertedGraphics + param_1,0);
  _objc_storeStrong(_cachedExportData + param_1,0);
  _objc_storeStrong(_export + param_1,0);
  _objc_storeStrong(_video + param_1,0);
  _objc_storeStrong(_image + param_1,0);
  _objc_storeStrong(param_1 + _graphics,0);
  return;
}



// ===== dealloc  @ 0x10004463b =====

/* Function Stack Size: 0x10 bytes */

void Graphic::dealloc(ID param_1,SEL param_2)

{
  objc_super local_20;
  
  _NSLog(&cf_dealloc___,param_1);
  local_20.super_class = (class_t *)PTR_Graphic_1002ef8c0;
  local_20.receiver = param_1;
  _objc_msgSendSuper2(&local_20,PTR_s_dealloc_1002e63c0);
  return;
}



// ===== initAtPoint:inWindow:  @ 0x10004467e =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Function Stack Size: 0x28 bytes */

ID __thiscall
Graphic::initAtPoint_inWindow_(Graphic *this,ID param_1,SEL param_2,CGPoint param_3,ID param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  ID self;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  double *pdVar10;
  double *pdVar11;
  byte bVar12;
  float fVar13;
  double adStack_168 [17];
  undefined8 local_e0;
  undefined8 local_d8;
  double local_d0;
  double local_c8;
  double local_c0 [16];
  objc_super local_40;
  
  local_c8 = param_3.field1_0x8;
  local_d0 = param_3.field0_0x0;
  bVar12 = 0;
  uVar4 = (*(code *)PTR__objc_retain_10027d598)(param_2);
  local_40.super_class = (class_t *)PTR_Graphic_1002ef8c0;
  local_40.receiver = (ID)this;
  self = _objc_msgSendSuper2(&local_40,PTR_s_init_1002e6538);
  if (self != 0) {
    local_d8 = uVar4;
    _objc_storeWeak(self + __window,uVar4);
    puVar1 = PTR__objc_msgSend_10027d560;
    uVar4 = (*(code *)PTR__objc_msgSend_10027d560)
                      (PTR__OBJC_CLASS___NSUserDefaults_1002eeab0,
                       PTR_s_standardUserDefaults_1002e6570);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSUnarchiver_1002eec30;
    local_e0 = uVar5;
    uVar4 = (*(code *)puVar1)(uVar5,PTR_s_dataForKey__1002e8c58,PTR_cf_color_1002f8ac0);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar4 = (*(code *)puVar1)(puVar2,PTR_s_unarchiveObjectWithData__1002e6f00,uVar6);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar4 = *(undefined8 *)(self + _color);
    *(undefined8 *)(self + _color) = uVar7;
    puVar2 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar4);
    (*(code *)puVar2)(uVar6);
    fVar13 = (float)(*(code *)puVar1)(uVar5,PTR_s_floatForKey__1002e9090,PTR_cf_size_1002f8ac8);
    *(double *)(self + _size) = (double)fVar13;
    uVar3 = (*(code *)puVar1)(uVar5,PTR_s_boolForKey__1002e6680,PTR_cf_hasShadow_1002f8ad0);
    *(undefined1 *)(self + _hasShadow) = uVar3;
    _objc_msgSend_stret((undefined *)local_c0,self,PTR_s_handles_1002e6518);
    uVar4 = (*(code *)puVar1)(self,PTR_s_class_1002e6a28);
    puVar2 = PTR_s_numberOfHandles_1002e8488;
    lVar8 = (*(code *)puVar1)(uVar4,PTR_s_numberOfHandles_1002e8488);
    if (0 < lVar8) {
      pdVar10 = local_c0 + 1;
      lVar8 = 0;
      do {
        pdVar10[-1] = local_d0;
        *pdVar10 = local_c8;
        lVar8 = lVar8 + 1;
        uVar4 = (*(code *)puVar1)(self,PTR_s_class_1002e6a28);
        lVar9 = (*(code *)puVar1)(uVar4,puVar2);
        pdVar10 = pdVar10 + 2;
      } while (lVar8 < lVar9);
    }
    pdVar10 = local_c0;
    pdVar11 = adStack_168;
    for (lVar8 = 0x10; lVar8 != 0; lVar8 = lVar8 + -1) {
      *pdVar11 = *pdVar10;
      pdVar10 = pdVar10 + (ulong)bVar12 * -2 + 1;
      pdVar11 = pdVar11 + (ulong)bVar12 * -2 + 1;
    }
    (*(code *)PTR__objc_msgSend_10027d560)(self,PTR_s_setHandles__1002e8480);
    (*(code *)PTR__objc_release_10027d590)(local_e0);
    uVar4 = local_d8;
  }
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  return self;
}



// ===== encodeWithCoder:  @ 0x1000448a4 =====

/* Function Stack Size: 0x18 bytes */

void Graphic::encodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  double dVar11;
  undefined8 local_b8 [16];
  undefined1 local_38 [8];
  
  uVar5 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  puVar2 = PTR__OBJC_CLASS___NSArchiver_1002ef0a0;
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar6 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_color_1002e84d0);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  uVar7 = (*(code *)puVar1)(puVar2,PTR_s_archivedDataWithRootObject__1002e8010,uVar6);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  (*(code *)puVar1)(uVar5,PTR_s_encodeObject_forKey__1002e72f0,uVar7,PTR_cf_color_1002f8ac0);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar7);
  (*(code *)puVar2)(uVar6);
  dVar11 = (double)(*(code *)puVar1)(param_1,PTR_s_size_1002e66a8);
  (*(code *)puVar1)((float)dVar11,uVar5,PTR_s_encodeFloat_forKey__1002e8338,PTR_cf_size_1002f8ac8);
  cVar4 = (*(code *)puVar1)(param_1,PTR_s_hasShadow_1002e8330);
  (*(code *)puVar1)(uVar5,PTR_s_encodeBool_forKey__1002e6690,(int)cVar4,PTR_cf_hasShadow_1002f8ad0);
  uVar6 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSArray_1002eeaa8,
                            PTR_s_arrayWithObjects_count__1002e6568,local_38,0);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  uVar7 = (*(code *)puVar1)(uVar6,PTR_s_mutableCopy_1002e6730);
  (*(code *)puVar2)(uVar6);
  uVar6 = (*(code *)puVar1)(param_1,PTR_s_class_1002e6a28);
  lVar8 = (*(code *)puVar1)(uVar6,PTR_s_numberOfHandles_1002e8488);
  if (0 < lVar8) {
    puVar10 = local_b8 + 1;
    lVar8 = 0;
    do {
      _objc_msgSend_stret((undefined *)local_b8,param_1,PTR_s_handles_1002e6518);
      uVar6 = (*(code *)puVar1)(puVar10[-1],*puVar10,PTR__OBJC_CLASS___NSValue_1002eeaf0,
                                PTR_s_valueWithPoint__1002e84b8);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      (*(code *)puVar1)(uVar7,PTR_s_addObject__1002e6750,uVar6);
      puVar2 = PTR_s_class_1002e6a28;
      (*(code *)PTR__objc_release_10027d590)(uVar6);
      puVar3 = PTR_s_numberOfHandles_1002e8488;
      lVar8 = lVar8 + 1;
      uVar6 = (*(code *)puVar1)(param_1,puVar2);
      lVar9 = (*(code *)puVar1)(uVar6,puVar3);
      puVar10 = puVar10 + 2;
    } while (lVar8 < lVar9);
  }
  (*(code *)PTR__objc_msgSend_10027d560)
            (uVar5,PTR_s_encodeObject_forKey__1002e72f0,uVar7,PTR_cf_handles_1002f8ab8);
  puVar1 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar7);
  (*(code *)puVar1)(uVar5);
  return;
}



// ===== initWithCoder:  @ 0x100044adc =====

/* Function Stack Size: 0x18 bytes */

ID Graphic::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  ID self;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  byte bVar13;
  float fVar14;
  undefined8 in_XMM1_Qa;
  undefined8 auStack_158 [16];
  undefined8 local_d8;
  ID local_d0;
  undefined8 local_c8;
  undefined8 local_c0 [16];
  objc_super local_40;
  
  bVar13 = 0;
  uVar4 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  local_40.super_class = (class_t *)PTR_Graphic_1002ef8c0;
  local_40.receiver = param_1;
  self = _objc_msgSendSuper2(&local_40,PTR_s_init_1002e6538);
  puVar1 = PTR__objc_msgSend_10027d560;
  if (self != 0) {
    fVar14 = (float)(*(code *)PTR__objc_msgSend_10027d560)
                              (uVar4,PTR_s_decodeFloatForKey__1002e8340,PTR_cf_size_1002f8ac8);
    *(double *)(self + _size) = (double)fVar14;
    uVar3 = (*(code *)puVar1)(uVar4,PTR_s_decodeBoolForKey__1002e66a0,PTR_cf_hasShadow_1002f8ad0);
    *(undefined1 *)(self + _hasShadow) = uVar3;
    puVar2 = PTR__OBJC_CLASS___NSUnarchiver_1002eec30;
    local_d8 = uVar4;
    uVar4 = (*(code *)puVar1)(uVar4,PTR_s_decodeObjectForKey__1002e7308,PTR_cf_color_1002f8ac0);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar4 = (*(code *)puVar1)(puVar2,PTR_s_unarchiveObjectWithData__1002e6f00,uVar5);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar4 = *(undefined8 *)(self + _color);
    *(undefined8 *)(self + _color) = uVar6;
    puVar2 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar4);
    (*(code *)puVar2)(uVar5);
    puVar9 = local_c0;
    _objc_msgSend_stret((undefined *)puVar9,self,PTR_s_handles_1002e6518);
    puVar2 = PTR_s_class_1002e6a28;
    uVar4 = (*(code *)puVar1)(self,PTR_s_class_1002e6a28);
    lVar7 = (*(code *)puVar1)(uVar4,PTR_s_numberOfHandles_1002e8488);
    lVar12 = 0;
    if (0 < lVar7) {
      local_c8 = *(undefined8 *)PTR__NSZeroPoint_10027d308;
      local_d0 = *(ID *)(PTR__NSZeroPoint_10027d308 + 8);
      do {
        puVar9[1] = local_d0;
        *puVar9 = local_c8;
        lVar12 = lVar12 + 1;
        uVar4 = (*(code *)puVar1)(self,puVar2);
        lVar7 = (*(code *)puVar1)(uVar4,PTR_s_numberOfHandles_1002e8488);
        puVar9 = puVar9 + 2;
      } while (lVar12 < lVar7);
    }
    local_d0 = self;
    uVar4 = (*(code *)puVar1)(local_d8,PTR_s_decodeObjectForKey__1002e7308,PTR_cf_handles_1002f8ab8)
    ;
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    puVar2 = PTR_s_count_1002e6488;
    local_c8 = uVar4;
    lVar7 = (*(code *)puVar1)(uVar4,PTR_s_count_1002e6488);
    if (lVar7 != 0) {
      puVar9 = local_c0 + 1;
      uVar11 = 0;
      do {
        uVar4 = (*(code *)puVar1)(uVar4,PTR_s_objectAtIndexedSubscript__1002e6400,uVar11);
        uVar5 = _objc_retainAutoreleasedReturnValue(uVar4);
        uVar6 = (*(code *)puVar1)(uVar5,PTR_s_pointValue_1002e84c8);
        uVar4 = local_c8;
        puVar9[-1] = uVar6;
        *puVar9 = in_XMM1_Qa;
        (*(code *)PTR__objc_release_10027d590)(uVar5);
        uVar11 = uVar11 + 1;
        uVar8 = (*(code *)puVar1)(uVar4,puVar2);
        puVar9 = puVar9 + 2;
      } while (uVar11 < uVar8);
    }
    puVar9 = local_c0;
    puVar10 = auStack_158;
    for (lVar7 = 0x10; self = local_d0, lVar7 != 0; lVar7 = lVar7 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + (ulong)bVar13 * -2 + 1;
      puVar10 = puVar10 + (ulong)bVar13 * -2 + 1;
    }
    (*(code *)PTR__objc_msgSend_10027d560)(local_d0,PTR_s_setHandles__1002e8480);
    (*(code *)PTR__objc_release_10027d590)(uVar4);
    uVar4 = local_d8;
  }
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  return self;
}



// ===== cursorForHandle:  @ 0x100044e3e =====

/* Function Stack Size: 0x18 bytes */

ID Graphic::cursorForHandle_(ID param_1,SEL param_2,long_long param_3)

{
  (*(code *)PTR__objc_msgSend_10027d560)
            (PTR__OBJC_CLASS___NSException_1002eed20,PTR_s_raise_format__1002e7698,
             *(undefined8 *)PTR__NSInternalInconsistencyException_10027d160,
             &cf__cursorForHandlehasnotbeenoverridden_);
  return 0;
}



// ===== zIndex  @ 0x100044e6d =====

/* Function Stack Size: 0x10 bytes */

long_long Graphic::zIndex(ID param_1,SEL param_2)

{
  (*(code *)PTR__objc_msgSend_10027d560)
            (PTR__OBJC_CLASS___NSException_1002eed20,PTR_s_raise_format__1002e7698,
             *(undefined8 *)PTR__NSInternalInconsistencyException_10027d160,
             &cf__zIndexhasnotbeenoverridden_);
  return 0;
}



// ===== scaleTo:  @ 0x100044e9c =====

/* Function Stack Size: 0x18 bytes */

void Graphic::scaleTo_(ID param_1,SEL param_2,double param_3)

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



// ===== resizeByMovingHandle:withDelta:toLocation:  @ 0x100044f9f =====

/* Function Stack Size: 0x38 bytes */

long_long Graphic::resizeByMovingHandle_withDelta_toLocation_
                    (ID param_1,SEL param_2,long_long param_3,CGPoint param_4,CGPoint param_5)

{
  (*(code *)PTR__objc_msgSend_10027d560)
            (param_4.field0_0x0,param_4.field1_0x8,param_5.field0_0x0,param_5.field1_0x8,
             PTR__OBJC_CLASS___NSException_1002eed20,PTR_s_raise_format__1002e7698,
             *(undefined8 *)PTR__NSInternalInconsistencyException_10027d160,
             &cf__resizeByMovingHandle_hasnotbeenoverridden_);
  return 0;
}



// ===== translateWithDelta:toLocation:  @ 0x100044fce =====

/* Function Stack Size: 0x30 bytes */

void Graphic::translateWithDelta_toLocation_(ID param_1,SEL param_2,CGPoint param_3,CGPoint param_4)

{
  (*(code *)PTR__objc_msgSend_10027d560)
            (param_3.field0_0x0,param_3.field1_0x8,param_4.field0_0x0,param_4.field1_0x8,
             PTR__OBJC_CLASS___NSException_1002eed20,PTR_s_raise_format__1002e7698,
             *(undefined8 *)PTR__NSInternalInconsistencyException_10027d160,
             &cf__translateWithDelta_hasnotbeenoverridden_);
  return;
}



// ===== keyPathsForSettableValues  @ 0x100044ffa =====

/* Function Stack Size: 0x10 bytes */

ID Graphic::keyPathsForSettableValues(ID param_1,SEL param_2)

{
  (*(code *)PTR__objc_msgSend_10027d560)
            (PTR__OBJC_CLASS___NSException_1002eed20,PTR_s_raise_format__1002e7698,
             *(undefined8 *)PTR__NSInternalInconsistencyException_10027d160,
             &cf__keyPathsForSettableValueshasnotbeenoverridden_);
  return 0;
}



// ===== drawingBounds  @ 0x100045087 =====

/* Function Stack Size: 0x10 bytes */

CGRect * Graphic::drawingBounds(CGRect *__return_storage_ptr__,ID param_1,SEL param_2)

{
  double dVar1;
  undefined *puVar2;
  
  (*(code *)PTR__objc_msgSend_10027d560)
            (PTR__OBJC_CLASS___NSException_1002eed20,PTR_s_raise_format__1002e7698,
             *(undefined8 *)PTR__NSInternalInconsistencyException_10027d160,
             &cf__drawingBoundshasnotbeenoverridden_);
  puVar2 = PTR__NSZeroRect_10027d310;
  (__return_storage_ptr__->field1_0x10).field1_0x8 = *(double *)(PTR__NSZeroRect_10027d310 + 0x18);
  (__return_storage_ptr__->field1_0x10).field0_0x0 = *(double *)(puVar2 + 0x10);
  dVar1 = *(double *)puVar2;
  (__return_storage_ptr__->field0_0x0).field1_0x8 = *(double *)(puVar2 + 8);
  (__return_storage_ptr__->field0_0x0).field0_0x0 = dVar1;
  return __return_storage_ptr__;
}



// ===== drawContentsInView:isBeingCreated:isBeingEdited:  @ 0x1000450e6 =====

/* Function Stack Size: 0x20 bytes */

void Graphic::drawContentsInView_isBeingCreated_isBeingEdited_
               (ID param_1,SEL param_2,ID param_3,char param_4,char param_5)

{
  (*(code *)PTR__objc_msgSend_10027d560)
            (PTR__OBJC_CLASS___NSException_1002eed20,PTR_s_raise_format__1002e7698,
             *(undefined8 *)PTR__NSInternalInconsistencyException_10027d160,
             &cf__drawContentsInViewhasnotbeenoverridden_);
  return;
}



// ===== drawSelectionInView:  @ 0x100045112 =====

/* Function Stack Size: 0x18 bytes */

void Graphic::drawSelectionInView_(ID param_1,SEL param_2,ID param_3)

{
  (*(code *)PTR__objc_msgSend_10027d560)
            (PTR__OBJC_CLASS___NSException_1002eed20,PTR_s_raise_format__1002e7698,
             *(undefined8 *)PTR__NSInternalInconsistencyException_10027d160,
             &cf__drawSelectionInViewhasnotbeenoverridden_);
  return;
}



// ===== isContentsUnderPoint:  @ 0x10004513e =====

/* Function Stack Size: 0x20 bytes */

char Graphic::isContentsUnderPoint_(ID param_1,SEL param_2,CGPoint param_3)

{
  (*(code *)PTR__objc_msgSend_10027d560)
            (param_3.field0_0x0,param_3.field1_0x8,PTR__OBJC_CLASS___NSException_1002eed20,
             PTR_s_raise_format__1002e7698,
             *(undefined8 *)PTR__NSInternalInconsistencyException_10027d160,
             &cf__isContentsUnderPointhasnotbeenoverridden_);
  return '\0';
}



// ===== isContentsInRect:  @ 0x10004516d =====

/* Function Stack Size: 0x30 bytes */

char Graphic::isContentsInRect_(ID param_1,SEL param_2,CGRect param_3)

{
  (*(code *)PTR__objc_msgSend_10027d560)
            (PTR__OBJC_CLASS___NSException_1002eed20,PTR_s_raise_format__1002e7698,
             *(undefined8 *)PTR__NSInternalInconsistencyException_10027d160,
             &cf__isContentsInRecthasnotbeenoverridden_);
  return '\0';
}



// ===== keysForValuesToObserveForUndo  @ 0x10004519c =====

/* Function Stack Size: 0x10 bytes */

ID Graphic::keysForValuesToObserveForUndo(ID param_1,SEL param_2)

{
  (*(code *)PTR__objc_msgSend_10027d560)
            (PTR__OBJC_CLASS___NSException_1002eed20,PTR_s_raise_format__1002e7698,
             *(undefined8 *)PTR__NSInternalInconsistencyException_10027d160,
             &cf__keysForValuesToObserveForUndohasnotbeenoverridden_);
  return 0;
}



// ===== windowController  @ 0x1000451cb =====

/* Function Stack Size: 0x10 bytes */

ID Graphic::windowController(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID IVar4;
  
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar2 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_window_1002e6878);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  uVar3 = (*(code *)puVar1)(uVar2,PTR_s_windowController_1002e7378);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)PTR__objc_release_10027d590)(uVar2);
  IVar4 = _objc_autoreleaseReturnValue(uVar3);
  return IVar4;
}



// ===== document  @ 0x10004521b =====

/* Function Stack Size: 0x10 bytes */

ID Graphic::document(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID IVar4;
  
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar2 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_windowController_1002e7378);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  uVar3 = (*(code *)puVar1)(uVar2,PTR_s_document_1002e69e8);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)PTR__objc_release_10027d590)(uVar2);
  IVar4 = _objc_autoreleaseReturnValue(uVar3);
  return IVar4;
}



// ===== canvasView  @ 0x10004526b =====

/* Function Stack Size: 0x10 bytes */

ID Graphic::canvasView(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID IVar4;
  
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar2 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_windowController_1002e7378);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  uVar3 = (*(code *)puVar1)(uVar2,PTR_s_canvasView_1002e6c08);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)PTR__objc_release_10027d590)(uVar2);
  IVar4 = _objc_autoreleaseReturnValue(uVar3);
  return IVar4;
}



// ===== handles  @ 0x1000452bb =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Function Stack Size: 0x10 bytes */

AnonymousStructure3 *
Graphic::handles(AnonymousStructure3 *__return_storage_ptr__,ID param_1,SEL param_2)

{
  _objc_copyStruct(__return_storage_ptr__,param_1 + __handles,0x80,1,0);
  return __return_storage_ptr__;
}



// ===== setHandles:  @ 0x1000452e7 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Function Stack Size: 0x90 bytes */

void Graphic::setHandles_(ID param_1,SEL param_2,AnonymousStructure3 param_3)

{
  _objc_copyStruct(param_1 + __handles,&param_3,0x80,1,0);
  return;
}



// ===== window  @ 0x10004530a =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Function Stack Size: 0x10 bytes */

ID Graphic::window(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  
  uVar1 = _objc_loadWeakRetained(param_1 + __window);
  IVar2 = _objc_autoreleaseReturnValue(uVar1);
  return IVar2;
}



// ===== setWindow:  @ 0x100045323 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Function Stack Size: 0x18 bytes */

void Graphic::setWindow_(ID param_1,SEL param_2,ID param_3)

{
  _objc_storeWeak(param_1 + __window,param_3);
  return;
}



// ===== color  @ 0x100045337 =====

/* Function Stack Size: 0x10 bytes */

ID Graphic::color(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + _color);
}



// ===== setColor:  @ 0x100045348 =====

/* Function Stack Size: 0x18 bytes */

void Graphic::setColor_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = _color;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = uVar3;
  (*(code *)PTR__objc_release_10027d590)(uVar1);
  return;
}



// ===== size  @ 0x100045374 =====

/* Function Stack Size: 0x10 bytes */

double Graphic::size(ID param_1,SEL param_2)

{
  return *(double *)(param_1 + _size);
}



// ===== setSize:  @ 0x100045386 =====

/* Function Stack Size: 0x18 bytes */

void Graphic::setSize_(ID param_1,SEL param_2,double param_3)

{
  *(double *)(param_1 + _size) = param_3;
  return;
}



// ===== hasShadow  @ 0x100045398 =====

/* Function Stack Size: 0x10 bytes */

char Graphic::hasShadow(ID param_1,SEL param_2)

{
  return *(char *)(param_1 + _hasShadow);
}



// ===== setHasShadow:  @ 0x1000453a9 =====

/* Function Stack Size: 0x14 bytes */

void Graphic::setHasShadow_(ID param_1,SEL param_2,char param_3)

{
  *(char *)(param_1 + _hasShadow) = param_3;
  return;
}



// ===== didGetCreated  @ 0x1000453b9 =====

/* Function Stack Size: 0x10 bytes */

char Graphic::didGetCreated(ID param_1,SEL param_2)

{
  return *(char *)(param_1 + _didGetCreated);
}



// ===== setDidGetCreated:  @ 0x1000453ca =====

/* Function Stack Size: 0x14 bytes */

void Graphic::setDidGetCreated_(ID param_1,SEL param_2,char param_3)

{
  *(char *)(param_1 + _didGetCreated) = param_3;
  return;
}



// ===== .cxx_destruct  @ 0x1000453da =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Function Stack Size: 0x10 bytes */

void Graphic::_cxx_destruct(ID param_1,SEL param_2)

{
  _objc_storeStrong(_color + param_1,0);
  _objc_destroyWeak(param_1 + __window);
  return;
}



// ===== loadView  @ 0x100046128 =====

/* Function Stack Size: 0x10 bytes */

void CanvasViewController::loadView(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ID self;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(PTR_ScrollView_1002ef0b8,PTR_s_alloc_1002e64e8);
  uVar4 = (*(code *)puVar1)(uVar4,PTR_s_initWithFrame__1002e6930);
  (*(code *)puVar1)(param_1,PTR_s_setScrollView__1002e90f0,uVar4);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  uVar4 = (*(code *)puVar1)(PTR_CanvasView_1002ef068,PTR_s_alloc_1002e64e8);
  uVar4 = (*(code *)puVar1)(uVar4,PTR_s_initWithFrame__1002e6930);
  (*(code *)puVar1)(param_1,PTR_s_setCanvasView__1002e90f8,uVar4);
  (*(code *)puVar2)(uVar4);
  uVar4 = (*(code *)puVar1)(param_1,PTR_s_canvasView_1002e6c08);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)puVar1)(uVar4,PTR_s_setAutoresizingMask__1002e6fb8,0x12);
  (*(code *)puVar2)(uVar4);
  uVar4 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSView_1002eec08,PTR_s_alloc_1002e64e8);
  uVar4 = (*(code *)puVar1)(uVar4,PTR_s_initWithFrame__1002e6930);
  (*(code *)puVar1)(param_1,PTR_s_setContainerDocumentView__1002e9100,uVar4);
  (*(code *)puVar2)(uVar4);
  puVar3 = PTR_s_containerDocumentView_1002e9108;
  uVar4 = (*(code *)puVar1)(param_1,PTR_s_containerDocumentView_1002e9108);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)puVar1)(uVar4,PTR_s_setWantsLayer__1002e7260,1);
  (*(code *)puVar2)(uVar4);
  uVar4 = (*(code *)puVar1)(param_1,puVar3);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)puVar1)(param_1,PTR_s_canvasView_1002e6c08);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)puVar1)(uVar4,PTR_s_addSubview__1002e6920,uVar5);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar5);
  (*(code *)puVar2)(uVar4);
  puVar3 = PTR_s_scrollView_1002e9110;
  uVar4 = (*(code *)puVar1)(param_1,PTR_s_scrollView_1002e9110);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)puVar1)(param_1,PTR_s_containerDocumentView_1002e9108);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)puVar1)(uVar4,PTR_s_setDocumentView__1002e9118,uVar5);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar5);
  (*(code *)puVar2)(uVar4);
  uVar4 = (*(code *)puVar1)(param_1,puVar3);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)puVar1)(param_1,PTR_s_setView__1002e6dd8,uVar4);
  (*(code *)puVar2)(uVar4);
  uVar4 = (*(code *)puVar1)(param_1,puVar3);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)puVar1)(param_1,puVar3);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar6 = (*(code *)puVar1)(uVar5,PTR_s_superview_1002e6df8);
  self = _objc_retainAutoreleasedReturnValue(uVar6);
  if (self == 0) {
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_58,self,PTR_s_frame_1002e64b0);
  }
  (*(code *)puVar1)(uVar4,PTR_s_setFrame__1002e6500);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(self);
  (*(code *)puVar2)(uVar5);
  (*(code *)puVar2)(uVar4);
  uVar4 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSNotificationCenter_1002eead0,
                            PTR_s_defaultCenter_1002e65d0);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  puVar3 = PTR_s_addObserver_selector_name_object_1002e69a0;
  (*(code *)puVar1)(uVar4,PTR_s_addObserver_selector_name_object_1002e69a0,param_1,
                    PTR_s_createCenteredEmojiTextWithStrin_1002e9120,
                    PTR_cf_CreateEmojiTextNotification_1002f8fe8,0);
  (*(code *)puVar2)(uVar4);
  uVar4 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSNotificationCenter_1002eead0,
                            PTR_s_defaultCenter_1002e65d0);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)puVar1)(uVar4,puVar3,param_1,PTR_s_currentToolChangedNotification__1002e9128,
                    PTR_cf_kCurrentToolChangedNotification_1002f8520,0);
  (*(code *)puVar2)(uVar4);
  uVar4 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSNotificationCenter_1002eead0,
                            PTR_s_defaultCenter_1002e65d0);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)puVar1)(uVar4,puVar3,param_1,PTR_s_selectionIndexesChangedNotificat_1002e9130,
                    PTR_cf_kSelectionIndexesChangedNotification_1002f8538,0);
  (*(code *)puVar2)(uVar4);
  return;
}



// ===== dealloc  @ 0x10004652e =====

/* Function Stack Size: 0x10 bytes */

void CanvasViewController::dealloc(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  objc_super local_30;
  
  _NSLog(&cf_dealloc___,param_1);
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar2 = (*(code *)PTR__objc_msgSend_10027d560)
                    (PTR__OBJC_CLASS___NSNotificationCenter_1002eead0,PTR_s_defaultCenter_1002e65d0)
  ;
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)puVar1)(uVar2,PTR_s_removeObserver__1002e69b0,param_1);
  (*(code *)PTR__objc_release_10027d590)(uVar2);
  (*(code *)puVar1)(param_1,PTR_s_stopEditingText_1002e9138);
  (*(code *)puVar1)(param_1,PTR_s_stopCrop_1002e9140);
  local_30.super_class = (class_t *)PTR_CanvasViewController_1002ef8d0;
  local_30.receiver = param_1;
  _objc_msgSendSuper2(&local_30,PTR_s_dealloc_1002e63c0);
  return;
}



// ===== setDocument:  @ 0x1000465cf =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Function Stack Size: 0x18 bytes */

void CanvasViewController::setDocument_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  ID self;
  code *pcVar10;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  ID local_38;
  
  lVar4 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  puVar2 = PTR_s_document_1002e69e8;
  puVar1 = PTR__objc_msgSend_10027d560;
  if (lVar4 == 0) {
    uVar5 = (*(code *)PTR__objc_msgSend_10027d560)(param_1);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)puVar1)(uVar5,PTR_s_removeObserver_forKeyPath_contex_1002e63b8,param_1,&cf_graphics,
                      PTR_LOOP_1002f8ba0);
    puVar3 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar5);
    uVar5 = (*(code *)puVar1)(param_1,puVar2);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    uVar6 = (*(code *)puVar1)(uVar5,PTR_s_image_1002e69f0);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)puVar1)(uVar6,PTR_s_removeObserver_forKeyPath_contex_1002e63b8,param_1,&cf_scale,
                      PTR_LOOP_1002f8ba8);
    (*(code *)puVar3)(uVar6);
    (*(code *)puVar3)(uVar5);
    uVar5 = (*(code *)puVar1)(param_1,PTR_s_document_1002e69e8);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    uVar6 = (*(code *)puVar1)(uVar5,PTR_s_graphics_1002e6d18);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)puVar1)(param_1,PTR_s_stopObservingGraphics__1002e8e88,uVar6);
    puVar1 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar6);
    (*(code *)puVar1)(uVar5);
  }
  else {
    uVar5 = (*(code *)PTR__objc_msgSend_10027d560)(lVar4,PTR_s_graphics_1002e6d18);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    local_58 = PTR___NSConcreteStackBlock_10027d330;
    local_50 = 0xc2000000;
    local_4c = 0;
    local_48 = FUN_100046d9a;
    local_40 = &DAT_10027fdf0;
    param_1 = (*(code *)PTR__objc_retain_10027d598)(param_1);
    local_38 = param_1;
    (*(code *)puVar1)(uVar5,PTR_s_enumerateObjectsUsingBlock__1002e6d78,&local_58);
    puVar2 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar5);
    uVar5 = (*(code *)puVar1)(param_1,PTR_s_canvasView_1002e6c08);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    uVar6 = (*(code *)puVar1)(lVar4,PTR_s_graphics_1002e6d18);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)puVar1)(uVar5,PTR_s_setGraphics__1002e9148,uVar6);
    (*(code *)puVar2)(uVar6);
    (*(code *)puVar2)(uVar5);
    puVar3 = PTR_s_image_1002e69f0;
    uVar5 = (*(code *)puVar1)(lVar4);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    uVar6 = (*(code *)puVar1)(uVar5,puVar3);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    local_68 = (*(code *)puVar1)(uVar6,PTR_s_size_1002e66a8);
    local_78 = *(undefined4 *)PTR__NSZeroPoint_10027d308;
    uStack_74 = *(undefined4 *)(PTR__NSZeroPoint_10027d308 + 4);
    uStack_70 = *(undefined4 *)(PTR__NSZeroPoint_10027d308 + 8);
    uStack_6c = *(undefined4 *)(PTR__NSZeroPoint_10027d308 + 0xc);
    (*(code *)puVar2)(uVar6);
    (*(code *)puVar2)(uVar5);
    uVar5 = (*(code *)puVar1)(param_1,PTR_s_containerDocumentView_1002e9108);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)puVar1)(uVar5,PTR_s_setFrame__1002e6500);
    (*(code *)puVar2)(uVar5);
    uVar5 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSImageView_1002eeb60,PTR_s_alloc_1002e64e8);
    uVar5 = (*(code *)puVar1)(uVar5,PTR_s_initWithFrame__1002e6930);
    (*(code *)puVar1)(param_1,PTR_s_setImageView__1002e7578,uVar5);
    (*(code *)puVar2)(uVar5);
    uVar5 = (*(code *)puVar1)(param_1,PTR_s_imageView_1002e6438);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    puVar2 = PTR_s_image_1002e69f0;
    uVar6 = (*(code *)puVar1)(lVar4,PTR_s_image_1002e69f0);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    uVar7 = (*(code *)puVar1)(uVar6,puVar2);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    (*(code *)puVar1)(uVar5,PTR_s_setImage__1002e6448,uVar7);
    pcVar10 = (code *)PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar7);
    (*pcVar10)(uVar6);
    (*pcVar10)(uVar5);
    puVar2 = PTR_s_imageView_1002e6438;
    puVar1 = PTR__objc_msgSend_10027d560;
    uVar5 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_imageView_1002e6438);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)puVar1)(uVar5,PTR_s_setAutoresizingMask__1002e6fb8,0x12);
    (*pcVar10)(uVar5);
    uVar5 = (*(code *)puVar1)(param_1,PTR_s_containerDocumentView_1002e9108);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    uVar6 = (*(code *)puVar1)(param_1,puVar2);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    uVar7 = (*(code *)puVar1)(param_1,PTR_s_canvasView_1002e6c08);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    (*(code *)puVar1)(uVar5,PTR_s_addSubview_positioned_relativeTo_1002e9150,uVar6,
                      0xffffffffffffffff,uVar7);
    (*pcVar10)(uVar7);
    (*pcVar10)(uVar6);
    (*pcVar10)(uVar5);
    lVar8 = (*(code *)puVar1)(lVar4,PTR_s_documentType_1002e6f10);
    if (lVar8 == 1) {
      uVar5 = (*(code *)puVar1)(param_1,PTR_s_videoPlayerForDocument__1002e9158,lVar4);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      (*(code *)puVar1)(param_1,PTR_s_setVideoPlayer__1002e9160,uVar5);
      (*pcVar10)(uVar5);
      uVar5 = (*(code *)puVar1)(param_1,PTR_s_videoPlayer_1002e7f28);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      uVar6 = (*(code *)puVar1)(lVar4,PTR_s_video_1002e8078);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      uVar7 = (*(code *)puVar1)(param_1,PTR_s_videoViewWithPlayer_video__1002e9168,uVar5,uVar6);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      (*(code *)puVar1)(param_1,PTR_s_setVideoView__1002e9170,uVar7);
      (*(code *)PTR__objc_release_10027d590)(uVar7);
      (*(code *)PTR__objc_release_10027d590)(uVar6);
      (*(code *)PTR__objc_release_10027d590)(uVar5);
      puVar2 = PTR_s_videoView_1002e9178;
      uVar5 = (*(code *)puVar1)(param_1,PTR_s_videoView_1002e9178);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      (*(code *)puVar1)(uVar5,PTR_s_setAutoresizingMask__1002e6fb8,0x12);
      (*(code *)PTR__objc_release_10027d590)(uVar5);
      uVar5 = (*(code *)puVar1)(param_1,PTR_s_containerDocumentView_1002e9108);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      uVar6 = (*(code *)puVar1)(param_1,puVar2);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      uVar7 = (*(code *)puVar1)(param_1,PTR_s_canvasView_1002e6c08);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      (*(code *)puVar1)(uVar5,PTR_s_addSubview_positioned_relativeTo_1002e9150,uVar6,
                        0xffffffffffffffff,uVar7);
      (*(code *)PTR__objc_release_10027d590)(uVar7);
      (*(code *)PTR__objc_release_10027d590)(uVar6);
      pcVar10 = (code *)PTR__objc_release_10027d590;
      (*(code *)PTR__objc_release_10027d590)(uVar5);
    }
    puVar2 = PTR_s_addObserver_forKeyPath_options_c_1002e63b0;
    (*(code *)puVar1)(lVar4,PTR_s_addObserver_forKeyPath_options_c_1002e63b0,param_1,&cf_graphics,7,
                      PTR_LOOP_1002f8ba0);
    uVar5 = (*(code *)puVar1)(lVar4,PTR_s_image_1002e69f0);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)puVar1)(uVar5,puVar2,param_1,&cf_scale,1,PTR_LOOP_1002f8ba8);
    (*pcVar10)(uVar5);
    uVar5 = (*(code *)puVar1)(param_1,PTR_s_windowController_1002e7378);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    uVar6 = (*(code *)puVar1)(uVar5,PTR_s_window_1002e6878);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    uVar7 = (*(code *)puVar1)(param_1,PTR_s_canvasView_1002e6c08);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    (*(code *)puVar1)(uVar6,PTR_s_makeFirstResponder__1002e6e58,uVar7);
    (*pcVar10)(uVar7);
    (*pcVar10)(uVar6);
    (*pcVar10)(uVar5);
    puVar2 = PTR_s_scrollView_1002e9110;
    uVar5 = (*(code *)puVar1)(param_1,PTR_s_scrollView_1002e9110);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    puVar3 = PTR_s_documentView_1002e9180;
    uVar6 = (*(code *)puVar1)(uVar5,PTR_s_documentView_1002e9180);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    uVar7 = (*(code *)puVar1)(param_1,puVar2);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    uVar9 = (*(code *)puVar1)(uVar7,puVar3);
    self = _objc_retainAutoreleasedReturnValue(uVar9);
    if (self == 0) {
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
    }
    else {
      _objc_msgSend_stret((undefined *)&local_98,self,PTR_s_bounds_1002e6938);
    }
    (*(code *)PTR__objc_msgSend_10027d560)(0,uStack_80,uVar6,PTR_s_scrollPoint__1002e9188);
    puVar1 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(self);
    (*(code *)puVar1)(uVar7);
    (*(code *)puVar1)(uVar6);
    (*(code *)puVar1)(uVar5);
    (*(code *)puVar1)(local_38);
  }
  _objc_storeWeak(param_1 + __document,lVar4);
  (*(code *)PTR__objc_release_10027d590)(lVar4);
  return;
}



// ===== mouseDown:  @ 0x100046e4c =====

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x18 bytes */

void CanvasViewController::mouseDown_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ID self;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  code *pcVar13;
  undefined8 uVar14;
  undefined8 in_XMM1_Qa;
  long local_60 [6];
  
  uVar6 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  puVar2 = PTR_s_canvasView_1002e6c08;
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar7 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_canvasView_1002e6c08);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  uVar14 = (*(code *)puVar1)(uVar7,PTR_s_pixelAlignedLocationFromEvent__1002e9190,uVar6);
  (*(code *)PTR__objc_release_10027d590)(uVar7);
  uVar7 = (*(code *)puVar1)(param_1,puVar2);
  self = _objc_retainAutoreleasedReturnValue(uVar7);
  if (self == 0) {
    local_60[3] = 0;
    local_60[4] = 0;
    local_60[1] = 0;
    local_60[2] = 0;
  }
  else {
    _objc_msgSend_stret((undefined *)(local_60 + 1),self,PTR_s_bounds_1002e6938);
  }
  cVar4 = _NSPointInRect(uVar14,in_XMM1_Qa);
  (*(code *)PTR__objc_release_10027d590)(self);
  if (cVar4 == '\0') {
    *(undefined1 *)(param_1 + _isMouseDown) = 0;
    goto LAB_100047cab;
  }
  *(undefined1 *)(param_1 + _isMouseDown) = 1;
  cVar4 = *(char *)(param_1 + _overrideCreationBlock);
  *(undefined1 *)(param_1 + _overrideCreationBlock) = 0;
  (*(code *)puVar1)(param_1,PTR_s_stopEditingText_1002e9138);
  lVar10 = _mouseLocation;
  *(undefined8 *)(param_1 + _mouseLocation) = uVar14;
  *(undefined8 *)(param_1 + 8 + lVar10) = in_XMM1_Qa;
  *(undefined8 *)(param_1 + _panType) = 0;
  *(undefined8 *)(param_1 + _resizeHandle) = 0xffffffffffffffff;
  uVar7 = (*(code *)puVar1)(param_1,PTR_s_crop_1002e6d98);
  lVar8 = _objc_retainAutoreleasedReturnValue(uVar7);
  (*(code *)PTR__objc_release_10027d590)(lVar8);
  puVar2 = PTR_Graphic_1002eeee0;
  if (lVar8 != 0) {
    uVar7 = (*(code *)puVar1)(param_1,PTR_s_windowController_1002e7378);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    uVar14 = (*(code *)puVar1)(uVar7,PTR_s_window_1002e6878);
    uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
    uVar9 = (*(code *)puVar1)(param_1,PTR_s_crop_1002e6d98);
    uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
    (*(code *)puVar1)(uVar14,PTR_s_makeFirstResponder__1002e6e58,uVar9);
    puVar2 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar9);
    (*(code *)puVar2)(uVar14);
    (*(code *)puVar2)(uVar7);
    uVar7 = (*(code *)puVar1)(param_1,PTR_s_crop_1002e6d98);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    lVar10 = (*(code *)puVar1)(*(undefined8 *)(param_1 + _mouseLocation),
                               *(undefined8 *)(param_1 + 8 + _mouseLocation),uVar7,
                               PTR_s_handleUnderPoint__1002e9198);
    (*(code *)puVar2)(uVar7);
    uVar7 = (*(code *)puVar1)(param_1,PTR_s_crop_1002e6d98);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    (*(code *)puVar1)(*(undefined8 *)(param_1 + _mouseLocation),
                      *(undefined8 *)(param_1 + 8 + _mouseLocation),uVar7,
                      PTR_s_mouseDownOnHandle_atLocation__1002e91a0,lVar10);
    (*(code *)puVar2)(uVar7);
    if (lVar10 == -1) {
      lVar10 = (*(code *)PTR__objc_msgSend_10027d560)(uVar6,PTR_s_clickCount_1002e91a8);
      if (lVar10 < 2) {
        *(undefined8 *)(param_1 + _panType) = 7;
        uVar7 = (*(code *)puVar1)(param_1,PTR_s_canvasView_1002e6c08);
        uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
        uVar14 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSCursor_1002eeed0,
                                   PTR_s_closedHandCursor_1002e91b8);
        uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
        (*(code *)puVar1)(uVar7,PTR_s_setCursor__1002e8450,uVar14);
        (*(code *)puVar2)(uVar14);
        (*(code *)puVar2)(uVar7);
      }
      else {
        (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_doCrop_1002e91b0);
      }
    }
    else {
      *(long *)(param_1 + _resizeHandle) = lVar10;
      *(undefined8 *)(param_1 + _panType) = 6;
    }
    goto LAB_100047cab;
  }
  uVar7 = (*(code *)puVar1)(param_1,PTR_s_document_1002e69e8);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  uVar14 = (*(code *)puVar1)(uVar7,PTR_s_graphics_1002e6d18);
  uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
  uVar9 = (*(code *)PTR__objc_msgSend_10027d560)
                    (*(undefined8 *)(param_1 + lVar10),*(undefined8 *)(param_1 + 8 + lVar10),puVar2,
                     PTR_s_graphicUnderPoint_handle_fromGra_1002e91c0,local_60,uVar14);
  lVar10 = _objc_retainAutoreleasedReturnValue(uVar9);
  puVar1 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar14);
  (*(code *)puVar1)(uVar7);
  puVar1 = PTR__objc_msgSend_10027d560;
  if (lVar10 == 0) {
    cVar5 = (*(code *)PTR__objc_msgSend_10027d560)
                      (PTR__OBJC_CLASS___NSEvent_1002eebe0,PTR_s_isShiftDown_1002e7130);
    if (cVar5 == '\0') {
      cVar4 = (*(code *)puVar1)(param_1,PTR_s_blockGraphicsCreationOnMouseDown_1002e9208,(int)cVar4)
      ;
      uVar7 = (*(code *)puVar1)(param_1,PTR_s_windowController_1002e7378);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      if (cVar4 == '\0') {
        uVar14 = (*(code *)puVar1)(uVar7,PTR_s_currentTool_1002e9210);
        lVar8 = (*(code *)puVar1)(param_1,PTR_s_graphicClassForTool__1002e9218,uVar14);
        (*(code *)PTR__objc_release_10027d590)(uVar7);
        if (lVar8 != 0) {
          uVar7 = (*(code *)puVar1)(param_1,PTR_s_windowController_1002e7378);
          uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
          uVar14 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSIndexSet_1002eebc8,PTR_s_indexSet_1002e6ba8
                                    );
          uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
          (*(code *)puVar1)(uVar7,PTR_s_setSelectionIndexes__1002e6bb0,uVar14);
          puVar2 = PTR__objc_release_10027d590;
          (*(code *)PTR__objc_release_10027d590)(uVar14);
          (*(code *)puVar2)(uVar7);
          lVar11 = (*(code *)puVar1)(PTR_Crop_1002ef0c8,PTR_s_class_1002e6a28);
          if (lVar8 != lVar11) {
            *(undefined8 *)(param_1 + _panType) = 1;
            uVar7 = (*(code *)puVar1)(lVar8,PTR_s_creationSizingHandle_1002e9220);
            *(undefined8 *)(param_1 + _resizeHandle) = uVar7;
            uVar7 = (*(code *)puVar1)(param_1,PTR_s_undoManager_1002e6bc8);
            uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
            (*(code *)puVar1)(uVar7,PTR_s_beginUndoGrouping_1002e6d88);
            (*(code *)puVar2)(uVar7);
            uVar7 = (*(code *)puVar1)(lVar8,PTR_s_alloc_1002e64e8);
            uVar14 = (*(code *)puVar1)(param_1,PTR_s_view_1002e6900);
            uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
            uVar9 = (*(code *)puVar1)(uVar14,PTR_s_window_1002e6878);
            uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
            uVar7 = (*(code *)puVar1)(*(undefined8 *)(param_1 + _mouseLocation),
                                      *(undefined8 *)(param_1 + 8 + _mouseLocation),uVar7,
                                      PTR_s_initAtPoint_inWindow__1002e6678,uVar9);
            (*(code *)puVar1)(param_1,PTR_s_setCreatingGraphic__1002e9238,uVar7);
            puVar2 = PTR__objc_release_10027d590;
            (*(code *)PTR__objc_release_10027d590)(uVar7);
            (*(code *)puVar2)(uVar9);
            (*(code *)puVar2)(uVar14);
            uVar7 = (*(code *)puVar1)(param_1,PTR_s_creatingGraphic_1002e9240);
            uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
            uVar14 = (*(code *)puVar1)(param_1,PTR_s_document_1002e69e8);
            uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
            uVar9 = (*(code *)puVar1)(uVar14,PTR_s_graphics_1002e6d18);
            uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
            uVar12 = (*(code *)puVar1)(uVar7,PTR_s_proposedIndexInGraphics__1002e91c8,uVar9);
            puVar2 = PTR__objc_release_10027d590;
            (*(code *)PTR__objc_release_10027d590)(uVar9);
            (*(code *)puVar2)(uVar14);
            (*(code *)puVar2)(uVar7);
            uVar7 = (*(code *)puVar1)(param_1,PTR_s_document_1002e69e8);
            uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
            uVar14 = (*(code *)puVar1)(uVar7,PTR_s_mutableGraphics_1002e9248);
            uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
            (*(code *)puVar1)(uVar14,PTR_s_insertObject_atIndex__1002e8008,
                              *(undefined8 *)(param_1 + _creatingGraphic),uVar12);
            goto LAB_100047c93;
          }
          *(undefined8 *)(param_1 + _panType) = 5;
          uVar7 = (*(code *)puVar1)(lVar8,PTR_s_creationSizingHandle_1002e9220);
          *(undefined8 *)(param_1 + _resizeHandle) = uVar7;
          uVar7 = (*(code *)puVar1)(lVar8,PTR_s_alloc_1002e64e8);
          uVar14 = (*(code *)puVar1)(param_1,PTR_s_view_1002e6900);
          uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
          uVar9 = (*(code *)puVar1)(uVar14,PTR_s_window_1002e6878);
          uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
          uVar7 = (*(code *)puVar1)(*(undefined8 *)(param_1 + _mouseLocation),
                                    *(undefined8 *)(param_1 + 8 + _mouseLocation),uVar7,
                                    PTR_s_initAtPoint_inWindow__1002e6678,uVar9);
          (*(code *)puVar1)(param_1,PTR_s_setCrop__1002e9228,uVar7);
          puVar2 = PTR__objc_release_10027d590;
          (*(code *)PTR__objc_release_10027d590)(uVar7);
          (*(code *)puVar2)(uVar9);
          (*(code *)puVar2)(uVar14);
          puVar3 = PTR_s_windowController_1002e7378;
          uVar7 = (*(code *)puVar1)(param_1,PTR_s_windowController_1002e7378);
          uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
          uVar14 = (*(code *)puVar1)(uVar7,PTR_s_window_1002e6878);
          uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
          uVar9 = (*(code *)puVar1)(uVar14,PTR_s_firstResponder_1002e6c98);
          uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
          puVar2 = PTR__objc_release_10027d590;
          (*(code *)PTR__objc_release_10027d590)(uVar14);
          (*(code *)puVar2)(uVar7);
          uVar7 = (*(code *)puVar1)(param_1,puVar3);
          uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
          uVar14 = (*(code *)puVar1)(uVar7,PTR_s_window_1002e6878);
          uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
          uVar12 = (*(code *)puVar1)(param_1,PTR_s_crop_1002e6d98);
          uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
          (*(code *)puVar1)(uVar14,PTR_s_makeFirstResponder__1002e6e58,uVar12);
          puVar2 = PTR__objc_release_10027d590;
          (*(code *)PTR__objc_release_10027d590)(uVar12);
          (*(code *)puVar2)(uVar14);
          (*(code *)puVar2)(uVar7);
          uVar7 = (*(code *)puVar1)(param_1,PTR_s_crop_1002e6d98);
          uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
          (*(code *)puVar1)(uVar7,PTR_s_setNextResponder__1002e9230,uVar9);
          (*(code *)puVar2)(uVar7);
          (*(code *)puVar2)(uVar9);
        }
      }
      else {
        uVar14 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSIndexSet_1002eebc8,PTR_s_indexSet_1002e6ba8);
        uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
        (*(code *)puVar1)(uVar7,PTR_s_setSelectionIndexes__1002e6bb0,uVar14);
        puVar1 = PTR__objc_release_10027d590;
        (*(code *)PTR__objc_release_10027d590)(uVar14);
        (*(code *)puVar1)(uVar7);
      }
    }
    else {
      uVar7 = (*(code *)puVar1)(param_1,PTR_s_windowController_1002e7378);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      uVar14 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSIndexSet_1002eebc8,PTR_s_indexSet_1002e6ba8);
      uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
      (*(code *)puVar1)(uVar7,PTR_s_setSelectionIndexes__1002e6bb0,uVar14);
      puVar2 = PTR__objc_release_10027d590;
      (*(code *)PTR__objc_release_10027d590)(uVar14);
      (*(code *)puVar2)(uVar7);
      uVar7 = (*(code *)puVar1)(PTR_Selection_1002ef0c0,PTR_s_alloc_1002e64e8);
      uVar7 = (*(code *)puVar1)(uVar7,PTR_s_init_1002e6538);
      (*(code *)puVar1)(param_1,PTR_s_setSelection__1002e91f8,uVar7);
      (*(code *)puVar2)(uVar7);
      (*(code *)puVar1)(*(undefined8 *)(param_1 + _mouseLocation),
                        *(undefined8 *)(param_1 + 8 + _mouseLocation),
                        *(undefined8 *)(param_1 + _selection),PTR_s_setStartPoint__1002e9200);
      *(undefined8 *)(param_1 + _panType) = 4;
    }
  }
  else {
    uVar7 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_document_1002e69e8);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    uVar14 = (*(code *)puVar1)(uVar7,PTR_s_graphics_1002e6d18);
    uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
    lVar8 = (*(code *)puVar1)(lVar10,PTR_s_proposedIndexInGraphics__1002e91c8,uVar14);
    puVar2 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar14);
    (*(code *)puVar2)(uVar7);
    uVar7 = (*(code *)puVar1)(param_1,PTR_s_document_1002e69e8);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    uVar14 = (*(code *)puVar1)(uVar7,PTR_s_graphics_1002e6d18);
    uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
    lVar11 = (*(code *)puVar1)(uVar14,PTR_s_indexOfObject__1002e6cd8,lVar10);
    puVar1 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar14);
    (*(code *)puVar1)(uVar7);
    if (lVar8 != lVar11) {
      (*(code *)PTR__objc_msgSend_10027d560)
                (param_1,PTR_s_moveGraphic_fromIndex_toIndex__1002e91d0,lVar10,lVar11);
    }
    lVar8 = (*(code *)PTR__objc_msgSend_10027d560)(uVar6,PTR_s_clickCount_1002e91a8);
    puVar1 = PTR__objc_msgSend_10027d560;
    if (1 < lVar8) {
      uVar7 = (*(code *)PTR__objc_msgSend_10027d560)(PTR_Text_1002eebf0,PTR_s_class_1002e6a28);
      cVar4 = (*(code *)puVar1)(lVar10,PTR_s_isKindOfClass__1002e6ef8,uVar7);
      if (cVar4 != '\0') {
        (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_startEditingText__1002e91d8,lVar10);
        goto LAB_100047ca2;
      }
    }
    if (local_60[0] == -1) {
      *(undefined8 *)(param_1 + _panType) = 3;
      uVar7 = (*(code *)puVar1)(param_1,PTR_s_canvasView_1002e6c08);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      uVar14 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSCursor_1002eeed0,
                                 PTR_s_closedHandCursor_1002e91b8);
      uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
      (*(code *)puVar1)(uVar7,PTR_s_setCursor__1002e8450,uVar14);
      puVar2 = PTR__objc_release_10027d590;
      (*(code *)PTR__objc_release_10027d590)(uVar14);
      (*(code *)puVar2)(uVar7);
      uVar7 = (*(code *)puVar1)(param_1,PTR_s_undoManager_1002e6bc8);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      (*(code *)puVar1)(uVar7,PTR_s_beginUndoGrouping_1002e6d88);
      (*(code *)puVar2)(uVar7);
      uVar7 = (*(code *)puVar1)(param_1,PTR_s_document_1002e69e8);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      uVar14 = (*(code *)puVar1)(uVar7,PTR_s_graphics_1002e6d18);
      uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
      uVar9 = (*(code *)puVar1)(uVar14,PTR_s_indexOfObject__1002e6cd8,lVar10);
      (*(code *)puVar2)(uVar14);
      (*(code *)puVar2)(uVar7);
      puVar1 = PTR__objc_msgSend_10027d560;
      uVar7 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_windowController_1002e7378);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      uVar14 = (*(code *)puVar1)(uVar7,PTR_s_selectionIndexes_1002e6d20);
      uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
      cVar4 = (*(code *)puVar1)(uVar14,PTR_s_containsIndex__1002e8400,uVar9);
      puVar1 = PTR__objc_release_10027d590;
      (*(code *)PTR__objc_release_10027d590)(uVar14);
      (*(code *)puVar1)(uVar7);
      puVar2 = PTR_s_windowController_1002e7378;
      puVar1 = PTR__objc_msgSend_10027d560;
      if (cVar4 == '\0') {
        cVar4 = (*(code *)PTR__objc_msgSend_10027d560)
                          (PTR__OBJC_CLASS___NSEvent_1002eebe0,PTR_s_isShiftDown_1002e7130);
        if ((cVar4 == '\0') &&
           (cVar4 = (*(code *)PTR__objc_msgSend_10027d560)
                              (PTR__OBJC_CLASS___NSEvent_1002eebe0,PTR_s_isCommandDown_1002e91e0),
           cVar4 == '\0')) {
          uVar7 = (*(code *)puVar1)(param_1,puVar2);
          uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
          uVar14 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSIndexSet_1002eebc8,
                                     PTR_s_indexSetWithIndex__1002e8d18,uVar9);
          uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
          (*(code *)puVar1)(uVar7,PTR_s_setSelectionIndexes__1002e6bb0,uVar14);
LAB_100047c93:
          pcVar13 = (code *)PTR__objc_release_10027d590;
          (*(code *)PTR__objc_release_10027d590)(uVar14);
        }
        else {
          uVar7 = (*(code *)puVar1)(param_1,puVar2);
          uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
          uVar14 = (*(code *)puVar1)(param_1,puVar2);
          uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
          uVar12 = (*(code *)puVar1)(uVar14,PTR_s_selectionIndexes_1002e6d20);
          uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
          uVar9 = (*(code *)puVar1)(uVar12,PTR_s_indexSetByAddingIndex__1002e91e8,uVar9);
          uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
          (*(code *)puVar1)(uVar7,PTR_s_setSelectionIndexes__1002e6bb0,uVar9);
          pcVar13 = (code *)PTR__objc_release_10027d590;
          (*(code *)PTR__objc_release_10027d590)(uVar9);
          (*pcVar13)(uVar12);
          (*pcVar13)(uVar14);
        }
        (*pcVar13)(uVar7);
      }
    }
    else {
      *(undefined8 *)(param_1 + _panType) = 2;
      *(long *)(param_1 + _resizeHandle) = local_60[0];
      uVar7 = (*(code *)puVar1)(param_1,PTR_s_undoManager_1002e6bc8);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      (*(code *)puVar1)(uVar7,PTR_s_beginUndoGrouping_1002e6d88);
      (*(code *)PTR__objc_release_10027d590)(uVar7);
      uVar7 = (*(code *)puVar1)(param_1,PTR_s_windowController_1002e7378);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      puVar2 = PTR__OBJC_CLASS___NSIndexSet_1002eebc8;
      uVar14 = (*(code *)puVar1)(param_1,PTR_s_document_1002e69e8);
      uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
      uVar9 = (*(code *)puVar1)(uVar14,PTR_s_graphics_1002e6d18);
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      uVar12 = (*(code *)puVar1)(lVar10,PTR_s_indexInGraphics__1002e91f0,uVar9);
      uVar12 = (*(code *)puVar1)(puVar2,PTR_s_indexSetWithIndex__1002e8d18,uVar12);
      uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
      (*(code *)PTR__objc_msgSend_10027d560)(uVar7,PTR_s_setSelectionIndexes__1002e6bb0,uVar12);
      puVar1 = PTR__objc_release_10027d590;
      (*(code *)PTR__objc_release_10027d590)(uVar12);
      (*(code *)puVar1)(uVar9);
      (*(code *)puVar1)(uVar14);
      (*(code *)puVar1)(uVar7);
    }
  }
LAB_100047ca2:
  (*(code *)PTR__objc_release_10027d590)(lVar10);
LAB_100047cab:
  (*(code *)PTR__objc_release_10027d590)(uVar6);
  return;
}



// ===== mouseDragged:  @ 0x100047cc3 =====

/* Function Stack Size: 0x18 bytes */

void CanvasViewController::mouseDragged_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double in_XMM1_Qa;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [32];
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  double local_40;
  double dStack_38;
  
  uVar5 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  puVar1 = PTR__objc_msgSend_10027d560;
  if (*(char *)(param_1 + _isMouseDown) == '\0') goto LAB_100048139;
  uVar6 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_canvasView_1002e6c08);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  dVar11 = (double)(*(code *)puVar1)(uVar6,PTR_s_pixelAlignedLocation_1002e9250);
  (*(code *)PTR__objc_release_10027d590)(uVar6);
  lVar3 = _mouseLocation;
  dVar12 = *(double *)(param_1 + _mouseLocation);
  dVar13 = ((double *)(param_1 + _mouseLocation))[1];
  *(double *)(param_1 + _mouseLocation) = dVar11;
  *(double *)(param_1 + 8 + lVar3) = in_XMM1_Qa;
  lVar4 = _resizeHandle;
  if (6 < *(long *)(param_1 + _panType) - 1U) goto LAB_100048139;
  dVar12 = dVar11 - dVar12;
  dVar13 = in_XMM1_Qa - dVar13;
  switch(*(long *)(param_1 + _panType)) {
  case 1:
    uVar6 = (*(code *)PTR__objc_msgSend_10027d560)
                      (dVar12,dVar13,*(undefined8 *)(param_1 + _creatingGraphic),
                       PTR_s_resizeByMovingHandle_withDelta_t_1002e9258,
                       *(undefined8 *)(param_1 + _resizeHandle));
    *(undefined8 *)(param_1 + lVar4) = uVar6;
    goto LAB_100048139;
  case 2:
    uVar6 = (*(code *)puVar1)(param_1,PTR_s_selectedGraphics_1002e9260);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    uVar7 = (*(code *)puVar1)(uVar6,PTR_s_firstObject_1002e67e0);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    uVar8 = (*(code *)puVar1)(dVar12,dVar13,*(undefined8 *)(param_1 + lVar3),
                              *(undefined8 *)(param_1 + 8 + lVar3),uVar7,
                              PTR_s_resizeByMovingHandle_withDelta_t_1002e9258,
                              *(undefined8 *)(param_1 + _resizeHandle));
    *(undefined8 *)(param_1 + _resizeHandle) = uVar8;
    pcVar10 = (code *)PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar7);
    break;
  case 3:
    uVar6 = (*(code *)puVar1)(param_1,PTR_s_selectedGraphics_1002e9260);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    local_68 = PTR___NSConcreteStackBlock_10027d330;
    local_60 = 0xc2000000;
    local_5c = 0;
    local_58 = FUN_10004822c;
    local_50 = &DAT_10027fe20;
    local_40 = dVar12;
    dStack_38 = dVar13;
    local_48 = (*(code *)PTR__objc_retain_10027d598)(param_1);
    (*(code *)puVar1)(uVar6,PTR_s_enumerateObjectsUsingBlock__1002e6d78,&local_68);
    pcVar10 = (code *)PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar6);
    uVar6 = local_48;
    break;
  case 4:
    (*(code *)puVar1)(dVar11,in_XMM1_Qa,*(undefined8 *)(param_1 + _selection),
                      PTR_s_setEndPoint__1002e9270);
    uVar6 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSMutableIndexSet_1002eef88,PTR_s_alloc_1002e64e8);
    uVar6 = (*(code *)puVar1)(uVar6,PTR_s_init_1002e6538);
    uVar7 = (*(code *)puVar1)(param_1,PTR_s_document_1002e69e8);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    uVar8 = (*(code *)puVar1)(uVar7,PTR_s_graphics_1002e6d18);
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
    puVar2 = PTR__objc_retain_10027d598;
    local_98 = PTR___NSConcreteStackBlock_10027d330;
    local_90 = 0xc2000000;
    local_8c = 0;
    local_88 = FUN_100048282;
    local_80 = &DAT_10027fe50;
    uVar9 = (*(code *)PTR__objc_retain_10027d598)(param_1);
    local_78 = uVar9;
    uVar6 = (*(code *)puVar2)(uVar6);
    local_70 = uVar6;
    (*(code *)puVar1)(uVar8,PTR_s_enumerateObjectsUsingBlock__1002e6d78,&local_98);
    puVar2 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar8);
    (*(code *)puVar2)(uVar7);
    uVar7 = (*(code *)puVar1)(uVar9,PTR_s_windowController_1002e7378);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    (*(code *)puVar1)(uVar7,PTR_s_setSelectionIndexes__1002e6bb0,uVar6);
    puVar2 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar7);
    uVar7 = (*(code *)puVar1)(uVar9,PTR_s_canvasView_1002e6c08);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    if (*(ID *)(param_1 + _selection) == 0) {
      local_c8 = 0;
      uStack_c0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
    }
    else {
      _objc_msgSend_stret((undefined *)&local_d8,*(ID *)(param_1 + _selection),PTR_s_rect_1002e7020)
      ;
    }
    _NSInsetRect(DAT_100171318,DAT_100171318,local_b8);
    (*(code *)PTR__objc_msgSend_10027d560)(uVar7,PTR_s_setNeedsDisplayInRect__1002e9280);
    (*(code *)puVar2)(uVar7);
    (*(code *)puVar2)(local_70);
    (*(code *)puVar2)(local_78);
    (*(code *)puVar2)(uVar6);
    goto LAB_100048139;
  default:
    uVar6 = (*(code *)puVar1)(param_1,PTR_s_crop_1002e6d98);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    lVar4 = _resizeHandle;
    uVar7 = (*(code *)puVar1)(dVar12,dVar13,*(undefined8 *)(param_1 + lVar3),
                              *(undefined8 *)(param_1 + 8 + lVar3),uVar6,
                              PTR_s_resizeByMovingHandle_withDelta_t_1002e9258,
                              *(undefined8 *)(param_1 + _resizeHandle));
    *(undefined8 *)(param_1 + lVar4) = uVar7;
    goto LAB_100048129;
  case 7:
    uVar6 = (*(code *)puVar1)(param_1,PTR_s_crop_1002e6d98);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)puVar1)(dVar12,dVar13,*(undefined8 *)(param_1 + lVar3),
                      *(undefined8 *)(param_1 + 8 + lVar3),uVar6,
                      PTR_s_translateWithDelta_toLocation__1002e9268);
LAB_100048129:
    (*(code *)PTR__objc_release_10027d590)(uVar6);
    goto LAB_100048139;
  }
  (*pcVar10)(uVar6);
LAB_100048139:
  (*(code *)PTR__objc_release_10027d590)(uVar5);
  return;
}



// ===== mouseUp:  @ 0x100048424 =====

/* Function Stack Size: 0x18 bytes */

void CanvasViewController::mouseUp_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  cfstringStruct *pcVar8;
  undefined *puVar9;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  uVar5 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  if (*(char *)(param_1 + _isMouseDown) == '\0') goto LAB_10004887d;
  *(undefined1 *)(param_1 + _isMouseDown) = 0;
  uVar7 = *(undefined8 *)(param_1 + _panType);
  *(undefined8 *)(param_1 + _panType) = 0;
  lVar3 = _creatingGraphic;
  puVar9 = PTR__objc_msgSend_10027d560;
  switch(uVar7) {
  case 1:
    cVar4 = (*(code *)PTR__objc_msgSend_10027d560)
                      (*(undefined8 *)(param_1 + _creatingGraphic),PTR_s_didGetCreated_1002e9288);
    puVar1 = PTR_s_undoManager_1002e6bc8;
    puVar9 = PTR__objc_msgSend_10027d560;
    if (cVar4 == '\0') {
      uVar7 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_undoManager_1002e6bc8);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      (*(code *)puVar9)(uVar7,PTR_s_endUndoGrouping_1002e6da8);
      (*(code *)PTR__objc_release_10027d590)(uVar7);
      uVar7 = (*(code *)puVar9)(param_1,puVar1);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      (*(code *)puVar9)(uVar7,PTR_s_disableUndoRegistration_1002e8f58);
      (*(code *)PTR__objc_release_10027d590)(uVar7);
      uVar7 = (*(code *)puVar9)(param_1,puVar1);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      (*(code *)puVar9)(uVar7,PTR_s_undoNestedGroup_1002e9290);
      puVar2 = PTR__objc_release_10027d590;
      (*(code *)PTR__objc_release_10027d590)(uVar7);
      uVar7 = (*(code *)puVar9)(param_1,puVar1);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      (*(code *)puVar9)(uVar7,PTR_s_enableUndoRegistration_1002e8f70);
      (*(code *)puVar2)(uVar7);
    }
    else {
      uVar7 = *(undefined8 *)(param_1 + lVar3);
      uVar6 = (*(code *)PTR__objc_msgSend_10027d560)(PTR_Text_1002eebf0,PTR_s_class_1002e6a28);
      cVar4 = (*(code *)puVar9)(uVar7,PTR_s_isKindOfClass__1002e6ef8,uVar6);
      if (cVar4 != '\0') {
        (*(code *)PTR__objc_msgSend_10027d560)
                  (param_1,PTR_s_startEditingText__1002e91d8,*(undefined8 *)(param_1 + lVar3));
      }
      uVar7 = (*(code *)puVar9)(param_1,PTR_s_undoManager_1002e6bc8);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      puVar1 = PTR__OBJC_CLASS___NSString_1002eea68;
      uVar6 = (*(code *)puVar9)(*(undefined8 *)(param_1 + lVar3),PTR_s_class_1002e6a28);
      uVar6 = (*(code *)puVar9)(puVar1,PTR_s_stringWithFormat__1002e63a8,&cf_Add__,uVar6);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      (*(code *)puVar9)(uVar7,PTR_s_setActionName__1002e6da0,uVar6);
      puVar1 = PTR__objc_release_10027d590;
      (*(code *)PTR__objc_release_10027d590)(uVar6);
      (*(code *)puVar1)(uVar7);
      uVar7 = (*(code *)puVar9)(param_1,PTR_s_undoManager_1002e6bc8);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      (*(code *)puVar9)(uVar7,PTR_s_endUndoGrouping_1002e6da8);
      (*(code *)puVar1)(uVar7);
    }
    if (*(ID *)(param_1 + _creatingGraphic) == 0) {
      local_48 = 0;
      uStack_40 = 0;
      local_58 = 0;
      uStack_50 = 0;
      puVar9 = PTR_s_setCreatingGraphic__1002e9238;
    }
    else {
      _objc_msgSend_stret((undefined *)&local_58,*(ID *)(param_1 + _creatingGraphic),
                          PTR_s_drawingBounds_1002e83f0);
      puVar9 = PTR_s_setCreatingGraphic__1002e9238;
    }
    break;
  case 2:
    uVar7 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_undoManager_1002e6bc8);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    pcVar8 = &cf_Resize;
    goto LAB_1000485f8;
  case 3:
    uVar7 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_undoManager_1002e6bc8);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    pcVar8 = &cf_Move;
LAB_1000485f8:
    (*(code *)puVar9)(uVar7,PTR_s_setActionName__1002e6da0,pcVar8);
    puVar1 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar7);
    uVar7 = (*(code *)puVar9)(param_1,PTR_s_undoManager_1002e6bc8);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    (*(code *)puVar9)(uVar7,PTR_s_endUndoGrouping_1002e6da8);
    (*(code *)puVar1)(uVar7);
    (*(code *)puVar9)(param_1,PTR_s_checkAndSetMouseCursor_1002e9298);
    goto LAB_10004887d;
  case 4:
    if (*(ID *)(param_1 + _selection) == 0) {
      local_68 = 0;
      uStack_60 = 0;
      local_78 = 0;
      uStack_70 = 0;
    }
    else {
      _objc_msgSend_stret((undefined *)&local_78,*(ID *)(param_1 + _selection),PTR_s_rect_1002e7020)
      ;
    }
    _NSInsetRect((int)DAT_100171318,DAT_100171318,&local_58);
    puVar9 = PTR_s_setSelection__1002e91f8;
    break;
  case 5:
    uVar7 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_crop_1002e6d98);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    cVar4 = (*(code *)puVar9)(uVar7,PTR_s_didGetCreated_1002e9288);
    (*(code *)PTR__objc_release_10027d590)(uVar7);
    if (cVar4 == '\0') {
      (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_stopCrop_1002e9140);
    }
  default:
    (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_checkAndSetMouseCursor_1002e9298);
    goto LAB_10004887d;
  }
  puVar1 = PTR__objc_msgSend_10027d560;
  (*(code *)PTR__objc_msgSend_10027d560)(param_1,puVar9,0);
  uVar7 = (*(code *)puVar1)(param_1,PTR_s_canvasView_1002e6c08);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  (*(code *)puVar1)(uVar7,PTR_s_setNeedsDisplayInRect__1002e9280);
  (*(code *)PTR__objc_release_10027d590)(uVar7);
  (*(code *)puVar1)(param_1,PTR_s_checkAndSetMouseCursor_1002e9298);
LAB_10004887d:
  (*(code *)PTR__objc_release_10027d590)(uVar5);
  return;
}



// ===== blockGraphicsCreationOnMouseDown:  @ 0x1000488ac =====

/* Function Stack Size: 0x14 bytes */

char CanvasViewController::blockGraphicsCreationOnMouseDown_(ID param_1,SEL param_2,char param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  
  puVar1 = PTR_s_windowController_1002e7378;
  pcVar7 = (code *)PTR__objc_msgSend_10027d560;
  uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_windowController_1002e7378);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  puVar2 = PTR_s_currentTool_1002e9210;
  lVar5 = (*pcVar7)(uVar4,PTR_s_currentTool_1002e9210);
  if (lVar5 == 7) {
    (*(code *)PTR__objc_release_10027d590)(uVar4);
  }
  else {
    uVar6 = (*pcVar7)(param_1,puVar1);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    lVar5 = (*pcVar7)(uVar6,puVar2);
    puVar1 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar6);
    (*(code *)puVar1)(uVar4);
    pcVar7 = (code *)PTR__objc_msgSend_10027d560;
    if (lVar5 != 6) {
      return '\0';
    }
  }
  uVar4 = (*pcVar7)(param_1,PTR_s_canvasView_1002e6c08);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  cVar3 = (*pcVar7)(uVar4,PTR_s_isFirstResponder_1002e92a0);
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  if (cVar3 != '\0') {
    if (param_3 == '\0') {
      uVar4 = (*pcVar7)(param_1,PTR_s_windowController_1002e7378);
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      uVar6 = (*pcVar7)(uVar4,PTR_s_selectionIndexes_1002e6d20);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      lVar5 = (*pcVar7)(uVar6,PTR_s_count_1002e6488);
      puVar1 = PTR__objc_release_10027d590;
      (*(code *)PTR__objc_release_10027d590)(uVar6);
      (*(code *)puVar1)(uVar4);
      if (lVar5 != 0) {
        return '\x01';
      }
    }
    return '\0';
  }
  return '\x01';
}



// ===== mouseMoved:  @ 0x1000489f2 =====

/* Function Stack Size: 0x18 bytes */

void CanvasViewController::mouseMoved_(ID param_1,SEL param_2,ID param_3)

{
  objc_super local_20;
  
  local_20.super_class = (class_t *)PTR_CanvasViewController_1002ef8d0;
  local_20.receiver = param_1;
  _objc_msgSendSuper2(&local_20,PTR_s_mouseMoved__1002e92a8);
  (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_checkAndSetMouseCursor_1002e9298);
  return;
}



// ===== checkAndSetMouseCursor  @ 0x100048a34 =====

/* Function Stack Size: 0x10 bytes */

void __thiscall
CanvasViewController::checkAndSetMouseCursor(CanvasViewController *this,ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 in_XMM1_Qa;
  undefined8 local_38;
  
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar5 = (*(code *)PTR__objc_msgSend_10027d560)(this,PTR_s_canvasView_1002e6c08);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar10 = (*(code *)puVar1)(uVar5,PTR_s_pixelAlignedLocation_1002e9250);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar5);
  puVar3 = PTR_s_crop_1002e6d98;
  uVar5 = (*(code *)puVar1)(this,PTR_s_crop_1002e6d98);
  lVar6 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)puVar2)(lVar6);
  puVar2 = PTR_Graphic_1002eeee0;
  if (lVar6 != 0) {
    uVar5 = (*(code *)puVar1)(this,puVar3);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    uVar10 = (*(code *)puVar1)(uVar10,in_XMM1_Qa,uVar5,PTR_s_handleUnderPoint__1002e9198);
    (*(code *)PTR__objc_release_10027d590)(uVar5);
    uVar5 = (*(code *)puVar1)(this,PTR_s_canvasView_1002e6c08);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    uVar7 = (*(code *)puVar1)(this,puVar3);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    uVar10 = (*(code *)puVar1)(uVar7,PTR_s_cursorForHandle__1002e92b0,uVar10);
    uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
    (*(code *)puVar1)(uVar5,PTR_s_setCursor__1002e8450,uVar10);
    (*(code *)PTR__objc_release_10027d590)(uVar10);
    (*(code *)PTR__objc_release_10027d590)(uVar7);
    (*(code *)PTR__objc_release_10027d590)(uVar5);
    return;
  }
  uVar5 = (*(code *)puVar1)(this,PTR_s_document_1002e69e8);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar7 = (*(code *)puVar1)(uVar5,PTR_s_graphics_1002e6d18);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  uVar10 = (*(code *)puVar1)(uVar10,in_XMM1_Qa,puVar2,
                             PTR_s_graphicUnderPoint_handle_fromGra_1002e91c0,&local_38,uVar7);
  lVar6 = _objc_retainAutoreleasedReturnValue(uVar10);
  puVar1 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar7);
  (*(code *)puVar1)(uVar5);
  if (lVar6 == 0) {
LAB_100048c4c:
    cVar4 = (*(code *)PTR__objc_msgSend_10027d560)
                      (this,PTR_s_blockGraphicsCreationOnMouseDown_1002e9208,
                       (int)(char)this[_overrideCreationBlock]);
    pcVar9 = (code *)PTR__objc_msgSend_10027d560;
    if (cVar4 == '\0') {
      uVar5 = (*(code *)PTR__objc_msgSend_10027d560)(this,PTR_s_windowController_1002e7378);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      uVar10 = (*pcVar9)(uVar5,PTR_s_currentTool_1002e9210);
      uVar10 = (*pcVar9)(this,PTR_s_graphicClassForTool__1002e9218,uVar10);
      (*(code *)PTR__objc_release_10027d590)(uVar5);
      uVar5 = (*pcVar9)(this,PTR_s_canvasView_1002e6c08);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar5);
      uVar5 = (*pcVar9)(uVar10,PTR_s_creationCursor_1002e92b8);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      (*pcVar9)(uVar7,PTR_s_setCursor__1002e8450,uVar5);
      goto LAB_100048d6a;
    }
    uVar5 = (*(code *)PTR__objc_msgSend_10027d560)(this,PTR_s_canvasView_1002e6c08);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar5);
    uVar5 = (*pcVar9)(PTR__OBJC_CLASS___NSCursor_1002eeed0,PTR_s_arrowCursor_1002e8440);
  }
  else {
    uVar5 = (*(code *)PTR__objc_msgSend_10027d560)(this,PTR_s_text_1002e83f8);
    lVar8 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)PTR__objc_release_10027d590)(lVar8);
    pcVar9 = (code *)PTR__objc_msgSend_10027d560;
    if (lVar6 == lVar8) goto LAB_100048c4c;
    uVar5 = (*(code *)PTR__objc_msgSend_10027d560)(this,PTR_s_canvasView_1002e6c08);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar5);
    uVar5 = (*pcVar9)(lVar6,PTR_s_cursorForHandle__1002e92b0,local_38);
  }
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*pcVar9)(uVar7,PTR_s_setCursor__1002e8450,uVar5);
LAB_100048d6a:
  puVar1 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar5);
  (*(code *)puVar1)(uVar7);
  (*(code *)PTR__objc_release_10027d590)(lVar6);
  return;
}



// ===== keyDown:  @ 0x100048d89 =====

/* Function Stack Size: 0x18 bytes */

void CanvasViewController::keyDown_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  char cVar2;
  short sVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  float fVar10;
  objc_super local_40;
  
  uVar4 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  puVar9 = PTR_s_keyCode_1002e7e18;
  sVar3 = (*(code *)PTR__objc_msgSend_10027d560)(uVar4,PTR_s_keyCode_1002e7e18);
  if ((sVar3 == 0x24) ||
     (sVar3 = (*(code *)PTR__objc_msgSend_10027d560)(uVar4,puVar9), sVar3 == 0x4c)) {
    uVar5 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_crop_1002e6d98);
    lVar6 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)PTR__objc_release_10027d590)(lVar6);
    if (lVar6 != 0) {
      (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_doCrop_1002e91b0);
      goto LAB_100049005;
    }
    uVar5 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_text_1002e83f8);
    lVar6 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)PTR__objc_release_10027d590)(lVar6);
    puVar1 = PTR__objc_msgSend_10027d560;
    if (lVar6 == 0) {
      uVar5 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_selectedGraphics_1002e9260);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      lVar6 = (*(code *)puVar1)(uVar5,PTR_s_count_1002e6488);
      if (lVar6 == 1) {
        uVar7 = (*(code *)puVar1)(uVar5,PTR_s_objectAtIndexedSubscript__1002e6400,0);
        uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
        uVar8 = (*(code *)PTR__objc_msgSend_10027d560)(PTR_Text_1002eebf0,PTR_s_class_1002e6a28);
        cVar2 = (*(code *)PTR__objc_msgSend_10027d560)(uVar7,PTR_s_isKindOfClass__1002e6ef8,uVar8);
        puVar1 = PTR__objc_msgSend_10027d560;
        (*(code *)PTR__objc_release_10027d590)(uVar7);
        if (cVar2 != '\0') {
          uVar7 = (*(code *)puVar1)(uVar5,PTR_s_objectAtIndexedSubscript__1002e6400,0);
          uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
          (*(code *)puVar1)(param_1,PTR_s_startEditingText__1002e91d8,uVar7);
          puVar9 = PTR__objc_release_10027d590;
          (*(code *)PTR__objc_release_10027d590)(uVar7);
          (*(code *)puVar9)(uVar5);
          goto LAB_100049005;
        }
      }
      (*(code *)PTR__objc_release_10027d590)(uVar5);
    }
  }
  sVar3 = (*(code *)PTR__objc_msgSend_10027d560)(uVar4,puVar9);
  if (sVar3 == 0x75) {
    (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_delete__1002e92c0,param_1);
  }
  else {
    sVar3 = (*(code *)PTR__objc_msgSend_10027d560)(uVar4,puVar9);
    puVar1 = PTR_s_videoPlayer_1002e7f28;
    puVar9 = PTR__objc_msgSend_10027d560;
    if (sVar3 == 0x31) {
      uVar5 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_videoPlayer_1002e7f28);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      fVar10 = (float)(*(code *)puVar9)(uVar5,PTR_s_rate_1002e7f60);
      uVar7 = (*(code *)puVar9)(param_1,puVar1);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      puVar9 = PTR_s_pause_1002e7f70;
      if ((fVar10 == 0.0) && (!NAN(fVar10))) {
        puVar9 = PTR_s_play_1002e7f80;
      }
      (*(code *)PTR__objc_msgSend_10027d560)(uVar7,puVar9);
      (*(code *)PTR__objc_release_10027d590)(uVar7);
      (*(code *)PTR__objc_release_10027d590)(uVar5);
    }
    else {
      local_40.super_class = (class_t *)PTR_CanvasViewController_1002ef8d0;
      local_40.receiver = param_1;
      _objc_msgSendSuper2(&local_40,PTR_s_keyDown__1002e7e28,uVar4);
    }
  }
LAB_100049005:
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  return;
}



// ===== validateMenuItem:  @ 0x10004901d =====

/* Function Stack Size: 0x18 bytes */

char CanvasViewController::validateMenuItem_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  byte bVar7;
  undefined *puVar8;
  bool bVar9;
  
  uVar1 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar2 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_crop_1002e6d98);
  lVar3 = _objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)PTR__objc_release_10027d590)(lVar3);
  puVar8 = PTR_s_action_1002e82a8;
  if (lVar3 == 0) {
    puVar4 = (undefined *)(*(code *)PTR__objc_msgSend_10027d560)(uVar1,PTR_s_action_1002e82a8);
    puVar6 = PTR__objc_msgSend_10027d560;
    if (puVar4 == PTR_s_selectAll__1002e92c8) {
      uVar2 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_document_1002e69e8);
      uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
      uVar5 = (*(code *)puVar6)(uVar2,PTR_s_graphics_1002e6d18);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      lVar3 = (*(code *)puVar6)(uVar5,PTR_s_count_1002e6488);
      puVar8 = PTR_s_action_1002e82a8;
      (*(code *)PTR__objc_release_10027d590)(uVar5);
      (*(code *)PTR__objc_release_10027d590)(uVar2);
      if (lVar3 == 0) goto LAB_100049101;
    }
    puVar6 = (undefined *)(*(code *)PTR__objc_msgSend_10027d560)(uVar1,puVar8);
    puVar8 = PTR__objc_msgSend_10027d560;
    if (puVar6 == PTR_s_delete__1002e92c0) {
      uVar2 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_windowController_1002e7378);
      uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
      uVar5 = (*(code *)puVar8)(uVar2,PTR_s_selectionIndexes_1002e6d20);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      lVar3 = (*(code *)puVar8)(uVar5,PTR_s_count_1002e6488);
      puVar8 = PTR__objc_release_10027d590;
      bVar9 = lVar3 == 0;
      (*(code *)PTR__objc_release_10027d590)(uVar5);
      (*(code *)puVar8)(uVar2);
    }
    else {
      bVar9 = false;
    }
    bVar7 = bVar9 ^ 1;
  }
  else {
LAB_100049101:
    bVar7 = 0;
  }
  (*(code *)PTR__objc_release_10027d590)(uVar1);
  return bVar7;
}



// ===== delete:  @ 0x10004917d =====

/* Function Stack Size: 0x18 bytes */

void CanvasViewController::delete_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar2 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_document_1002e69e8);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  uVar3 = (*(code *)puVar1)(uVar2,PTR_s_mutableGraphics_1002e9248);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*(code *)puVar1)(param_1,PTR_s_windowController_1002e7378);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)puVar1)(uVar4,PTR_s_selectionIndexes_1002e6d20);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)puVar1)(uVar3,PTR_s_removeObjectsAtIndexes__1002e9028,uVar5);
  puVar1 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar5);
  (*(code *)puVar1)(uVar4);
  (*(code *)puVar1)(uVar3);
  (*(code *)puVar1)(uVar2);
  uVar2 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_undoManager_1002e6bc8);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)PTR__objc_msgSend_10027d560)(uVar2,PTR_s_setActionName__1002e6da0,&cf_Delete);
  (*(code *)puVar1)(uVar2);
  return;
}



// ===== deleteBackward:  @ 0x10004926b =====

/* Function Stack Size: 0x18 bytes */

void CanvasViewController::deleteBackward_(ID param_1,SEL param_2,ID param_3)

{
  (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_delete__1002e92c0);
  return;
}



// ===== deleteForward:  @ 0x10004927d =====

/* Function Stack Size: 0x18 bytes */

void CanvasViewController::deleteForward_(ID param_1,SEL param_2,ID param_3)

{
  (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_delete__1002e92c0);
  return;
}



// ===== cancelOperation:  @ 0x10004928f =====

/* Function Stack Size: 0x18 bytes */

void CanvasViewController::cancelOperation_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _NSLog(&cf_cancelOperationinCanvasViewController);
  puVar1 = PTR__objc_msgSend_10027d560;
  (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_stopCrop_1002e9140);
  (*(code *)puVar1)(param_1,PTR_s_stopEditingText_1002e9138);
  uVar3 = (*(code *)puVar1)(param_1,PTR_s_windowController_1002e7378);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*(code *)puVar1)(uVar3,PTR_s_selectionIndexes_1002e6d20);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  lVar5 = (*(code *)puVar1)(uVar4,PTR_s_count_1002e6488);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  (*(code *)puVar2)(uVar3);
  puVar1 = PTR__objc_msgSend_10027d560;
  if (lVar5 != 0) {
    uVar3 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_windowController_1002e7378);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    uVar4 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSIndexSet_1002eebc8,PTR_s_indexSet_1002e6ba8);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    (*(code *)puVar1)(uVar3,PTR_s_setSelectionIndexes__1002e6bb0,uVar4);
    (*(code *)puVar2)(uVar4);
    (*(code *)puVar2)(uVar3);
    return;
  }
  return;
}



// ===== selectAll:  @ 0x10004939d =====

/* Function Stack Size: 0x18 bytes */

void CanvasViewController::selectAll_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar3 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_windowController_1002e7378);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSIndexSet_1002eebc8;
  uVar4 = (*(code *)puVar1)(param_1,PTR_s_document_1002e69e8);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)puVar1)(uVar4,PTR_s_graphics_1002e6d18);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar6 = (*(code *)puVar1)(uVar5,PTR_s_count_1002e6488);
  uVar6 = (*(code *)puVar1)(puVar2,PTR_s_indexSetWithIndexesInRange__1002e8f60,0,uVar6);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  (*(code *)puVar1)(uVar3,PTR_s_setSelectionIndexes__1002e6bb0,uVar6);
  puVar1 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar6);
  (*(code *)puVar1)(uVar5);
  (*(code *)puVar1)(uVar4);
  (*(code *)puVar1)(uVar3);
  return;
}



// ===== moveLeft:  @ 0x10004946f =====

/* Function Stack Size: 0x18 bytes */

void CanvasViewController::moveLeft_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined *local_40;
  undefined4 local_38;
  undefined4 local_34;
  code *local_30;
  undefined *local_28;
  undefined8 local_20;
  
  puVar2 = PTR__objc_msgSend_10027d560;
  cVar3 = (*(code *)PTR__objc_msgSend_10027d560)
                    (PTR__OBJC_CLASS___NSEvent_1002eebe0,PTR_s_isShiftDown_1002e7130);
  uVar1 = *(undefined8 *)(&DAT_100170f10 + (ulong)(cVar3 == '\0') * 8);
  uVar4 = (*(code *)puVar2)(param_1,PTR_s_selectedGraphics_1002e9260);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  local_40 = PTR___NSConcreteStackBlock_10027d330;
  local_38 = 0xc0000000;
  local_34 = 0;
  local_30 = FUN_100049522;
  local_28 = &DAT_10027fe80;
  local_20 = uVar1;
  (*(code *)puVar2)(uVar4,PTR_s_enumerateObjectsUsingBlock__1002e6d78,&local_40);
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  return;
}



// ===== moveRight:  @ 0x10004955a =====

/* Function Stack Size: 0x18 bytes */

void CanvasViewController::moveRight_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined *local_40;
  undefined4 local_38;
  undefined4 local_34;
  code *local_30;
  undefined *local_28;
  undefined8 local_20;
  
  puVar2 = PTR__objc_msgSend_10027d560;
  cVar3 = (*(code *)PTR__objc_msgSend_10027d560)
                    (PTR__OBJC_CLASS___NSEvent_1002eebe0,PTR_s_isShiftDown_1002e7130);
  uVar1 = *(undefined8 *)(&DAT_100170f10 + (ulong)(cVar3 == '\0') * 8);
  uVar4 = (*(code *)puVar2)(param_1,PTR_s_selectedGraphics_1002e9260);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  local_40 = PTR___NSConcreteStackBlock_10027d330;
  local_38 = 0xc0000000;
  local_34 = 0;
  local_30 = FUN_10004960d;
  local_28 = &DAT_10027fea0;
  local_20 = uVar1;
  (*(code *)puVar2)(uVar4,PTR_s_enumerateObjectsUsingBlock__1002e6d78,&local_40);
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  return;
}



// ===== moveUp:  @ 0x10004963d =====

/* Function Stack Size: 0x18 bytes */

void CanvasViewController::moveUp_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined *local_40;
  undefined4 local_38;
  undefined4 local_34;
  code *local_30;
  undefined *local_28;
  undefined8 local_20;
  
  puVar2 = PTR__objc_msgSend_10027d560;
  cVar3 = (*(code *)PTR__objc_msgSend_10027d560)
                    (PTR__OBJC_CLASS___NSEvent_1002eebe0,PTR_s_isShiftDown_1002e7130);
  uVar1 = *(undefined8 *)(&DAT_100170f10 + (ulong)(cVar3 == '\0') * 8);
  uVar4 = (*(code *)puVar2)(param_1,PTR_s_selectedGraphics_1002e9260);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  local_40 = PTR___NSConcreteStackBlock_10027d330;
  local_38 = 0xc0000000;
  local_34 = 0;
  local_30 = FUN_1000496f0;
  local_28 = &DAT_10027fec0;
  local_20 = uVar1;
  (*(code *)puVar2)(uVar4,PTR_s_enumerateObjectsUsingBlock__1002e6d78,&local_40);
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  return;
}



// ===== moveDown:  @ 0x100049720 =====

/* Function Stack Size: 0x18 bytes */

void CanvasViewController::moveDown_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined *local_40;
  undefined4 local_38;
  undefined4 local_34;
  code *local_30;
  undefined *local_28;
  undefined8 local_20;
  
  puVar2 = PTR__objc_msgSend_10027d560;
  cVar3 = (*(code *)PTR__objc_msgSend_10027d560)
                    (PTR__OBJC_CLASS___NSEvent_1002eebe0,PTR_s_isShiftDown_1002e7130);
  uVar1 = *(undefined8 *)(&DAT_100170f10 + (ulong)(cVar3 == '\0') * 8);
  uVar4 = (*(code *)puVar2)(param_1,PTR_s_selectedGraphics_1002e9260);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  local_40 = PTR___NSConcreteStackBlock_10027d330;
  local_38 = 0xc0000000;
  local_34 = 0;
  local_30 = FUN_1000497d3;
  local_28 = &DAT_10027fee0;
  local_20 = uVar1;
  (*(code *)puVar2)(uVar4,PTR_s_enumerateObjectsUsingBlock__1002e6d78,&local_40);
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  return;
}



// ===== undo:  @ 0x10004980b =====

/* Function Stack Size: 0x18 bytes */

void CanvasViewController::undo_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__objc_msgSend_10027d560;
  if (*(char *)(param_1 + _isMouseDown) != '\0') {
    return;
  }
  uVar2 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_undoManager_1002e6bc8);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)puVar1)(uVar2,PTR_s_undo_1002e92d0);
  (*(code *)PTR__objc_release_10027d590)(uVar2);
  return;
}



// ===== moveGraphic:fromIndex:toIndex:  @ 0x100049856 =====

/* Function Stack Size: 0x28 bytes */

void CanvasViewController::moveGraphic_fromIndex_toIndex_
               (ID param_1,SEL param_2,ID param_3,long_long param_4,long_long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  puVar2 = PTR_s_selectedGraphics_1002e9260;
  if (param_4 != param_5) {
    uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
    puVar1 = PTR__objc_msgSend_10027d560;
    uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,puVar2);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar5 = (*(code *)puVar1)(param_1,PTR_s_undoManager_1002e6bc8);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)puVar1)(uVar5,PTR_s_disableUndoRegistration_1002e8f58);
    (*(code *)PTR__objc_release_10027d590)(uVar5);
    uVar5 = (*(code *)puVar1)(param_1,PTR_s_document_1002e69e8);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    uVar6 = (*(code *)puVar1)(uVar5,PTR_s_mutableGraphics_1002e9248);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)puVar1)(uVar6,PTR_s_removeObjectAtIndex__1002e92d8,param_4);
    puVar2 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar6);
    (*(code *)puVar2)(uVar5);
    uVar5 = (*(code *)puVar1)(param_1,PTR_s_document_1002e69e8);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    uVar6 = (*(code *)puVar1)(uVar5,PTR_s_mutableGraphics_1002e9248);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)puVar1)(uVar6,PTR_s_insertObject_atIndex__1002e8008,param_3,param_5);
    puVar2 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar3);
    (*(code *)puVar2)(uVar6);
    (*(code *)puVar2)(uVar5);
    uVar3 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSMutableIndexSet_1002eef88,PTR_s_alloc_1002e64e8);
    uVar3 = (*(code *)puVar1)(uVar3,PTR_s_init_1002e6538);
    uVar5 = (*(code *)puVar1)(param_1,PTR_s_document_1002e69e8);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    uVar6 = (*(code *)puVar1)(uVar5,PTR_s_graphics_1002e6d18);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    puVar2 = PTR__objc_retain_10027d598;
    local_60 = PTR___NSConcreteStackBlock_10027d330;
    local_58 = 0xc2000000;
    local_54 = 0;
    local_50 = FUN_100049aee;
    local_48 = &DAT_10027ff00;
    local_40 = uVar4;
    uVar4 = (*(code *)PTR__objc_retain_10027d598)();
    local_38 = uVar3;
    uVar3 = (*(code *)puVar2)(uVar3);
    (*(code *)puVar1)(uVar6,PTR_s_enumerateObjectsUsingBlock__1002e6d78,&local_60);
    puVar2 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar6);
    (*(code *)puVar2)(uVar5);
    uVar5 = (*(code *)puVar1)(param_1,PTR_s_windowController_1002e7378);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)puVar1)(uVar5,PTR_s_setSelectionIndexes__1002e6bb0,uVar3);
    (*(code *)puVar2)(uVar5);
    uVar5 = (*(code *)puVar1)(param_1,PTR_s_undoManager_1002e6bc8);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)puVar1)(uVar5,PTR_s_enableUndoRegistration_1002e8f70);
    (*(code *)puVar2)(uVar5);
    (*(code *)puVar2)(local_38);
    (*(code *)puVar2)(local_40);
    (*(code *)puVar2)(uVar3);
    (*(code *)puVar2)(uVar4);
  }
  return;
}



// ===== selectedGraphics  @ 0x100049b7d =====

/* Function Stack Size: 0x10 bytes */

ID CanvasViewController::selectedGraphics(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ID IVar7;
  
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar2 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_document_1002e69e8);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  uVar3 = (*(code *)puVar1)(uVar2,PTR_s_graphics_1002e6d18);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*(code *)puVar1)(param_1,PTR_s_windowController_1002e7378);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)puVar1)(uVar4,PTR_s_selectionIndexes_1002e6d20);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar6 = (*(code *)puVar1)(uVar3,PTR_s_objectsAtIndexes__1002e6d28,uVar5);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  puVar1 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar5);
  (*(code *)puVar1)(uVar4);
  (*(code *)puVar1)(uVar3);
  (*(code *)puVar1)(uVar2);
  IVar7 = _objc_autoreleaseReturnValue(uVar6);
  return IVar7;
}



// ===== graphicClassForTool:  @ 0x100049c44 =====

/* Function Stack Size: 0x18 bytes */

CLASS CanvasViewController::graphicClassForTool_(ID param_1,SEL param_2,long_long param_3)

{
  undefined8 uVar1;
  CLASS CVar2;
  undefined *puVar3;
  
  uVar1 = 0;
  puVar3 = PTR_Arrow_1002ef0d0;
  switch(param_3) {
  case 0:
    puVar3 = PTR_ArrowNormal_1002eee58;
    break;
  case 1:
    puVar3 = PTR_ArrowLine_1002eee60;
    break;
  case 2:
    puVar3 = PTR_OverlayRectangle_1002eee68;
    break;
  case 3:
    puVar3 = PTR_OverlayCircle_1002eee70;
    break;
  case 4:
    puVar3 = PTR_ShapeRectangle_1002eee78;
    break;
  case 5:
    puVar3 = PTR_ShapeCircle_1002eee80;
    break;
  case 6:
    puVar3 = PTR_Pen_1002eee88;
    break;
  case 7:
    puVar3 = PTR_Text_1002eebf0;
    break;
  case 8:
    puVar3 = PTR_Pixelate_1002eee90;
    break;
  case 9:
    puVar3 = PTR_Crop_1002ef0c8;
    break;
  case 0xffffffffffffffff:
    goto switchD_100049c61_caseD_ffffffff;
  }
  uVar1 = (*(code *)PTR__objc_msgSend_10027d560)(puVar3,PTR_s_class_1002e6a28);
switchD_100049c61_caseD_ffffffff:
  CVar2 = _objc_retainAutoreleaseReturnValue(uVar1);
  return CVar2;
}



// ===== createCenteredEmojiTextWithString:  @ 0x100049d08 =====

/* Function Stack Size: 0x18 bytes */

void CanvasViewController::createCenteredEmojiTextWithString_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  ID self;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined4 local_88;
  double local_78;
  undefined8 local_58;
  undefined8 uStack_50;
  double local_48;
  double dStack_40;
  
  uVar4 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar5 = (*(code *)PTR__objc_msgSend_10027d560)(uVar4,PTR_s_userInfo_1002e73b0);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar6 = (*(code *)puVar1)(uVar5,PTR_s_objectForKeyedSubscript__1002e67f0,
                            PTR_cf_CreateEmojiText_1002f8fe0);
  lVar7 = _objc_retainAutoreleasedReturnValue(uVar6);
  (*(code *)PTR__objc_release_10027d590)(uVar5);
  if (lVar7 != 0) {
    uVar5 = (*(code *)puVar1)(uVar4,PTR_s_object_1002e69d8);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    puVar2 = PTR_s_window_1002e6878;
    uVar6 = (*(code *)puVar1)(uVar5,PTR_s_window_1002e6878);
    lVar8 = _objc_retainAutoreleasedReturnValue(uVar6);
    uVar6 = (*(code *)puVar1)(param_1,PTR_s_view_1002e6900);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    uVar9 = (*(code *)PTR__objc_msgSend_10027d560)(uVar6,puVar2);
    lVar10 = _objc_retainAutoreleasedReturnValue(uVar9);
    puVar2 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(lVar10);
    puVar1 = PTR__objc_msgSend_10027d560;
    (*(code *)puVar2)(uVar6);
    (*(code *)puVar2)(lVar8);
    (*(code *)puVar2)(uVar5);
    if (lVar8 == lVar10) {
      uVar5 = (*(code *)puVar1)(param_1,PTR_s_undoManager_1002e6bc8);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      (*(code *)puVar1)(uVar5,PTR_s_beginUndoGrouping_1002e6d88);
      (*(code *)PTR__objc_release_10027d590)(uVar5);
      uVar5 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSUserDefaults_1002eeab0,
                                PTR_s_standardUserDefaults_1002e6570);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      uVar13 = (*(code *)puVar1)(uVar5,PTR_s_floatForKey__1002e9090,PTR_cf_fontSize_1002f8bf0);
      (*(code *)puVar1)(DAT_100171320,uVar5,PTR_s_setFloat_forKey__1002e92e0,
                        PTR_cf_fontSize_1002f8bf0);
      uVar6 = (*(code *)puVar1)(param_1,PTR_s_canvasView_1002e6c08);
      self = _objc_retainAutoreleasedReturnValue(uVar6);
      if (self == 0) {
        local_48 = 0.0;
        dStack_40 = 0.0;
        local_58 = 0;
        uStack_50 = 0;
        local_78 = 0.0;
        local_88 = 0;
      }
      else {
        _objc_msgSend_stret((undefined *)&local_58,self,PTR_s_bounds_1002e6938);
        local_88 = SUB84(local_48 * DAT_100170dc0,0);
        local_78 = DAT_100170dc0 * dStack_40;
      }
      puVar3 = PTR_s_view_1002e6900;
      puVar2 = PTR__objc_release_10027d590;
      (*(code *)PTR__objc_release_10027d590)(self);
      puVar1 = PTR__objc_msgSend_10027d560;
      uVar6 = (*(code *)PTR__objc_msgSend_10027d560)(PTR_Text_1002eebf0,PTR_s_alloc_1002e64e8);
      uVar9 = (*(code *)puVar1)(param_1,puVar3);
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      uVar11 = (*(code *)puVar1)(uVar9,PTR_s_window_1002e6878);
      uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
      uVar6 = (*(code *)puVar1)(local_88,local_78,uVar6,PTR_s_initAtPoint_inWindow__1002e6678,uVar11
                               );
      (*(code *)puVar2)(uVar11);
      (*(code *)puVar2)(uVar9);
      puVar1 = PTR__objc_msgSend_10027d560;
      uVar9 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_document_1002e69e8);
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      uVar11 = (*(code *)puVar1)(uVar9,PTR_s_graphics_1002e6d18);
      uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
      uVar12 = (*(code *)PTR__objc_msgSend_10027d560)
                         (uVar6,PTR_s_proposedIndexInGraphics__1002e91c8,uVar11);
      (*(code *)puVar2)(uVar11);
      (*(code *)puVar2)(uVar9);
      puVar1 = PTR__objc_msgSend_10027d560;
      uVar9 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_document_1002e69e8);
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      uVar11 = (*(code *)puVar1)(uVar9,PTR_s_mutableGraphics_1002e9248);
      uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
      (*(code *)puVar1)(uVar11,PTR_s_insertObject_atIndex__1002e8008,uVar6,uVar12);
      (*(code *)puVar2)(uVar11);
      (*(code *)puVar2)(uVar9);
      (*(code *)puVar1)(param_1,PTR_s_startEditingText__1002e91d8,uVar6);
      uVar9 = (*(code *)puVar1)(param_1,PTR_s_text_1002e83f8);
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      uVar11 = (*(code *)puVar1)(uVar9,PTR_s_textView_1002e92e8);
      uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
      (*(code *)puVar1)(uVar11,PTR_s_insertText__1002e92f0,lVar7);
      (*(code *)puVar2)(uVar11);
      (*(code *)puVar2)(uVar9);
      (*(code *)puVar1)(param_1,PTR_s_stopEditingText_1002e9138);
      (*(code *)puVar1)(uVar13,uVar5,PTR_s_setFloat_forKey__1002e92e0,PTR_cf_fontSize_1002f8bf0);
      puVar3 = PTR_s_undoManager_1002e6bc8;
      uVar9 = (*(code *)puVar1)(param_1,PTR_s_undoManager_1002e6bc8);
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      (*(code *)puVar1)(uVar9,PTR_s_setActionName__1002e6da0,&cf_AddEmoji);
      (*(code *)puVar2)(uVar9);
      uVar9 = (*(code *)puVar1)(param_1,puVar3);
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      (*(code *)puVar1)(uVar9,PTR_s_endUndoGrouping_1002e6da8);
      (*(code *)puVar2)(uVar9);
      puVar3 = PTR_s_canvasView_1002e6c08;
      uVar9 = (*(code *)puVar1)(param_1,PTR_s_canvasView_1002e6c08);
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      (*(code *)puVar1)(uVar9,PTR_s_setNeedsDisplay__1002e6ac8,1);
      (*(code *)puVar2)(uVar9);
      uVar9 = (*(code *)puVar1)(param_1,puVar3);
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      uVar11 = (*(code *)puVar1)(uVar9,PTR_s_window_1002e6878);
      uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
      (*(code *)puVar1)(uVar11,PTR_s_makeKeyAndOrderFront__1002e68c0,param_1);
      (*(code *)puVar2)(uVar11);
      (*(code *)puVar2)(uVar9);
      (*(code *)puVar2)(uVar6);
      (*(code *)puVar2)(uVar5);
    }
  }
  puVar1 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(lVar7);
  (*(code *)puVar1)(uVar4);
  return;
}



// ===== videoPlayerForDocument:  @ 0x10004a202 =====

/* Function Stack Size: 0x18 bytes */

ID CanvasViewController::videoPlayerForDocument_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ID IVar9;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  undefined8 local_38;
  
  puVar3 = PTR__OBJC_CLASS___AVPlayerItem_1002ef0e0;
  puVar2 = PTR__OBJC_CLASS___AVPlayer_1002ef0d8;
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(param_3,PTR_s_video_1002e8078);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)puVar1)(uVar4,PTR_s_asset_1002e8080);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar6 = (*(code *)puVar1)(puVar3,PTR_s_playerItemWithAsset__1002e92f8,uVar5);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  uVar7 = (*(code *)puVar1)(puVar2,PTR_s_playerWithPlayerItem__1002e9300,uVar6);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar6);
  (*(code *)puVar2)(uVar5);
  (*(code *)puVar2)(uVar4);
  puVar1 = PTR__objc_msgSend_10027d560;
  (*(code *)PTR__objc_msgSend_10027d560)(uVar7,PTR_s_setActionAtItemEnd__1002e9308,2);
  uVar4 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSNotificationCenter_1002eead0,
                            PTR_s_defaultCenter_1002e65d0);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)puVar1)(uVar4,PTR_s_rac_addObserverForName_object__1002e82d0,
                            *(undefined8 *)PTR__AVPlayerItemDidPlayToEndTimeNotification_10027d030,0
                           );
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  local_58 = PTR___NSConcreteStackBlock_10027d330;
  local_50 = 0xc2000000;
  local_4c = 0;
  local_48 = FUN_10004a3b1;
  local_40 = &DAT_10027ff30;
  uVar6 = (*(code *)PTR__objc_retain_10027d598)(uVar7);
  local_38 = uVar6;
  uVar7 = (*(code *)puVar1)(uVar5,PTR_s_filter__1002e9310,&local_58);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  uVar8 = (*(code *)PTR__objc_msgSend_10027d560)
                    (uVar7,PTR_s_subscribeNext__1002e70d8,&PTR___NSConcreteGlobalBlock_10027ff80);
  uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
  (*(code *)puVar2)(uVar8);
  (*(code *)puVar2)(uVar7);
  (*(code *)puVar2)(uVar5);
  (*(code *)puVar2)(uVar4);
  (*(code *)puVar2)(local_38);
  IVar9 = _objc_autoreleaseReturnValue(uVar6);
  return IVar9;
}



// ===== videoViewWithPlayer:video:  @ 0x10004a4c1 =====

/* Function Stack Size: 0x20 bytes */

ID CanvasViewController::videoViewWithPlayer_video_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ID IVar6;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  puVar1 = PTR__objc_retain_10027d598;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  puVar2 = PTR__OBJC_CLASS___AVPlayerLayer_1002ef0e8;
  uVar4 = (*(code *)puVar1)(param_4);
  uVar5 = (*(code *)PTR__objc_msgSend_10027d560)
                    (puVar2,PTR_s_playerLayerWithPlayer__1002e9320,uVar3);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar3);
  IVar6 = _objc_retainAutoreleasedReturnValue(uVar5);
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar3 = (*(code *)PTR__objc_msgSend_10027d560)(param_4,PTR_s_displaySize_1002e6800);
  (*(code *)puVar2)(uVar4);
  local_58 = 0;
  uStack_50 = 0;
  local_48 = uVar3;
  (*(code *)puVar1)(IVar6,PTR_s_setBounds__1002e8628);
  uVar3 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSView_1002eec08,PTR_s_alloc_1002e64e8);
  if (IVar6 == 0) {
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_78,IVar6,PTR_s_bounds_1002e6938);
  }
  uVar3 = (*(code *)puVar1)(uVar3,PTR_s_initWithFrame__1002e6930);
  (*(code *)puVar1)(uVar3,PTR_s_setLayer__1002e78f8,IVar6);
  (*(code *)puVar1)(uVar3,PTR_s_setWantsLayer__1002e7260,1);
  (*(code *)PTR__objc_release_10027d590)(IVar6);
  IVar6 = _objc_autoreleaseReturnValue(uVar3);
  return IVar6;
}



// ===== observeValueForKeyPath:ofObject:change:context:  @ 0x10004a644 =====

/* Function Stack Size: 0x30 bytes */

void CanvasViewController::observeValueForKeyPath_ofObject_change_context_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,void *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  ID self;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ID IVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  objc_super local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  puVar1 = PTR__objc_retain_10027d598;
  uVar4 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  self = (*(code *)puVar1)(param_4);
  uVar5 = (*(code *)puVar1)(param_5);
  puVar15 = PTR_s_objectForKey__1002e6550;
  puVar1 = PTR_s_isEqualToString__1002e6410;
  if (PTR_LOOP_1002f8ba0 == param_6) {
    uVar9 = (*(code *)PTR__objc_msgSend_10027d560)
                      (uVar5,PTR_s_objectForKey__1002e6550,
                       *(undefined8 *)PTR__NSKeyValueChangeOldKey_10027d180);
    lVar6 = _objc_retainAutoreleasedReturnValue(uVar9);
    puVar1 = PTR__objc_msgSend_10027d560;
    if (lVar6 != 0) {
      (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_stopObservingGraphics__1002e8e88,lVar6);
      lVar7 = (*(code *)puVar1)(lVar6,PTR_s_count_1002e6488);
      puVar15 = PTR__objc_release_10027d590;
      if (lVar7 != 0) {
        lVar13 = 0;
        do {
          uVar9 = (*(code *)puVar1)(param_1,PTR_s_canvasView_1002e6c08);
          uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
          uVar10 = (*(code *)puVar1)(lVar6,PTR_s_objectAtIndex__1002e6a80,lVar13);
          IVar8 = _objc_retainAutoreleasedReturnValue(uVar10);
          if (IVar8 == 0) {
            local_48 = 0;
            uStack_40 = 0;
            local_58 = 0;
            uStack_50 = 0;
          }
          else {
            _objc_msgSend_stret((undefined *)&local_58,IVar8,PTR_s_drawingBounds_1002e83f0);
          }
          (*(code *)PTR__objc_msgSend_10027d560)(uVar9,PTR_s_setNeedsDisplayInRect__1002e9280);
          (*(code *)puVar15)(IVar8);
          (*(code *)puVar15)(uVar9);
          lVar13 = lVar13 + 1;
        } while (lVar7 != lVar13);
      }
      puVar15 = PTR_s_text_1002e83f8;
      uVar9 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_text_1002e83f8);
      lVar7 = _objc_retainAutoreleasedReturnValue(uVar9);
      if (lVar7 == 0) {
        (*(code *)PTR__objc_release_10027d590)(0);
      }
      else {
        uVar9 = (*(code *)puVar1)(param_1,puVar15);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        cVar3 = (*(code *)puVar1)(lVar6,PTR_s_containsObject__1002e6ea0,uVar9);
        (*(code *)PTR__objc_release_10027d590)(uVar9);
        (*(code *)PTR__objc_release_10027d590)(lVar7);
        if (cVar3 != '\0') {
          (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_stopEditingText_1002e9138);
        }
      }
      uVar9 = (*(code *)puVar1)(param_1,PTR_s_windowController_1002e7378);
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      uVar10 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSIndexSet_1002eebc8,PTR_s_indexSet_1002e6ba8);
      uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
      (*(code *)puVar1)(uVar9,PTR_s_setSelectionIndexes__1002e6bb0,uVar10);
      puVar1 = PTR__objc_release_10027d590;
      (*(code *)PTR__objc_release_10027d590)(uVar10);
      (*(code *)puVar1)(uVar9);
      puVar15 = PTR_s_objectForKey__1002e6550;
    }
    uVar9 = (*(code *)PTR__objc_msgSend_10027d560)
                      (uVar5,puVar15,*(undefined8 *)PTR__NSKeyValueChangeNewKey_10027d170);
    lVar7 = _objc_retainAutoreleasedReturnValue(uVar9);
    puVar1 = PTR__objc_msgSend_10027d560;
    if (lVar7 != 0) {
      (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_startObservingGraphics__1002e9018,lVar7);
      lVar13 = (*(code *)puVar1)(lVar7,PTR_s_count_1002e6488);
      puVar15 = PTR__objc_release_10027d590;
      if (lVar13 != 0) {
        lVar14 = 0;
        do {
          uVar9 = (*(code *)puVar1)(param_1,PTR_s_canvasView_1002e6c08);
          uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
          uVar10 = (*(code *)puVar1)(lVar7,PTR_s_objectAtIndex__1002e6a80,lVar14);
          IVar8 = _objc_retainAutoreleasedReturnValue(uVar10);
          if (IVar8 == 0) {
            local_68 = 0;
            uStack_60 = 0;
            local_78 = 0;
            uStack_70 = 0;
          }
          else {
            _objc_msgSend_stret((undefined *)&local_78,IVar8,PTR_s_drawingBounds_1002e83f0);
          }
          (*(code *)PTR__objc_msgSend_10027d560)(uVar9,PTR_s_setNeedsDisplayInRect__1002e9280);
          (*(code *)puVar15)(IVar8);
          (*(code *)puVar15)(uVar9);
          lVar14 = lVar14 + 1;
        } while (lVar13 != lVar14);
      }
    }
    puVar1 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(lVar7);
    (*(code *)puVar1)(lVar6);
  }
  else if (PTR_LOOP_1002f8bb0 == param_6) {
    cVar3 = (*(code *)PTR__objc_msgSend_10027d560)
                      (uVar4,PTR_s_isEqualToString__1002e6410,PTR_cf_drawingBounds_1002f8ae0);
    if (cVar3 == '\0') {
      cVar3 = (*(code *)PTR__objc_msgSend_10027d560)(uVar4,puVar1,PTR_cf_drawingContents_1002f8ad8);
      if (cVar3 != '\0') {
        if (self == 0) {
          local_88 = 0;
          uStack_80 = 0;
          local_98 = 0;
          uStack_90 = 0;
        }
        else {
          _objc_msgSend_stret((undefined *)&local_98,self,PTR_s_drawingBounds_1002e83f0);
        }
        puVar1 = PTR__objc_msgSend_10027d560;
        uVar9 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_canvasView_1002e6c08);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)puVar1)(uVar9,PTR_s_setNeedsDisplayInRect__1002e9280);
        (*(code *)PTR__objc_release_10027d590)(uVar9);
      }
    }
    else {
      uVar9 = (*(code *)PTR__objc_msgSend_10027d560)
                        (uVar5,PTR_s_objectForKey__1002e6550,
                         *(undefined8 *)PTR__NSKeyValueChangeOldKey_10027d180);
      IVar8 = _objc_retainAutoreleasedReturnValue(uVar9);
      if (IVar8 == 0) {
        local_88 = 0;
        uStack_80 = 0;
        local_98 = 0;
        uStack_90 = 0;
      }
      else {
        _objc_msgSend_stret((undefined *)&local_98,IVar8,PTR_s_rectValue_1002e9328);
      }
      puVar15 = PTR__objc_release_10027d590;
      (*(code *)PTR__objc_release_10027d590)(IVar8);
      puVar2 = PTR_s_canvasView_1002e6c08;
      puVar1 = PTR__objc_msgSend_10027d560;
      uVar9 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_canvasView_1002e6c08);
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      (*(code *)puVar1)(uVar9,PTR_s_setNeedsDisplayInRect__1002e9280);
      (*(code *)puVar15)(uVar9);
      uVar9 = (*(code *)puVar1)(uVar5,PTR_s_objectForKey__1002e6550,
                                *(undefined8 *)PTR__NSKeyValueChangeNewKey_10027d170);
      IVar8 = _objc_retainAutoreleasedReturnValue(uVar9);
      if (IVar8 == 0) {
        local_a8 = 0;
        uStack_a0 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
      }
      else {
        _objc_msgSend_stret((undefined *)&local_b8,IVar8,PTR_s_rectValue_1002e9328);
      }
      (*(code *)puVar15)(IVar8);
      uVar9 = (*(code *)puVar1)(param_1,puVar2);
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      (*(code *)puVar1)(uVar9,PTR_s_setNeedsDisplayInRect__1002e9280);
      (*(code *)puVar15)(uVar9);
    }
  }
  else if (PTR_LOOP_1002f8ba8 == param_6) {
    cVar3 = (*(code *)PTR__objc_msgSend_10027d560)(uVar4,PTR_s_isEqualTo__1002e7028,&cf_scale);
    puVar1 = PTR__objc_msgSend_10027d560;
    if (cVar3 != '\0') {
      uVar9 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_containerDocumentView_1002e9108);
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      uVar10 = (*(code *)puVar1)(param_1,PTR_s_document_1002e69e8);
      uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
      puVar15 = PTR_s_image_1002e69f0;
      uVar11 = (*(code *)puVar1)(uVar10,PTR_s_image_1002e69f0);
      uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
      uVar12 = (*(code *)puVar1)(uVar11,puVar15);
      uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
      local_c8 = (*(code *)puVar1)(uVar12,PTR_s_size_1002e66a8);
      local_d8 = *(undefined4 *)PTR__NSZeroPoint_10027d308;
      uStack_d4 = *(undefined4 *)(PTR__NSZeroPoint_10027d308 + 4);
      uStack_d0 = *(undefined4 *)(PTR__NSZeroPoint_10027d308 + 8);
      uStack_cc = *(undefined4 *)(PTR__NSZeroPoint_10027d308 + 0xc);
      (*(code *)puVar1)(uVar9,PTR_s_setFrame__1002e6500);
      puVar1 = PTR__objc_release_10027d590;
      (*(code *)PTR__objc_release_10027d590)(uVar12);
      (*(code *)puVar1)(uVar11);
      (*(code *)puVar1)(uVar10);
      (*(code *)puVar1)(uVar9);
    }
  }
  else {
    local_e8.super_class = (class_t *)PTR_CanvasViewController_1002ef8d0;
    local_e8.receiver = param_1;
    _objc_msgSendSuper2(&local_e8,PTR_s_observeValueForKeyPath_ofObject__1002e63d0,uVar4,self,uVar5,
                        param_6);
  }
  puVar1 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar5);
  (*(code *)puVar1)(self);
  (*(code *)puVar1)(uVar4);
  return;
}



// ===== startObservingGraphics:  @ 0x10004ae82 =====

/* Function Stack Size: 0x18 bytes */

void CanvasViewController::startObservingGraphics_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar3 = PTR__OBJC_CLASS___NSIndexSet_1002eebc8;
  puVar2 = PTR_s_count_1002e6488;
  uVar4 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar5 = (*(code *)PTR__objc_msgSend_10027d560)(param_3,puVar2);
  uVar5 = (*(code *)puVar1)(puVar3,PTR_s_indexSetWithIndexesInRange__1002e8f60,0,uVar5);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  puVar2 = PTR_s_addObserver_toObjectsAtIndexes_f_1002e9330;
  (*(code *)puVar1)(param_3,PTR_s_addObserver_toObjectsAtIndexes_f_1002e9330,param_1,uVar5,
                    PTR_cf_drawingBounds_1002f8ae0,3,PTR_LOOP_1002f8bb0);
  (*(code *)puVar1)(param_3,puVar2,param_1,uVar5,PTR_cf_drawingContents_1002f8ad8,0,
                    PTR_LOOP_1002f8bb0);
  puVar1 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  (*(code *)puVar1)(uVar5);
  return;
}



// ===== stopObservingGraphics:  @ 0x10004af5d =====

/* Function Stack Size: 0x18 bytes */

void CanvasViewController::stopObservingGraphics_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar3 = PTR__OBJC_CLASS___NSIndexSet_1002eebc8;
  puVar2 = PTR_s_count_1002e6488;
  uVar4 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar5 = (*(code *)PTR__objc_msgSend_10027d560)(param_3,puVar2);
  uVar5 = (*(code *)puVar1)(puVar3,PTR_s_indexSetWithIndexesInRange__1002e8f60,0,uVar5);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  puVar2 = PTR_s_removeObserver_fromObjectsAtInde_1002e9338;
  (*(code *)puVar1)(param_3,PTR_s_removeObserver_fromObjectsAtInde_1002e9338,param_1,uVar5,
                    PTR_cf_drawingContents_1002f8ad8);
  (*(code *)puVar1)(param_3,puVar2,param_1,uVar5,PTR_cf_drawingBounds_1002f8ae0);
  puVar1 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  (*(code *)puVar1)(uVar5);
  return;
}



// ===== currentToolChangedNotification:  @ 0x10004b016 =====

/* Function Stack Size: 0x18 bytes */

void CanvasViewController::currentToolChangedNotification_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(uVar3,PTR_s_object_1002e69d8);
  lVar5 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar4 = (*(code *)puVar1)(param_1,PTR_s_windowController_1002e7378);
  lVar6 = _objc_retainAutoreleasedReturnValue(uVar4);
  puVar1 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(lVar6);
  (*(code *)puVar1)(lVar5);
  puVar1 = PTR__objc_msgSend_10027d560;
  if (lVar5 == lVar6) {
    uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(uVar3,PTR_s_userInfo_1002e73b0);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar7 = (*(code *)puVar1)(uVar4,PTR_s_objectForKeyedSubscript__1002e67f0,
                              PTR_cf_kCurrentToolChangedOldToolKey_1002f8528);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    uVar8 = (*(code *)puVar1)(uVar7,PTR_s_integerValue_1002e6740);
    puVar2 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar7);
    (*(code *)puVar2)(uVar4);
    uVar4 = (*(code *)puVar1)(uVar3,PTR_s_userInfo_1002e73b0);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar7 = (*(code *)puVar1)(uVar4,PTR_s_objectForKeyedSubscript__1002e67f0,
                              PTR_cf_kCurrentToolChangedNewToolKey_1002f8530);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    uVar9 = (*(code *)puVar1)(uVar7,PTR_s_integerValue_1002e6740);
    puVar1 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar7);
    (*(code *)puVar1)(uVar4);
    *(bool *)(param_1 + _overrideCreationBlock) = (uVar9 & 0xfffffffffffffffe) == 6;
    if (uVar8 != uVar9) {
      (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_stopCrop_1002e9140);
    }
    (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_checkAndSetMouseCursor_1002e9298);
  }
  (*(code *)PTR__objc_release_10027d590)(uVar3);
  return;
}



// ===== selectionIndexesChangedNotification:  @ 0x10004b1a5 =====

/* Function Stack Size: 0x18 bytes */

void CanvasViewController::selectionIndexesChangedNotification_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar3 = (*(code *)PTR__objc_msgSend_10027d560)(param_3,PTR_s_object_1002e69d8);
  lVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar3 = (*(code *)puVar1)(param_1,PTR_s_windowController_1002e7378);
  lVar5 = _objc_retainAutoreleasedReturnValue(uVar3);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(lVar5);
  (*(code *)puVar2)(lVar4);
  if (lVar4 != lVar5) {
    return;
  }
  uVar3 = (*(code *)puVar1)(param_1,PTR_s_canvasView_1002e6c08);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar6 = (*(code *)puVar1)(param_1,PTR_s_windowController_1002e7378);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  uVar7 = (*(code *)puVar1)(uVar6,PTR_s_selectionIndexes_1002e6d20);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  (*(code *)puVar1)(uVar3,PTR_s_setSelectionIndexes__1002e6bb0,uVar7);
  (*(code *)PTR__objc_release_10027d590)(uVar7);
  (*(code *)PTR__objc_release_10027d590)(uVar6);
  (*(code *)PTR__objc_release_10027d590)(uVar3);
  uVar3 = (*(code *)puVar1)(param_1,PTR_s_canvasView_1002e6c08);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)puVar1)(uVar3,PTR_s_setNeedsDisplay__1002e6ac8,1);
  (*(code *)PTR__objc_release_10027d590)(uVar3);
  return;
}



// ===== startEditingText:  @ 0x10004b2cb =====

/* Function Stack Size: 0x18 bytes */

void CanvasViewController::startEditingText_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ID self;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  puVar2 = PTR_s_setText__1002e9340;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  puVar1 = PTR__objc_msgSend_10027d560;
  (*(code *)PTR__objc_msgSend_10027d560)(param_1,puVar2,uVar3);
  uVar4 = (*(code *)puVar1)(param_1,PTR_s_windowController_1002e7378);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  puVar2 = PTR__OBJC_CLASS___NSIndexSet_1002eebc8;
  uVar5 = (*(code *)puVar1)(param_1,PTR_s_document_1002e69e8);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar6 = (*(code *)puVar1)(uVar5,PTR_s_graphics_1002e6d18);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  uVar7 = (*(code *)puVar1)(param_3,PTR_s_indexInGraphics__1002e91f0,uVar6);
  uVar7 = (*(code *)puVar1)(puVar2,PTR_s_indexSetWithIndex__1002e8d18,uVar7);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  (*(code *)puVar1)(uVar4,PTR_s_setSelectionIndexes__1002e6bb0,uVar7);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar7);
  (*(code *)puVar2)(uVar6);
  (*(code *)puVar2)(uVar5);
  (*(code *)puVar2)(uVar4);
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(param_3,PTR_s_newEditingView_1002e9348);
  (*(code *)puVar2)(uVar3);
  uVar3 = (*(code *)puVar1)(param_1,PTR_s_canvasView_1002e6c08);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)puVar1)(uVar3,PTR_s_addSubview__1002e6920,uVar4);
  (*(code *)puVar2)(uVar3);
  uVar3 = (*(code *)puVar1)(param_1,PTR_s_canvasView_1002e6c08);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar5 = (*(code *)puVar1)(uVar3,PTR_s_window_1002e6878);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)PTR__objc_msgSend_10027d560)(uVar5,PTR_s_makeFirstResponder__1002e6e58,uVar4);
  (*(code *)puVar2)(uVar5);
  (*(code *)puVar2)(uVar3);
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar3 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_canvasView_1002e6c08);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar5 = (*(code *)puVar1)(param_1,PTR_s_text_1002e83f8);
  self = _objc_retainAutoreleasedReturnValue(uVar5);
  if (self == 0) {
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_58,self,PTR_s_drawingBounds_1002e83f0);
  }
  (*(code *)PTR__objc_msgSend_10027d560)(uVar3,PTR_s_setNeedsDisplayInRect__1002e9280);
  (*(code *)puVar2)(self);
  (*(code *)puVar2)(uVar3);
  (*(code *)puVar2)(uVar4);
  return;
}



// ===== stopEditingText  @ 0x10004b51c =====

/* Function Stack Size: 0x10 bytes */

void CanvasViewController::stopEditingText(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar2 = PTR_s_text_1002e83f8;
  uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_text_1002e83f8);
  lVar5 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)PTR__objc_release_10027d590)(lVar5);
  puVar1 = PTR__objc_msgSend_10027d560;
  if (lVar5 != 0) {
    uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,puVar2);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar6 = (*(code *)puVar1)(uVar4,PTR_s_textView_1002e92e8);
    lVar5 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)PTR__objc_release_10027d590)(uVar4);
    uVar4 = (*(code *)puVar1)(param_1,PTR_s_canvasView_1002e6c08);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar6 = (*(code *)puVar1)(uVar4,PTR_s_window_1002e6878);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    uVar7 = (*(code *)puVar1)(uVar6,PTR_s_firstResponder_1002e6c98);
    lVar8 = _objc_retainAutoreleasedReturnValue(uVar7);
    puVar1 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(lVar8);
    (*(code *)puVar1)(uVar6);
    (*(code *)puVar1)(uVar4);
    puVar1 = PTR__objc_msgSend_10027d560;
    (*(code *)PTR__objc_msgSend_10027d560)(lVar5,PTR_s_removeFromSuperview_1002e7280);
    if (lVar8 == lVar5) {
      uVar4 = (*(code *)puVar1)(param_1,PTR_s_canvasView_1002e6c08);
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      uVar6 = (*(code *)puVar1)(uVar4,PTR_s_window_1002e6878);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      (*(code *)puVar1)(uVar6,PTR_s_makeFirstResponder__1002e6e58,param_1);
      puVar2 = PTR__objc_release_10027d590;
      (*(code *)PTR__objc_release_10027d590)(uVar6);
      (*(code *)puVar2)(uVar4);
    }
    uVar4 = (*(code *)puVar1)(param_1,PTR_s_text_1002e83f8);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    cVar3 = (*(code *)puVar1)(uVar4,PTR_s_finalizeEditingView_1002e9350);
    (*(code *)PTR__objc_release_10027d590)(uVar4);
    puVar2 = PTR_s_text_1002e83f8;
    if (cVar3 == '\0') {
      uVar4 = (*(code *)puVar1)(param_1,PTR_s_document_1002e69e8);
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      uVar6 = (*(code *)puVar1)(uVar4,PTR_s_graphics_1002e6d18);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      uVar7 = (*(code *)puVar1)(param_1,puVar2);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      lVar8 = (*(code *)puVar1)(uVar6,PTR_s_indexOfObject__1002e6cd8,uVar7);
      puVar2 = PTR__objc_release_10027d590;
      (*(code *)PTR__objc_release_10027d590)(uVar7);
      (*(code *)puVar2)(uVar6);
      (*(code *)puVar2)(uVar4);
      puVar1 = PTR__objc_msgSend_10027d560;
      if (lVar8 != 0x7fffffffffffffff) {
        uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_document_1002e69e8);
        uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
        uVar6 = (*(code *)puVar1)(uVar4,PTR_s_mutableGraphics_1002e9248);
        uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
        uVar7 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSIndexSet_1002eebc8,
                                  PTR_s_indexSetWithIndex__1002e8d18,lVar8);
        uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
        (*(code *)puVar1)(uVar6,PTR_s_removeObjectsAtIndexes__1002e9028,uVar7);
        (*(code *)puVar2)(uVar7);
        (*(code *)puVar2)(uVar6);
        (*(code *)puVar2)(uVar4);
      }
    }
    (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_setText__1002e9340,0);
    (*(code *)PTR__objc_release_10027d590)(lVar5);
    return;
  }
  return;
}



// ===== doCrop  @ 0x10004b7f9 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Function Stack Size: 0x10 bytes */

void CanvasViewController::doCrop(ID param_1,SEL param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  ID self;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  code *local_e8;
  undefined *local_e0;
  uint local_d8;
  uint uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  ulong local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulong uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  uVar11 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_crop_1002e6d98);
  self = _objc_retainAutoreleasedReturnValue(uVar11);
  if (self == 0) {
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_58,self,PTR_s_frame_1002e64b0);
  }
  puVar6 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(self);
  puVar5 = PTR__objc_msgSend_10027d560;
  uVar11 = *(undefined8 *)PTR__NSZeroPoint_10027d308;
  uVar16 = *(undefined8 *)(PTR__NSZeroPoint_10027d308 + 8);
  uVar8 = local_48._4_4_;
  uVar9 = (undefined4)uStack_40;
  uVar10 = uStack_40._4_4_;
  uVar4 = (undefined4)local_48;
  (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_stopCrop_1002e9140);
  uVar12 = (*(code *)puVar5)(param_1,PTR_s_undoManager_1002e6bc8);
  uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
  (*(code *)puVar5)(uVar12,PTR_s_disableUndoRegistration_1002e8f58);
  (*(code *)puVar6)(uVar12);
  uVar12 = (*(code *)puVar5)(param_1,PTR_s_imageView_1002e6438);
  uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
  uVar13 = (*(code *)puVar5)(param_1,PTR_s_document_1002e69e8);
  uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
  uVar14 = (*(code *)puVar5)(uVar13,PTR_s_image_1002e69f0);
  uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
  uVar15 = (*(code *)puVar5)(uVar14,PTR_s_cropToRect__1002e9358);
  uVar15 = _objc_retainAutoreleasedReturnValue(uVar15);
  (*(code *)puVar5)(uVar12,PTR_s_setImage__1002e6448,uVar15);
  puVar6 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar15);
  (*(code *)puVar6)(uVar14);
  (*(code *)puVar6)(uVar13);
  (*(code *)puVar6)(uVar12);
  uVar12 = (*(code *)puVar5)(param_1,PTR_s_document_1002e69e8);
  uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
  uVar13 = (*(code *)puVar5)(uVar12,PTR_s_video_1002e8078);
  uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
  (*(code *)puVar5)(uVar13,PTR_s_setCropRect__1002e67b8);
  (*(code *)puVar6)(uVar13);
  (*(code *)puVar6)(uVar12);
  uVar12 = (*(code *)puVar5)(param_1,PTR_s_containerDocumentView_1002e9108);
  uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
  uStack_64 = uVar8;
  uStack_60 = uVar9;
  uStack_5c = uVar10;
  local_78 = uVar11;
  uStack_70 = uVar16;
  local_68 = uVar4;
  (*(code *)puVar5)(uVar12,PTR_s_setFrame__1002e6500);
  (*(code *)puVar6)(uVar12);
  puVar6 = PTR_s_alloc_1002e64e8;
  uVar11 = (*(code *)puVar5)(PTR__OBJC_CLASS___NSMutableIndexSet_1002eef88,PTR_s_alloc_1002e64e8);
  puVar7 = PTR_s_init_1002e6538;
  uVar11 = (*(code *)puVar5)(uVar11,PTR_s_init_1002e6538);
  uVar16 = (*(code *)puVar5)(PTR__OBJC_CLASS___NSMutableIndexSet_1002eef88,puVar6);
  uVar16 = (*(code *)puVar5)(uVar16,puVar7);
  uVar12 = (*(code *)puVar5)(param_1,PTR_s_document_1002e69e8);
  uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
  uVar13 = (*(code *)puVar5)(uVar12,PTR_s_graphics_1002e6d18);
  uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
  puVar5 = PTR__objc_retain_10027d598;
  local_c8 = PTR___NSConcreteStackBlock_10027d330;
  local_c0 = 0xc2000000;
  local_bc = 0;
  local_b8 = FUN_10004bd4c;
  local_b0 = &DAT_10027ffa0;
  local_80 = uStack_40;
  local_88 = local_48;
  local_90 = uStack_50;
  local_98 = local_58;
  local_a8 = uVar16;
  uVar16 = (*(code *)PTR__objc_retain_10027d598)(uVar16);
  puVar6 = PTR_s_enumerateObjectsUsingBlock__1002e6d78;
  local_a0 = uVar11;
  uVar11 = (*(code *)puVar5)();
  puVar5 = PTR__objc_msgSend_10027d560;
  (*(code *)PTR__objc_msgSend_10027d560)(uVar13,puVar6,&local_c8);
  puVar6 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar13);
  (*(code *)puVar6)(uVar12);
  uVar2 = (uint)local_58 ^ _DAT_100170c70;
  uVar3 = local_58._4_4_ ^ _UNK_100170c74;
  uVar1 = uStack_50 ^ _UNK_100170c78;
  uVar12 = (*(code *)puVar5)(param_1,PTR_s_document_1002e69e8);
  uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
  uVar13 = (*(code *)puVar5)(uVar12,PTR_s_graphics_1002e6d18);
  uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
  uVar14 = (*(code *)puVar5)(uVar13,PTR_s_objectsAtIndexes__1002e6d28,uVar16);
  uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
  local_f8 = PTR___NSConcreteStackBlock_10027d330;
  local_f0 = 0xc0000000;
  local_ec = 0;
  local_e8 = FUN_10004be95;
  local_e0 = &DAT_10027ffd0;
  local_d8 = uVar2;
  uStack_d4 = uVar3;
  uStack_d0 = (int)uVar1;
  uStack_cc = (int)(uVar1 >> 0x20);
  (*(code *)puVar5)(uVar14,PTR_s_enumerateObjectsUsingBlock__1002e6d78,&local_f8);
  puVar6 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar14);
  (*(code *)puVar6)(uVar13);
  (*(code *)puVar6)(uVar12);
  uVar12 = (*(code *)puVar5)(param_1,PTR_s_document_1002e69e8);
  uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
  uVar13 = (*(code *)puVar5)(uVar12,PTR_s_mutableGraphics_1002e9248);
  uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
  (*(code *)puVar5)(uVar13,PTR_s_removeObjectsAtIndexes__1002e9028,uVar11);
  puVar6 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar13);
  (*(code *)puVar6)(uVar12);
  uVar12 = (*(code *)puVar5)(param_1,PTR_s_undoManager_1002e6bc8);
  uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
  (*(code *)puVar5)(uVar12,PTR_s_enableUndoRegistration_1002e8f70);
  (*(code *)puVar6)(uVar12);
  uVar12 = (*(code *)puVar5)(param_1,PTR_s_undoManager_1002e6bc8);
  uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
  (*(code *)puVar5)(uVar12,PTR_s_removeAllActions_1002e9360);
  (*(code *)puVar6)(uVar12);
  (*(code *)puVar6)(local_a0);
  (*(code *)puVar6)(local_a8);
  (*(code *)puVar6)(uVar11);
  (*(code *)puVar6)(uVar16);
  return;
}



// ===== stopCrop  @ 0x10004bec7 =====

/* Function Stack Size: 0x10 bytes */

void CanvasViewController::stopCrop(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar3 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_crop_1002e6d98);
  lVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)PTR__objc_release_10027d590)(lVar4);
  puVar2 = PTR_s_canvasView_1002e6c08;
  puVar1 = PTR__objc_msgSend_10027d560;
  if (lVar4 != 0) {
    uVar3 = (*(code *)PTR__objc_msgSend_10027d560)(param_1);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    (*(code *)puVar1)(uVar3,PTR_s_setNeedsDisplay__1002e6ac8,1);
    (*(code *)PTR__objc_release_10027d590)(uVar3);
    uVar3 = (*(code *)puVar1)(param_1,puVar2);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    uVar5 = (*(code *)puVar1)(uVar3,PTR_s_window_1002e6878);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    uVar6 = (*(code *)puVar1)(param_1,puVar2);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)puVar1)(uVar5,PTR_s_makeFirstResponder__1002e6e58,uVar6);
    puVar2 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar6);
    (*(code *)puVar2)(uVar5);
    (*(code *)puVar2)(uVar3);
    (*(code *)puVar1)(param_1,PTR_s_setCrop__1002e9228,0);
    return;
  }
  return;
}



// ===== windowController  @ 0x10004bfd6 =====

/* Function Stack Size: 0x10 bytes */

ID CanvasViewController::windowController(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID IVar5;
  
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar2 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_view_1002e6900);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  uVar3 = (*(code *)puVar1)(uVar2,PTR_s_window_1002e6878);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*(code *)puVar1)(uVar3,PTR_s_windowController_1002e7378);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  puVar1 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar3);
  (*(code *)puVar1)(uVar2);
  IVar5 = _objc_autoreleaseReturnValue(uVar4);
  return IVar5;
}



// ===== setCreatingGraphic:  @ 0x10004c050 =====

/* Function Stack Size: 0x18 bytes */

void CanvasViewController::setCreatingGraphic_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__objc_retain_10027d598;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar4 = *(undefined8 *)(param_1 + _creatingGraphic);
  *(undefined8 *)(param_1 + _creatingGraphic) = uVar3;
  uVar3 = (*(code *)puVar1)(uVar3);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_canvasView_1002e6c08);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)puVar1)(uVar4,PTR_s_setCreatingGraphic__1002e9238,uVar3);
  (*(code *)puVar2)(uVar3);
  (*(code *)puVar2)(uVar4);
  return;
}



// ===== setSelection:  @ 0x10004c0d5 =====

/* Function Stack Size: 0x18 bytes */

void CanvasViewController::setSelection_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__objc_retain_10027d598;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar4 = *(undefined8 *)(param_1 + _selection);
  *(undefined8 *)(param_1 + _selection) = uVar3;
  uVar3 = (*(code *)puVar1)(uVar3);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_canvasView_1002e6c08);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)puVar1)(uVar4,PTR_s_setSelection__1002e91f8,uVar3);
  (*(code *)puVar2)(uVar3);
  (*(code *)puVar2)(uVar4);
  return;
}



// ===== setText:  @ 0x10004c15a =====

/* Function Stack Size: 0x18 bytes */

void CanvasViewController::setText_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__objc_retain_10027d598;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar4 = *(undefined8 *)(param_1 + _text);
  *(undefined8 *)(param_1 + _text) = uVar3;
  uVar3 = (*(code *)puVar1)(uVar3);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_canvasView_1002e6c08);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)puVar1)(uVar4,PTR_s_setText__1002e9340,uVar3);
  (*(code *)puVar2)(uVar3);
  (*(code *)puVar2)(uVar4);
  return;
}



// ===== setCrop:  @ 0x10004c1df =====

/* Function Stack Size: 0x18 bytes */

void CanvasViewController::setCrop_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__objc_retain_10027d598;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar4 = *(undefined8 *)(param_1 + _crop);
  *(undefined8 *)(param_1 + _crop) = uVar3;
  uVar3 = (*(code *)puVar1)(uVar3);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_canvasView_1002e6c08);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)puVar1)(uVar4,PTR_s_setCrop__1002e9228,uVar3);
  (*(code *)puVar2)(uVar3);
  (*(code *)puVar2)(uVar4);
  return;
}



// ===== acceptsFirstResponder  @ 0x10004c264 =====

/* Function Stack Size: 0x10 bytes */

char CanvasViewController::acceptsFirstResponder(ID param_1,SEL param_2)

{
  return '\x01';
}



// ===== snapshotRect  @ 0x10004c26f =====

/* Function Stack Size: 0x10 bytes */

CGRect * CanvasViewController::snapshotRect(CGRect *__return_storage_ptr__,ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ID IVar4;
  ID self;
  undefined8 uVar5;
  undefined8 in_R8;
  undefined8 in_R9;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  puVar2 = PTR_s_canvasView_1002e6c08;
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar3 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_canvasView_1002e6c08);
  IVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar3 = (*(code *)puVar1)(param_1,puVar2);
  self = _objc_retainAutoreleasedReturnValue(uVar3);
  if (self == 0) {
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_78,self,PTR_s_visibleRect_1002e9368);
  }
  if (IVar4 == 0) {
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_58,IVar4,PTR_s_convertRect_toView__1002e9370,0,in_R8,
                        in_R9,local_78,uStack_70,local_68,uStack_60);
  }
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(self);
  (*(code *)puVar2)(IVar4);
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar3 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_view_1002e6900);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar5 = (*(code *)puVar1)(uVar3,PTR_s_window_1002e6878);
  IVar4 = _objc_retainAutoreleasedReturnValue(uVar5);
  if (IVar4 == 0) {
    local_88 = 0.0;
    dStack_80 = 0.0;
    local_98 = 0.0;
    dStack_90 = 0.0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_98,IVar4,PTR_s_convertRectToScreen__1002e9378);
  }
  (*(code *)puVar2)(IVar4);
  (*(code *)puVar2)(uVar3);
  (__return_storage_ptr__->field1_0x10).field1_0x8 = dStack_80;
  (__return_storage_ptr__->field1_0x10).field0_0x0 = local_88;
  (__return_storage_ptr__->field0_0x0).field1_0x8 = dStack_90;
  (__return_storage_ptr__->field0_0x0).field0_0x0 = local_98;
  return __return_storage_ptr__;
}



// ===== snapshot  @ 0x10004c40b =====

/* Function Stack Size: 0x10 bytes */

ID CanvasViewController::snapshot(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ID IVar7;
  
  puVar3 = PTR_s_windowController_1002e7378;
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar4 = (*(code *)PTR__objc_msgSend_10027d560)();
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)puVar1)(uVar4,PTR_s_selectionIndexes_1002e6d20);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  uVar4 = (*(code *)puVar1)(param_1,puVar3);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar6 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSIndexSet_1002eebc8,PTR_s_indexSet_1002e6ba8);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  (*(code *)puVar1)(uVar4,PTR_s_setSelectionIndexes__1002e6bb0,uVar6);
  (*(code *)puVar2)(uVar6);
  (*(code *)puVar2)(uVar4);
  (*(code *)puVar1)(param_1,PTR_s_stopEditingText_1002e9138);
  (*(code *)puVar1)(param_1,PTR_s_stopCrop_1002e9140);
  uVar4 = (*(code *)puVar1)(param_1,PTR_s_containerDocumentView_1002e9108);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar6 = (*(code *)puVar1)(uVar4,PTR_s_snapshotVisibleRectIncludingSubv_1002e9380);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  (*(code *)puVar2)(uVar4);
  uVar4 = (*(code *)puVar1)(param_1,PTR_s_windowController_1002e7378);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)puVar1)(uVar4,PTR_s_setSelectionIndexes__1002e6bb0,uVar5);
  (*(code *)puVar2)(uVar4);
  (*(code *)puVar2)(uVar5);
  IVar7 = _objc_autoreleaseReturnValue(uVar6);
  return IVar7;
}



// ===== document  @ 0x10004c54b =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Function Stack Size: 0x10 bytes */

ID CanvasViewController::document(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  
  uVar1 = _objc_loadWeakRetained(param_1 + __document);
  IVar2 = _objc_autoreleaseReturnValue(uVar1);
  return IVar2;
}



// ===== canvasView  @ 0x10004c564 =====

/* Function Stack Size: 0x10 bytes */

ID CanvasViewController::canvasView(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + _canvasView);
}



// ===== setCanvasView:  @ 0x10004c575 =====

/* Function Stack Size: 0x18 bytes */

void CanvasViewController::setCanvasView_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = _canvasView;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = uVar3;
  (*(code *)PTR__objc_release_10027d590)(uVar1);
  return;
}



// ===== videoPlayer  @ 0x10004c5a1 =====

/* Function Stack Size: 0x10 bytes */

ID CanvasViewController::videoPlayer(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + _videoPlayer);
}



// ===== setVideoPlayer:  @ 0x10004c5b2 =====

/* Function Stack Size: 0x18 bytes */

void CanvasViewController::setVideoPlayer_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = _videoPlayer;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = uVar3;
  (*(code *)PTR__objc_release_10027d590)(uVar1);
  return;
}



// ===== scrollView  @ 0x10004c5de =====

/* Function Stack Size: 0x10 bytes */

ID CanvasViewController::scrollView(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + _scrollView);
}



// ===== setScrollView:  @ 0x10004c5ef =====

/* Function Stack Size: 0x18 bytes */

void CanvasViewController::setScrollView_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = _scrollView;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = uVar3;
  (*(code *)PTR__objc_release_10027d590)(uVar1);
  return;
}



// ===== containerDocumentView  @ 0x10004c61b =====

/* Function Stack Size: 0x10 bytes */

ID CanvasViewController::containerDocumentView(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + _containerDocumentView);
}



// ===== setContainerDocumentView:  @ 0x10004c62c =====

/* Function Stack Size: 0x18 bytes */

void CanvasViewController::setContainerDocumentView_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = _containerDocumentView;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = uVar3;
  (*(code *)PTR__objc_release_10027d590)(uVar1);
  return;
}



// ===== imageView  @ 0x10004c658 =====

/* Function Stack Size: 0x10 bytes */

ID CanvasViewController::imageView(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + _imageView);
}



// ===== setImageView:  @ 0x10004c669 =====

/* Function Stack Size: 0x18 bytes */

void CanvasViewController::setImageView_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = _imageView;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = uVar3;
  (*(code *)PTR__objc_release_10027d590)(uVar1);
  return;
}



// ===== videoView  @ 0x10004c695 =====

/* Function Stack Size: 0x10 bytes */

ID CanvasViewController::videoView(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + _videoView);
}



// ===== setVideoView:  @ 0x10004c6a6 =====

/* Function Stack Size: 0x18 bytes */

void CanvasViewController::setVideoView_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = _videoView;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = uVar3;
  (*(code *)PTR__objc_release_10027d590)(uVar1);
  return;
}



// ===== text  @ 0x10004c6d2 =====

/* Function Stack Size: 0x10 bytes */

ID CanvasViewController::text(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + _text);
}



// ===== creatingGraphic  @ 0x10004c6e3 =====

/* Function Stack Size: 0x10 bytes */

ID CanvasViewController::creatingGraphic(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + _creatingGraphic);
}



// ===== crop  @ 0x10004c6f4 =====

/* Function Stack Size: 0x10 bytes */

ID CanvasViewController::crop(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + _crop);
}



// ===== selection  @ 0x10004c705 =====

/* Function Stack Size: 0x10 bytes */

ID CanvasViewController::selection(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + _selection);
}



// ===== .cxx_destruct  @ 0x10004c716 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Function Stack Size: 0x10 bytes */

void CanvasViewController::_cxx_destruct(ID param_1,SEL param_2)

{
  _objc_storeStrong(_selection + param_1,0);
  _objc_storeStrong(_crop + param_1,0);
  _objc_storeStrong(_creatingGraphic + param_1,0);
  _objc_storeStrong(_text + param_1,0);
  _objc_storeStrong(_videoView + param_1,0);
  _objc_storeStrong(_imageView + param_1,0);
  _objc_storeStrong(_containerDocumentView + param_1,0);
  _objc_storeStrong(_scrollView + param_1,0);
  _objc_storeStrong(_videoPlayer + param_1,0);
  _objc_storeStrong(_canvasView + param_1,0);
  _objc_destroyWeak(param_1 + __document);
  return;
}



// ===== indexInGraphics:  @ 0x10004c82e =====

/* Function Stack Size: 0x18 bytes */

long_long Graphic::indexInGraphics_(ID param_1,SEL param_2,ID param_3)

{
  long_long lVar1;
  
  lVar1 = (*(code *)PTR__objc_msgSend_10027d560)(param_3,PTR_s_indexOfObject__1002e6cd8,param_1);
  return lVar1;
}



// ===== proposedIndexInGraphics:  @ 0x10004c849 =====

/* Function Stack Size: 0x18 bytes */

long_long Graphic::proposedIndexInGraphics_(ID param_1,SEL param_2,ID param_3)

{
  long_long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  undefined8 uVar5;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined8 *local_58;
  undefined8 local_50;
  undefined8 *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  
  puVar3 = PTR__objc_retain_10027d598;
  uVar5 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  puVar2 = PTR__objc_msgSend_10027d560;
  cVar4 = (*(code *)PTR__objc_msgSend_10027d560)(uVar5,PTR_s_containsObject__1002e6ea0,param_1);
  local_50 = 0;
  local_58 = &local_50;
  local_40 = 0x20000000;
  local_3c = 0x20;
  local_38 = 0;
  local_80 = PTR___NSConcreteStackBlock_10027d330;
  local_78 = 0xc2000000;
  local_74 = 0;
  local_70 = FUN_10004c962;
  local_68 = &DAT_10027fff0;
  local_48 = local_58;
  local_60 = (*(code *)puVar3)(param_1);
  (*(code *)puVar2)(uVar5,PTR_s_enumerateObjectsWithOptions_usin_1002e9390,2,&local_80);
  if (cVar4 != '\0') {
    local_48[3] = local_48[3] + -1;
  }
  puVar2 = PTR__objc_release_10027d590;
  lVar1 = local_48[3];
  (*(code *)PTR__objc_release_10027d590)(local_60);
  __Block_object_dispose(&local_50,8);
  (*(code *)puVar2)(uVar5);
  return lVar1;
}



// ===== handleUnderPoint:  @ 0x10004cbc0 =====

/* Function Stack Size: 0x20 bytes */

long_long Graphic::handleUnderPoint_(ID param_1,SEL param_2,CGPoint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long_long lVar8;
  undefined8 local_b0 [16];
  
  puVar2 = PTR_s_class_1002e6a28;
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_class_1002e6a28);
  uVar4 = (*(code *)puVar1)(uVar4,PTR_s_hiddenHandles_1002e93a0);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)puVar1)(param_1,puVar2);
  lVar6 = (*(code *)puVar1)(uVar5,PTR_s_numberOfHandles_1002e8488);
  lVar8 = 0xffffffffffffffff;
  if (0 < lVar6) {
    puVar7 = local_b0 + 1;
    lVar8 = 0;
    do {
      uVar5 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSNumber_1002eeaa0,
                                PTR_s_numberWithInteger__1002e6560,lVar8);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      cVar3 = (*(code *)puVar1)(uVar4,PTR_s_containsObject__1002e6ea0,uVar5);
      (*(code *)PTR__objc_release_10027d590)(uVar5);
      if (cVar3 == '\0') {
        _objc_msgSend_stret((undefined *)local_b0,param_1,PTR_s_handles_1002e6518);
        cVar3 = (*(code *)PTR__objc_msgSend_10027d560)
                          (puVar7[-1],*puVar7,param_3.field0_0x0,param_3.field1_0x8,param_1,
                           PTR_s_isHandleAtPoint_underPoint__1002e93a8);
        if (cVar3 != '\0') goto LAB_10004cd11;
      }
      lVar8 = lVar8 + 1;
      uVar5 = (*(code *)puVar1)(param_1,PTR_s_class_1002e6a28);
      lVar6 = (*(code *)puVar1)(uVar5,PTR_s_numberOfHandles_1002e8488);
      puVar7 = puVar7 + 2;
    } while ((long)lVar8 < lVar6);
    lVar8 = 0xffffffffffffffff;
  }
LAB_10004cd11:
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  return lVar8;
}



// ===== isHandleAtPoint:underPoint:  @ 0x10004cd33 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Function Stack Size: 0x30 bytes */

char Graphic::isHandleAtPoint_underPoint_(ID param_1,SEL param_2,CGPoint param_3,CGPoint param_4)

{
  char cVar1;
  
  cVar1 = _NSPointInRect(param_4.field0_0x0._0_4_,param_4.field1_0x8);
  return cVar1;
}



// ===== drawHandlesInView:  @ 0x10004cd96 =====

/* Function Stack Size: 0x18 bytes */

void Graphic::drawHandlesInView_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 local_b0 [16];
  
  uVar4 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  puVar2 = PTR_s_class_1002e6a28;
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar5 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_class_1002e6a28);
  uVar5 = (*(code *)puVar1)(uVar5,PTR_s_hiddenHandles_1002e93a0);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar6 = (*(code *)puVar1)(param_1,puVar2);
  lVar7 = (*(code *)puVar1)(uVar6,PTR_s_numberOfHandles_1002e8488);
  if (0 < lVar7) {
    puVar9 = local_b0 + 1;
    lVar7 = 0;
    do {
      uVar6 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSNumber_1002eeaa0,
                                PTR_s_numberWithInteger__1002e6560,lVar7);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      cVar3 = (*(code *)puVar1)(uVar5,PTR_s_containsObject__1002e6ea0,uVar6);
      (*(code *)PTR__objc_release_10027d590)(uVar6);
      if (cVar3 == '\0') {
        _objc_msgSend_stret((undefined *)local_b0,param_1,PTR_s_handles_1002e6518);
        (*(code *)PTR__objc_msgSend_10027d560)
                  (puVar9[-1],*puVar9,param_1,PTR_s_drawHandle_inView_atPoint__1002e93b0,lVar7,uVar4
                  );
      }
      lVar7 = lVar7 + 1;
      uVar6 = (*(code *)puVar1)(param_1,PTR_s_class_1002e6a28);
      lVar8 = (*(code *)puVar1)(uVar6,PTR_s_numberOfHandles_1002e8488);
      puVar9 = puVar9 + 2;
    } while (lVar7 < lVar8);
  }
  puVar1 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar5);
  (*(code *)puVar1)(uVar4);
  return;
}



// ===== drawHandle:inView:atPoint:  @ 0x10004cefd =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Function Stack Size: 0x30 bytes */

void Graphic::drawHandle_inView_atPoint_
               (ID param_1,SEL param_2,long_long param_3,ID param_4,CGPoint param_5)

{
  double dVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  
  dVar1 = param_5.field1_0x8 + _UNK_100171338;
  local_58._8_4_ = SUB84(dVar1,0);
  local_58._0_8_ = param_5.field0_0x0 + _DAT_100171330;
  local_58._12_4_ = (int)((ulong)dVar1 >> 0x20);
  local_48 = CONCAT44(_UNK_100171024,_DAT_100171020);
  uStack_40 = CONCAT44(_UNK_10017102c,_UNK_100171028);
  if (param_4 == 0) {
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_78,param_4,PTR_s_centerScanRect__1002e93b8);
  }
  puVar2 = PTR__objc_msgSend_10027d560;
  uStack_40 = uStack_60;
  local_48 = local_68;
  local_58._0_8_ = local_78;
  local_58._8_8_ = uStack_70;
  (*(code *)PTR__objc_msgSend_10027d560)
            (PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98,PTR_s_saveGraphicsState_1002e6a70);
  uVar4 = (*(code *)puVar2)(PTR__OBJC_CLASS___NSBezierPath_1002eea90,
                            PTR_s_bezierPathWithOvalInRect__1002e86d0);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)puVar2)(0,uVar4,PTR_s_setLineWidth__1002e6530);
  uVar5 = (*(code *)puVar2)(PTR__OBJC_CLASS___NSColor_1002eea80,PTR_s_blackColor_1002e6970);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)puVar2)(uVar5,PTR_s_set_1002e6510);
  puVar3 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar5);
  (*(code *)puVar2)(uVar4,PTR_s_fill_1002e6aa8);
  uVar5 = (*(code *)puVar2)(PTR__OBJC_CLASS___NSShadow_1002eef38,PTR_s_alloc_1002e64e8);
  uVar5 = (*(code *)puVar2)(uVar5,PTR_s_init_1002e6538);
  uVar6 = (*(code *)puVar2)(0,0,0,DAT_100171190,PTR__OBJC_CLASS___NSColor_1002eea80,
                            PTR_s_colorWithDeviceRed_green_blue_al_1002e84a0);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  (*(code *)puVar2)(uVar5,PTR_s_setShadowColor__1002e86e0,uVar6);
  (*(code *)puVar3)(uVar6);
  (*(code *)puVar2)((int)DAT_100170c38,uVar5,PTR_s_setShadowBlurRadius__1002e86e8);
  (*(code *)puVar2)(0,DAT_100170e18,uVar5,PTR_s_setShadowOffset__1002e90a0);
  (*(code *)puVar2)(uVar5,PTR_s_set_1002e6510);
  (*(code *)puVar2)(uVar4,PTR_s_stroke_1002e6a90);
  (*(code *)puVar2)(PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98,
                    PTR_s_restoreGraphicsState_1002e6ab0);
  puVar3 = PTR_s_saveGraphicsState_1002e6a70;
  (*(code *)puVar2)(PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98,PTR_s_saveGraphicsState_1002e6a70)
  ;
  uVar6 = (*(code *)puVar2)((int)DAT_100171360,DAT_100171368,DAT_100170c08,DAT_100170c08,
                            PTR__OBJC_CLASS___NSColor_1002eea80,
                            PTR_s_colorWithDeviceRed_green_blue_al_1002e84a0);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  (*(code *)puVar2)(uVar6,PTR_s_set_1002e6510);
  (*(code *)PTR__objc_release_10027d590)(uVar6);
  (*(code *)puVar2)(uVar4,PTR_s_fill_1002e6aa8);
  (*(code *)puVar2)(PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98,
                    PTR_s_restoreGraphicsState_1002e6ab0);
  (*(code *)puVar2)(PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98,puVar3);
  uVar6 = (*(code *)puVar2)(PTR__OBJC_CLASS___NSBezierPath_1002eea90,
                            PTR_s_bezierPathWithOvalInRect__1002e86d0);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  uVar7 = (*(code *)puVar2)(PTR__OBJC_CLASS___NSColor_1002eea80,PTR_s_whiteColor_1002e6fc0);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  (*(code *)puVar2)(uVar7,PTR_s_set_1002e6510);
  puVar3 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar7);
  (*(code *)puVar2)((int)DAT_100170c20,uVar6,PTR_s_setLineWidth__1002e6530);
  (*(code *)puVar2)(uVar6,PTR_s_stroke_1002e6a90);
  (*(code *)puVar2)(PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98,
                    PTR_s_restoreGraphicsState_1002e6ab0);
  (*(code *)puVar3)(uVar6);
  (*(code *)puVar3)(uVar5);
  (*(code *)puVar3)(uVar4);
  return;
}



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



// ===== viewDidLoad  @ 0x10005538f =====

/* Function Stack Size: 0x10 bytes */

void ContentViewController::viewDidLoad(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined local_50 [32];
  
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar3 = (*(code *)PTR__objc_msgSend_10027d560)
                    (PTR_CanvasViewController_1002ef120,PTR_s_alloc_1002e64e8);
  uVar3 = (*(code *)puVar1)(uVar3,PTR_s_init_1002e6538);
  (*(code *)puVar1)(param_1,PTR_s_setCanvasViewController__1002e97b8,uVar3);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar3);
  uVar3 = (*(code *)puVar1)(param_1,PTR_s_canvasViewController_1002e6eb0);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*(code *)puVar1)(uVar3,PTR_s_view_1002e6900);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  _objc_msgSend_stret(local_50,param_1,PTR_s_canvasViewFrame_1002e97c0);
  (*(code *)puVar1)(uVar4,PTR_s_setFrame__1002e6500);
  (*(code *)puVar2)(uVar4);
  (*(code *)puVar2)(uVar3);
  puVar2 = PTR_s_view_1002e6900;
  uVar3 = (*(code *)puVar1)(param_1,PTR_s_view_1002e6900);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*(code *)puVar1)(param_1,PTR_s_canvasViewController_1002e6eb0);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)puVar1)(uVar4,puVar2);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)puVar1)(uVar3,PTR_s_addSubview__1002e6920,uVar5);
  puVar1 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar5);
  (*(code *)puVar1)(uVar4);
  (*(code *)puVar1)(uVar3);
  return;
}



// ===== dealloc  @ 0x1000554e3 =====

/* Function Stack Size: 0x10 bytes */

void ContentViewController::dealloc(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  objc_super local_30;
  
  _NSLog(&cf_dealloc___,param_1);
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar2 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_canvasViewController_1002e6eb0);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)puVar1)(uVar2,PTR_s_setDocument__1002e6c30,0);
  (*(code *)PTR__objc_release_10027d590)(uVar2);
  (*(code *)puVar1)(param_1,PTR_s_setCanvasViewController__1002e97b8,0);
  local_30.super_class = (class_t *)PTR_ContentViewController_1002ef918;
  local_30.receiver = param_1;
  _objc_msgSendSuper2(&local_30,PTR_s_dealloc_1002e63c0);
  return;
}



// ===== acceptsFirstResponder  @ 0x100055574 =====

/* Function Stack Size: 0x10 bytes */

char ContentViewController::acceptsFirstResponder(ID param_1,SEL param_2)

{
  return '\x01';
}



// ===== setDocument:  @ 0x10005557f =====

/* Function Stack Size: 0x18 bytes */

void ContentViewController::setDocument_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = _document + param_1;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  _objc_storeWeak(lVar5,param_3);
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_canvasViewController_1002e6eb0);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)puVar1)(uVar4,PTR_s_setDocument__1002e6c30,uVar3);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar3);
  (*(code *)puVar2)(uVar4);
  uVar3 = (*(code *)puVar1)(param_1,PTR_s_document_1002e69e8);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  lVar5 = (*(code *)puVar1)(uVar3,PTR_s_documentType_1002e6f10);
  (*(code *)puVar2)(uVar3);
  if (lVar5 == 1) {
    uVar3 = (*(code *)puVar1)(param_1,PTR_s_canvasViewController_1002e6eb0);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    uVar4 = (*(code *)puVar1)(uVar3,PTR_s_videoPlayer_1002e7f28);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    (*(code *)puVar1)(param_1,PTR_s_createVideoControlsWithPlayer__1002e97c8,uVar4);
    puVar1 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar4);
    (*(code *)puVar1)(uVar3);
    return;
  }
  return;
}



// ===== canvasViewFrame  @ 0x10005569e =====

/* Function Stack Size: 0x10 bytes */

CGRect * ContentViewController::canvasViewFrame
                   (CGRect *__return_storage_ptr__,ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  undefined8 uVar4;
  long lVar5;
  ID self;
  ID self_00;
  double dVar6;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  double dStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  double local_48;
  undefined8 uStack_40;
  
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_document_1002e69e8);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  lVar5 = (*(code *)puVar1)(uVar4,PTR_s_documentType_1002e6f10);
  dVar6 = DAT_1001713f0;
  if (lVar5 != 1) {
    dVar6 = 0.0;
  }
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  puVar2 = PTR_s_view_1002e6900;
  uVar4 = (*(code *)puVar1)(param_1,PTR_s_view_1002e6900);
  self = _objc_retainAutoreleasedReturnValue(uVar4);
  if (self == 0) {
    local_48 = 0.0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_58,self,PTR_s_bounds_1002e6938);
  }
  dVar3 = local_48;
  uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,puVar2);
  self_00 = _objc_retainAutoreleasedReturnValue(uVar4);
  if (self_00 == 0) {
    local_68 = 0;
    dStack_60 = 0.0;
    local_78 = 0;
    uStack_70 = 0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_78,self_00,PTR_s_bounds_1002e6938);
  }
  (__return_storage_ptr__->field0_0x0).field0_0x0 = 0.0;
  (__return_storage_ptr__->field0_0x0).field1_0x8 = dVar6;
  (__return_storage_ptr__->field1_0x10).field0_0x0 = dVar3;
  (__return_storage_ptr__->field1_0x10).field1_0x8 = dStack_60 - dVar6;
  puVar1 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(self_00);
  (*(code *)puVar1)(self);
  return __return_storage_ptr__;
}



// ===== desiredContentSize  @ 0x1000557db =====

/* Function Stack Size: 0x10 bytes */

CGSize __thiscall
ContentViewController::desiredContentSize(ContentViewController *this,ID param_1,SEL param_2)

{
  CGSize CVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ID self;
  double dVar8;
  double in_XMM1_Qa;
  double local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  double dStack_40;
  
  puVar2 = PTR__objc_msgSend_10027d560;
  uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(this,PTR_s_document_1002e69e8);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  puVar3 = PTR_s_image_1002e69f0;
  uVar5 = (*(code *)puVar2)(uVar4,PTR_s_image_1002e69f0);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar6 = (*(code *)puVar2)(uVar5,puVar3);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  dVar8 = (double)(*(code *)puVar2)(uVar6,PTR_s_size_1002e66a8);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar6);
  (*(code *)puVar2)(uVar5);
  (*(code *)puVar2)(uVar4);
  puVar3 = PTR_s_videoControlsView_1002e97d0;
  uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(this,PTR_s_videoControlsView_1002e97d0);
  lVar7 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)puVar2)(lVar7);
  local_60 = in_XMM1_Qa;
  if (lVar7 != 0) {
    uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(this,puVar3);
    self = _objc_retainAutoreleasedReturnValue(uVar4);
    if (self == 0) {
      local_48 = 0;
      dStack_40 = 0.0;
      local_58 = 0;
      uStack_50 = 0;
    }
    else {
      _objc_msgSend_stret((undefined *)&local_58,self,PTR_s_frame_1002e64b0);
    }
    local_60 = in_XMM1_Qa + dStack_40;
    (*(code *)PTR__objc_release_10027d590)(self);
  }
  CVar1.field1_0x8 = local_60;
  CVar1.field0_0x0 = dVar8;
  return CVar1;
}



// ===== createVideoControlsWithPlayer:  @ 0x10005590b =====

/* Function Stack Size: 0x18 bytes */

void ContentViewController::createVideoControlsWithPlayer_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ID self;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined local_50 [32];
  
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_canvasViewController_1002e6eb0);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)puVar1)(uVar4,PTR_s_view_1002e6900);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  _objc_msgSend_stret(local_50,param_1,PTR_s_canvasViewFrame_1002e97c0);
  (*(code *)puVar1)(uVar5,PTR_s_setFrame__1002e6500);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar5);
  (*(code *)puVar2)(uVar4);
  uVar4 = (*(code *)puVar1)(PTR_VideoControlsView_1002ef128,PTR_s_alloc_1002e64e8);
  uVar5 = (*(code *)puVar1)(param_1,PTR_s_view_1002e6900);
  self = _objc_retainAutoreleasedReturnValue(uVar5);
  if (self == 0) {
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_98,self,PTR_s_bounds_1002e6938);
  }
  local_78 = 0;
  uStack_70 = 0;
  local_60 = 0x404f000000000000;
  local_68 = local_88;
  uVar4 = (*(code *)puVar1)(uVar4,PTR_s_initWithFrame_player__1002e86a0,uVar3);
  (*(code *)puVar1)(param_1,PTR_s_setVideoControlsView__1002e97d8,uVar4);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  (*(code *)puVar2)(self);
  uVar4 = (*(code *)puVar1)(param_1,PTR_s_videoControlsView_1002e97d0);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)puVar1)(uVar4,PTR_s_setAutoresizingMask__1002e6fb8,0x22);
  (*(code *)puVar2)(uVar4);
  uVar4 = (*(code *)puVar1)(param_1,PTR_s_view_1002e6900);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)puVar1)(param_1,PTR_s_videoControlsView_1002e97d0);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)puVar1)(uVar4,PTR_s_addSubview__1002e6920,uVar5);
  (*(code *)puVar2)(uVar5);
  (*(code *)puVar2)(uVar4);
  (*(code *)puVar2)(uVar3);
  return;
}



// ===== startDragMode:data:fileURL:  @ 0x100055b34 =====

/* Function Stack Size: 0x28 bytes */

void ContentViewController::startDragMode_data_fileURL_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined local_50 [32];
  
  puVar1 = PTR__objc_retain_10027d598;
  uVar5 = (*(code *)PTR__objc_retain_10027d598)(param_4);
  uVar6 = (*(code *)puVar1)(param_5);
  uVar7 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_dragViewController_1002e6c80);
  lVar8 = _objc_retainAutoreleasedReturnValue(uVar7);
  (*(code *)PTR__objc_release_10027d590)(lVar8);
  if (lVar8 == 0) {
    uVar7 = (*(code *)PTR__objc_msgSend_10027d560)
                      (PTR__OBJC_CLASS___NSUserDefaults_1002eeab0,
                       PTR_s_standardUserDefaults_1002e6570);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    puVar1 = PTR__objc_msgSend_10027d560;
    if (param_3 == 0) {
      (*(code *)PTR__objc_msgSend_10027d560)
                (uVar7,PTR_s_setBool_forKey__1002e68e8,1,PTR_cf_kDragProTipKey_1002f8488);
    }
    else {
      uVar9 = (*(code *)PTR__objc_msgSend_10027d560)
                        (PTR_ProTipController_1002eeb40,PTR_s_sharedController_1002e6378);
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      (*(code *)puVar1)(uVar9,PTR_s_showDragProTip_1002e97e0);
      (*(code *)PTR__objc_release_10027d590)(uVar9);
    }
    puVar1 = PTR__objc_msgSend_10027d560;
    uVar9 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_view_1002e6900);
    uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
    uVar10 = (*(code *)puVar1)(uVar9,PTR_s_window_1002e6878);
    uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
    uVar11 = (*(code *)puVar1)(uVar10,PTR_s_firstResponder_1002e6c98);
    uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
    uVar12 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSTextView_1002ef110,PTR_s_class_1002e6a28);
    cVar4 = (*(code *)puVar1)(uVar11,PTR_s_isKindOfClass__1002e6ef8,uVar12);
    puVar2 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar11);
    (*(code *)puVar2)(uVar10);
    (*(code *)puVar2)(uVar9);
    puVar1 = PTR__objc_msgSend_10027d560;
    if ((cVar4 == '\0') || (param_3 != 0)) {
      uVar9 = (*(code *)PTR__objc_msgSend_10027d560)
                        (PTR_DragViewController_1002ef130,PTR_s_alloc_1002e64e8);
      uVar9 = (*(code *)puVar1)(uVar9,PTR_s_init_1002e6538);
      (*(code *)puVar1)(param_1,PTR_s_setDragViewController__1002e97e8,uVar9);
      (*(code *)puVar2)(uVar9);
      uVar9 = (*(code *)puVar1)(param_1,PTR_s_dragViewController_1002e6c80);
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      uVar10 = (*(code *)puVar1)(param_1,PTR_s_document_1002e69e8);
      uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
      (*(code *)puVar1)(uVar9,PTR_s_setDocument__1002e6c30,uVar10);
      (*(code *)puVar2)(uVar10);
      (*(code *)puVar2)(uVar9);
      puVar3 = PTR_s_dragViewController_1002e6c80;
      uVar9 = (*(code *)puVar1)(param_1,PTR_s_dragViewController_1002e6c80);
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      (*(code *)puVar1)(uVar9,PTR_s_setDelegate__1002e6390,param_1);
      (*(code *)puVar2)(uVar9);
      uVar9 = (*(code *)puVar1)(param_1,puVar3);
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      (*(code *)puVar1)(uVar9,PTR_s_setData__1002e8230,uVar5);
      (*(code *)puVar2)(uVar9);
      uVar9 = (*(code *)puVar1)(param_1,puVar3);
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      (*(code *)puVar1)(uVar9,PTR_s_setFileURL__1002e7430,uVar6);
      (*(code *)puVar2)(uVar9);
      uVar9 = (*(code *)puVar1)(param_1,puVar3);
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      (*(code *)puVar1)(uVar9,PTR_s_setWasInitializedWithAltKey__1002e97f0,param_3 == 0);
      (*(code *)puVar2)(uVar9);
      uVar9 = (*(code *)puVar1)(param_1,puVar3);
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      uVar10 = (*(code *)puVar1)(param_1,PTR_s_view_1002e6900);
      uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
      _objc_msgSend_stret(local_50,param_1,PTR_s_canvasViewFrame_1002e97c0);
      (*(code *)puVar1)(uVar9,PTR_s_addViewToView_withFrame__1002e97f8,uVar10);
      puVar2 = PTR__objc_release_10027d590;
      (*(code *)PTR__objc_release_10027d590)(uVar10);
      (*(code *)puVar2)(uVar9);
      uVar9 = (*(code *)puVar1)(param_1,PTR_s_canvasViewController_1002e6eb0);
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      puVar3 = PTR_s_view_1002e6900;
      uVar10 = (*(code *)puVar1)(uVar9,PTR_s_view_1002e6900);
      uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
      (*(code *)puVar1)(uVar10,PTR_s_removeFromSuperview_1002e7280);
      puVar2 = PTR__objc_release_10027d590;
      (*(code *)PTR__objc_release_10027d590)(uVar10);
      (*(code *)puVar2)(uVar9);
      uVar9 = (*(code *)puVar1)(param_1,puVar3);
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      uVar10 = (*(code *)puVar1)(uVar9,PTR_s_window_1002e6878);
      uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
      uVar11 = (*(code *)puVar1)(param_1,PTR_s_dragViewController_1002e6c80);
      uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
      uVar12 = (*(code *)puVar1)(uVar11,puVar3);
      uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
      (*(code *)puVar1)(uVar10,PTR_s_makeFirstResponder__1002e6e58,uVar12);
      puVar2 = PTR__objc_release_10027d590;
      (*(code *)PTR__objc_release_10027d590)(uVar12);
      (*(code *)puVar2)(uVar11);
      (*(code *)puVar2)(uVar10);
      (*(code *)puVar2)(uVar9);
      uVar9 = (*(code *)puVar1)(param_1,PTR_s_dragViewController_1002e6c80);
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      (*(code *)puVar1)(uVar9,PTR_s_startTransition_1002e9800);
      (*(code *)puVar2)(uVar9);
    }
    (*(code *)PTR__objc_release_10027d590)(uVar7);
  }
  puVar1 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar6);
  (*(code *)puVar1)(uVar5);
  return;
}



// ===== endDragMode:  @ 0x100055fd9 =====

/* Function Stack Size: 0x18 bytes */

void ContentViewController::endDragMode_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar2 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_dragViewController_1002e6c80);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)puVar1)(uVar2,PTR_s_endTransition_1002e8290);
  (*(code *)PTR__objc_release_10027d590)(uVar2);
  return;
}



// ===== dragModeDidEnd  @ 0x100056016 =====

/* Function Stack Size: 0x10 bytes */

void ContentViewController::dragModeDidEnd(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined local_50 [32];
  
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar3 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_canvasViewController_1002e6eb0);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*(code *)puVar1)(uVar3,PTR_s_view_1002e6900);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  _objc_msgSend_stret(local_50,param_1,PTR_s_canvasViewFrame_1002e97c0);
  (*(code *)puVar1)(uVar4,PTR_s_setFrame__1002e6500);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  (*(code *)puVar2)(uVar3);
  puVar2 = PTR_s_view_1002e6900;
  uVar3 = (*(code *)puVar1)(param_1,PTR_s_view_1002e6900);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*(code *)puVar1)(param_1,PTR_s_canvasViewController_1002e6eb0);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)puVar1)(uVar4,puVar2);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)puVar1)(uVar3,PTR_s_addSubview__1002e6920,uVar5);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar5);
  (*(code *)puVar2)(uVar4);
  (*(code *)puVar2)(uVar3);
  uVar3 = (*(code *)puVar1)(param_1,PTR_s_windowController_1002e7378);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*(code *)puVar1)(uVar3,PTR_s_overlayViewController_1002e7080);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)puVar1)(uVar4,PTR_s_view_1002e6900);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  (*(code *)puVar2)(uVar3);
  uVar3 = (*(code *)puVar1)(uVar5,PTR_s_superview_1002e6df8);
  lVar6 = _objc_retainAutoreleasedReturnValue(uVar3);
  if (lVar6 != 0) {
    (*(code *)puVar1)(uVar5,PTR_s_removeFromSuperview_1002e7280);
    (*(code *)puVar1)(lVar6,PTR_s_addSubview__1002e6920,uVar5);
  }
  uVar3 = (*(code *)puVar1)(param_1,PTR_s_view_1002e6900);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*(code *)puVar1)(uVar3,PTR_s_window_1002e6878);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar7 = (*(code *)puVar1)(param_1,PTR_s_canvasViewController_1002e6eb0);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  uVar8 = (*(code *)puVar1)(uVar7,PTR_s_canvasView_1002e6c08);
  uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
  (*(code *)puVar1)(uVar4,PTR_s_makeFirstResponder__1002e6e58,uVar8);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar8);
  (*(code *)puVar2)(uVar7);
  (*(code *)puVar2)(uVar4);
  (*(code *)puVar2)(uVar3);
  uVar3 = (*(code *)puVar1)(param_1,PTR_s_dragViewController_1002e6c80);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*(code *)puVar1)(uVar3,PTR_s_view_1002e6900);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)puVar1)(uVar4,PTR_s_removeFromSuperview_1002e7280);
  (*(code *)puVar2)(uVar4);
  (*(code *)puVar2)(uVar3);
  (*(code *)puVar1)(param_1,PTR_s_setDragViewController__1002e97e8,0);
  (*(code *)puVar2)(lVar6);
  (*(code *)puVar2)(uVar5);
  return;
}



// ===== windowController  @ 0x1000562d6 =====

/* Function Stack Size: 0x10 bytes */

ID ContentViewController::windowController(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID IVar5;
  
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar2 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_view_1002e6900);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  uVar3 = (*(code *)puVar1)(uVar2,PTR_s_window_1002e6878);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*(code *)puVar1)(uVar3,PTR_s_windowController_1002e7378);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  puVar1 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar3);
  (*(code *)puVar1)(uVar2);
  IVar5 = _objc_autoreleaseReturnValue(uVar4);
  return IVar5;
}



// ===== document  @ 0x100056350 =====

/* Function Stack Size: 0x10 bytes */

ID ContentViewController::document(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  
  uVar1 = _objc_loadWeakRetained(param_1 + _document);
  IVar2 = _objc_autoreleaseReturnValue(uVar1);
  return IVar2;
}



// ===== dragViewController  @ 0x100056369 =====

/* Function Stack Size: 0x10 bytes */

ID ContentViewController::dragViewController(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + _dragViewController);
}



// ===== setDragViewController:  @ 0x10005637a =====

/* Function Stack Size: 0x18 bytes */

void ContentViewController::setDragViewController_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = _dragViewController;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = uVar3;
  (*(code *)PTR__objc_release_10027d590)(uVar1);
  return;
}



// ===== canvasViewController  @ 0x1000563a6 =====

/* Function Stack Size: 0x10 bytes */

ID ContentViewController::canvasViewController(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + _canvasViewController);
}



// ===== setCanvasViewController:  @ 0x1000563b7 =====

/* Function Stack Size: 0x18 bytes */

void ContentViewController::setCanvasViewController_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = _canvasViewController;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = uVar3;
  (*(code *)PTR__objc_release_10027d590)(uVar1);
  return;
}



// ===== videoControlsView  @ 0x1000563e3 =====

/* Function Stack Size: 0x10 bytes */

ID ContentViewController::videoControlsView(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + _videoControlsView);
}



// ===== setVideoControlsView:  @ 0x1000563f4 =====

/* Function Stack Size: 0x18 bytes */

void ContentViewController::setVideoControlsView_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = _videoControlsView;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = uVar3;
  (*(code *)PTR__objc_release_10027d590)(uVar1);
  return;
}



// ===== .cxx_destruct  @ 0x100056420 =====

/* Function Stack Size: 0x10 bytes */

void ContentViewController::_cxx_destruct(ID param_1,SEL param_2)

{
  _objc_storeStrong(_videoControlsView + param_1,0);
  _objc_storeStrong(_canvasViewController + param_1,0);
  _objc_storeStrong(_dragViewController + param_1,0);
  _objc_destroyWeak(param_1 + _document);
  return;
}



// ===== drawingPath  @ 0x1000565c1 =====

/* Function Stack Size: 0x10 bytes */

ID ShapeCircle::drawingPath(ID param_1,SEL param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID IVar5;
  long lVar6;
  undefined local_1a8 [128];
  undefined local_128 [128];
  undefined local_a8 [128];
  
  lVar2 = Shape::_drawingPath;
  puVar1 = PTR_s_handles_1002e6518;
  lVar6 = *(long *)(param_1 + Shape::_drawingPath);
  if (lVar6 == 0) {
    _objc_msgSend_stret(local_a8,param_1,PTR_s_handles_1002e6518);
    _objc_msgSend_stret(local_128,param_1,puVar1);
    _objc_msgSend_stret(local_1a8,param_1,puVar1);
    puVar1 = PTR__objc_msgSend_10027d560;
    uVar3 = (*(code *)PTR__objc_msgSend_10027d560)
                      (PTR__OBJC_CLASS___NSBezierPath_1002eea90,
                       PTR_s_bezierPathWithOvalInRect__1002e86d0);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
    uVar3 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = uVar4;
    (*(code *)PTR__objc_release_10027d590)(uVar3);
    uVar3 = *(undefined8 *)(param_1 + lVar2);
    (*(code *)puVar1)(param_1,PTR_s_strokeWidth_1002e6528);
    (*(code *)puVar1)(uVar3,PTR_s_setLineWidth__1002e6530);
    lVar6 = *(long *)(param_1 + lVar2);
  }
  IVar5 = _objc_retainAutoreleaseReturnValue(lVar6);
  return IVar5;
}



// ===== dealloc  @ 0x100056708 =====

/* Function Stack Size: 0x10 bytes */

void OverlayView::dealloc(ID param_1,SEL param_2)

{
  objc_super local_20;
  
  _NSLog(&cf_dealloc___,param_1);
  local_20.super_class = (class_t *)PTR_OverlayView_1002ef928;
  local_20.receiver = param_1;
  _objc_msgSendSuper2(&local_20,PTR_s_dealloc_1002e63c0);
  return;
}



// ===== initWithFrame:  @ 0x10005674b =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Function Stack Size: 0x30 bytes */

ID OverlayView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  objc_super local_40;
  
  local_40.super_class = (class_t *)PTR_OverlayView_1002ef928;
  local_40.receiver = param_1;
  IVar4 = _objc_msgSendSuper2(&local_40,PTR_s_initWithFrame__1002e6930);
  puVar1 = PTR__objc_msgSend_10027d560;
  if (IVar4 != 0) {
    (*(code *)PTR__objc_msgSend_10027d560)(IVar4,PTR_s_setAutoresizingMask__1002e6fb8,0x2d);
    uVar5 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSTextField_1002eeb68,PTR_s_alloc_1002e64e8);
    uVar5 = (*(code *)puVar1)(uVar5,PTR_s_init_1002e6538);
    (*(code *)puVar1)(IVar4,PTR_s_setMessageTextField__1002e9810,uVar5);
    puVar2 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar5);
    puVar3 = PTR_s_messageTextField_1002e9818;
    uVar5 = (*(code *)puVar1)(IVar4,PTR_s_messageTextField_1002e9818);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)puVar1)(uVar5,PTR_s_setDrawsBackground__1002e6958,0);
    (*(code *)puVar2)(uVar5);
    uVar5 = (*(code *)puVar1)(IVar4,puVar3);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)puVar1)(uVar5,PTR_s_setEditable__1002e6948,0);
    (*(code *)puVar2)(uVar5);
    uVar5 = (*(code *)puVar1)(IVar4,puVar3);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)puVar1)(uVar5,PTR_s_setSelectable__1002e9820,0);
    (*(code *)puVar2)(uVar5);
    uVar5 = (*(code *)puVar1)(IVar4,puVar3);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)puVar1)(uVar5,PTR_s_setBezeled__1002e8608,0);
    (*(code *)puVar2)(uVar5);
    uVar5 = (*(code *)puVar1)(IVar4,puVar3);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)puVar1)(uVar5,PTR_s_setAutoresizingMask__1002e6fb8,2);
    (*(code *)puVar2)(uVar5);
    uVar5 = (*(code *)puVar1)(IVar4,puVar3);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)puVar1)(IVar4,PTR_s_addSubview__1002e6920,uVar5);
    (*(code *)puVar2)(uVar5);
    uVar5 = (*(code *)puVar1)(PTR_TextView_1002ef138,PTR_s_alloc_1002e64e8);
    uVar5 = (*(code *)puVar1)(uVar5,PTR_s_init_1002e6538);
    (*(code *)puVar1)(IVar4,PTR_s_setSubMessageTextView__1002e9828,uVar5);
    (*(code *)puVar2)(uVar5);
    puVar3 = PTR_s_subMessageTextView_1002e9830;
    uVar5 = (*(code *)puVar1)(IVar4,PTR_s_subMessageTextView_1002e9830);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)puVar1)(uVar5,PTR_s_setDrawsBackground__1002e6958,0);
    (*(code *)puVar2)(uVar5);
    uVar5 = (*(code *)puVar1)(IVar4,puVar3);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)puVar1)(uVar5,PTR_s_setEditable__1002e6948,0);
    (*(code *)puVar2)(uVar5);
    uVar5 = (*(code *)puVar1)(IVar4,puVar3);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)puVar1)(uVar5,PTR_s_setSelectable__1002e9820,0);
    (*(code *)puVar2)(uVar5);
    uVar5 = (*(code *)puVar1)(IVar4,puVar3);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)puVar1)(uVar5,PTR_s_setLinkTextAttributes__1002e9838,0);
    (*(code *)puVar2)(uVar5);
    uVar5 = (*(code *)puVar1)(IVar4,puVar3);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)puVar1)(uVar5,PTR_s_setAutoresizingMask__1002e6fb8,5);
    (*(code *)puVar2)(uVar5);
    uVar5 = (*(code *)puVar1)(IVar4,puVar3);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)puVar1)(IVar4,PTR_s_addSubview__1002e6920,uVar5);
    (*(code *)puVar2)(uVar5);
    uVar5 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSImageView_1002eeb60,PTR_s_alloc_1002e64e8);
    uVar5 = (*(code *)puVar1)(uVar5,PTR_s_initWithFrame__1002e6930);
    (*(code *)puVar1)(IVar4,PTR_s_setIconImageView__1002e9840,uVar5);
    (*(code *)puVar2)(uVar5);
    uVar5 = (*(code *)puVar1)(IVar4,PTR_s_iconImageView_1002e9848);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)puVar1)(uVar5,PTR_s_setAutoresizingMask__1002e6fb8,5);
    (*(code *)puVar2)(uVar5);
    uVar5 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSShadow_1002eef38,PTR_s_alloc_1002e64e8);
    uVar5 = (*(code *)puVar1)(uVar5,PTR_s_init_1002e6538);
    (*(code *)puVar1)((int)DAT_100170c08,uVar5,PTR_s_setShadowBlurRadius__1002e86e8);
    uVar6 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSColor_1002eea80,PTR_s_blackColor_1002e6970);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    uVar7 = (*(code *)puVar1)((int)DAT_100170dc0,uVar6,PTR_s_colorWithAlphaComponent__1002e6a88);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    (*(code *)PTR__objc_msgSend_10027d560)(uVar5,PTR_s_setShadowColor__1002e86e0,uVar7);
    puVar2 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar7);
    (*(code *)puVar2)(uVar6);
    puVar1 = PTR__objc_msgSend_10027d560;
    (*(code *)PTR__objc_msgSend_10027d560)(0,DAT_100170e18,uVar5,PTR_s_setShadowOffset__1002e90a0);
    uVar6 = (*(code *)puVar1)(IVar4,PTR_s_iconImageView_1002e9848);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)puVar1)(uVar6,PTR_s_setShadow__1002e9850,uVar5);
    (*(code *)puVar2)(uVar6);
    uVar6 = (*(code *)puVar1)(IVar4,PTR_s_iconImageView_1002e9848);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)puVar1)(IVar4,PTR_s_addSubview__1002e6920,uVar6);
    (*(code *)puVar2)(uVar6);
    uVar6 = (*(code *)puVar1)(PTR_YRKSpinningProgressIndicator_1002ef140,PTR_s_alloc_1002e64e8);
    uVar6 = (*(code *)puVar1)(uVar6,PTR_s_initWithFrame__1002e6930);
    (*(code *)puVar1)(IVar4,PTR_s_setThrobber__1002e9858,uVar6);
    (*(code *)puVar2)(uVar6);
    puVar3 = PTR_s_throbber_1002e9860;
    uVar6 = (*(code *)puVar1)(IVar4,PTR_s_throbber_1002e9860);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    uVar7 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSColor_1002eea80,PTR_s_whiteColor_1002e6fc0);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    (*(code *)puVar1)(uVar6,PTR_s_setColor__1002e6ec0,uVar7);
    puVar2 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar7);
    (*(code *)puVar2)(uVar6);
    uVar6 = (*(code *)puVar1)(IVar4,puVar3);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)puVar1)(uVar6,PTR_s_setDrawsBackground__1002e6958,0);
    (*(code *)puVar2)(uVar6);
    uVar6 = (*(code *)puVar1)(IVar4,puVar3);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)puVar1)(uVar6,PTR_s_setDisplayedWhenStopped__1002e9868,0);
    (*(code *)puVar2)(uVar6);
    uVar6 = (*(code *)puVar1)(IVar4,puVar3);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)puVar1)(uVar6,PTR_s_setUsesThreadedAnimation__1002e9870,0);
    (*(code *)puVar2)(uVar6);
    uVar6 = (*(code *)puVar1)(IVar4,puVar3);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)puVar1)(uVar6,PTR_s_setAutoresizingMask__1002e6fb8,5);
    (*(code *)puVar2)(uVar6);
    uVar6 = (*(code *)puVar1)(IVar4,puVar3);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)puVar1)(IVar4,PTR_s_addSubview__1002e6920,uVar6);
    (*(code *)puVar2)(uVar6);
    (*(code *)puVar2)(uVar5);
  }
  return IVar4;
}



// ===== setMessage:iconType:subMessage:subMessageLink:  @ 0x100056dba =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Function Stack Size: 0x30 bytes */

void OverlayView::setMessage_iconType_subMessage_subMessageLink_
               (ID param_1,SEL param_2,ID param_3,long_long param_4,ID param_5,ID param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ID IVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ID self;
  cfstringStruct *pcVar18;
  code *pcVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined *local_250;
  undefined *local_248;
  double local_230;
  double local_210;
  long local_208;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  double dStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  double local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  undefined8 local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  puVar2 = PTR__objc_retain_10027d598;
  local_38 = *(long *)PTR____stack_chk_guard_10027d368;
  lVar5 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  lVar6 = (*(code *)puVar2)(param_5);
  lVar7 = (*(code *)puVar2)(param_6);
  puVar2 = PTR__objc_msgSend_10027d560;
  uVar8 = (*(code *)PTR__objc_msgSend_10027d560)
                    (PTR__OBJC_CLASS___NSShadow_1002eef38,PTR_s_alloc_1002e64e8);
  uVar8 = (*(code *)puVar2)(uVar8,PTR_s_init_1002e6538);
  (*(code *)puVar2)(DAT_100170c08,uVar8,PTR_s_setShadowBlurRadius__1002e86e8);
  uVar9 = (*(code *)puVar2)(PTR__OBJC_CLASS___NSColor_1002eea80,PTR_s_blackColor_1002e6970);
  uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
  uVar10 = (*(code *)puVar2)(DAT_100170dc0,uVar9,PTR_s_colorWithAlphaComponent__1002e6a88);
  uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
  (*(code *)puVar2)(uVar8,PTR_s_setShadowColor__1002e86e0,uVar10);
  puVar1 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar10);
  (*(code *)puVar1)(uVar9);
  local_230 = DAT_100170e18;
  (*(code *)puVar2)(0,uVar8,PTR_s_setShadowOffset__1002e90a0);
  uVar9 = (*(code *)puVar2)(PTR__OBJC_CLASS___NSMutableParagraphStyle_1002eeb70,
                            PTR_s_alloc_1002e64e8);
  uVar9 = (*(code *)puVar2)(uVar9,PTR_s_init_1002e6538);
  (*(code *)puVar2)(uVar9,PTR_s_setAlignment__1002e6960,2);
  (*(code *)puVar2)(uVar9,PTR_s_setLineBreakMode__1002e9878,2);
  local_78 = *(undefined8 *)PTR__NSForegroundColorAttributeName_10027d118;
  uVar10 = (*(code *)puVar2)(PTR__OBJC_CLASS___NSColor_1002eea80,PTR_s_whiteColor_1002e6fc0);
  uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
  local_70 = *(undefined8 *)PTR__NSFontAttributeName_10027d110;
  local_58 = uVar10;
  uVar11 = (*(code *)puVar2)(DAT_100170c30,PTR__OBJC_CLASS___NSFont_1002eeb30,
                             PTR_s_systemFontOfSize__1002e9880);
  uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
  puVar1 = PTR__objc_release_10027d590;
  local_68 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_10027d1e8;
  local_60 = *(undefined8 *)PTR__NSShadowAttributeName_10027d200;
  local_50 = uVar11;
  local_48 = uVar9;
  local_40 = uVar8;
  uVar12 = (*(code *)puVar2)(PTR__OBJC_CLASS___NSDictionary_1002eeb78,
                             PTR_s_dictionaryWithObjects_forKeys_co_1002e6978,&local_58,&local_78,4)
  ;
  uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
  (*(code *)puVar1)(uVar11);
  (*(code *)puVar1)(uVar10);
  uVar10 = (*(code *)puVar2)(PTR__OBJC_CLASS___NSAttributedString_1002eeb80,PTR_s_alloc_1002e64e8);
  uVar10 = (*(code *)puVar2)(uVar10,PTR_s_initWithString_attributes__1002e69c8,lVar5,uVar12);
  (*(code *)puVar1)(lVar5);
  puVar1 = PTR_s_messageTextField_1002e9818;
  uVar11 = (*(code *)puVar2)(param_1,PTR_s_messageTextField_1002e9818);
  uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
  (*(code *)puVar2)(uVar11,PTR_s_setAttributedStringValue__1002e69d0,uVar10);
  pcVar19 = (code *)PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar11);
  uVar11 = (*(code *)puVar2)(param_1,puVar1);
  uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
  (*(code *)puVar2)(uVar11,PTR_s_sizeToFit_1002e9888);
  (*pcVar19)(uVar11);
  uVar11 = (*(code *)puVar2)(param_1,puVar1);
  IVar13 = _objc_retainAutoreleasedReturnValue(uVar11);
  if (IVar13 == 0) {
    local_138 = 0.0;
    dStack_130 = 0.0;
    local_148 = 0;
    dStack_140 = 0.0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_148,IVar13,PTR_s_frame_1002e64b0);
  }
  (*(code *)PTR__objc_release_10027d590)(IVar13);
  if (lVar6 == 0) {
    local_210 = *(double *)(PTR__NSZeroRect_10027d310 + 0x10);
    local_230 = *(double *)(PTR__NSZeroRect_10027d310 + 0x18);
    local_248 = PTR_s_subMessageTextView_1002e9830;
    uVar11 = (*(code *)puVar2)(param_1);
    uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
    (*(code *)puVar2)(uVar11,PTR_s_setString__1002e95a0,&cf___);
    (*(code *)PTR__objc_release_10027d590)(uVar11);
    local_208 = 0;
  }
  else {
    uVar11 = (*(code *)PTR__objc_msgSend_10027d560)
                       (PTR__OBJC_CLASS___NSString_1002eea68,PTR_s_stringWithFormat__1002e63a8,
                        &cf___,lVar6);
    local_208 = _objc_retainAutoreleasedReturnValue(uVar11);
    (*(code *)PTR__objc_release_10027d590)(lVar6);
    puVar3 = PTR_s_colorWithDeviceRed_green_blue_al_1002e84a0;
    puVar1 = PTR__NSForegroundColorAttributeName_10027d118;
    if (lVar7 == 0) {
      local_128 = *(undefined8 *)PTR__NSForegroundColorAttributeName_10027d118;
      uVar11 = (*(code *)puVar2)(PTR__OBJC_CLASS___NSColor_1002eea80,PTR_s_whiteColor_1002e6fc0);
      uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
      local_120 = *(undefined8 *)PTR__NSFontAttributeName_10027d110;
      local_108 = uVar11;
      uVar14 = (*(code *)puVar2)(DAT_100170e00,PTR__OBJC_CLASS___NSFont_1002eeb30,
                                 PTR_s_systemFontOfSize__1002e9880);
      uVar15 = _objc_retainAutoreleasedReturnValue(uVar14);
      local_118 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_10027d1e8;
      local_110 = *(undefined8 *)PTR__NSShadowAttributeName_10027d200;
      local_100 = uVar15;
      local_f8 = uVar9;
      local_f0 = uVar8;
      uVar14 = (*(code *)puVar2)(PTR__OBJC_CLASS___NSDictionary_1002eeb78,
                                 PTR_s_dictionaryWithObjects_forKeys_co_1002e6978,&local_108,
                                 &local_128,4);
      uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
      pcVar19 = (code *)PTR__objc_release_10027d590;
      (*(code *)PTR__objc_release_10027d590)(uVar15);
    }
    else {
      local_e8 = *(undefined8 *)PTR__NSLinkAttributeName_10027d190;
      local_e0 = *(undefined8 *)PTR__NSForegroundColorAttributeName_10027d118;
      local_b0 = lVar7;
      uVar11 = (*(code *)puVar2)(DAT_100171410,DAT_100171418,DAT_100171420,DAT_100170c08,
                                 PTR__OBJC_CLASS___NSColor_1002eea80,
                                 PTR_s_colorWithDeviceRed_green_blue_al_1002e84a0);
      uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
      local_d8 = *(undefined8 *)puVar1;
      local_230 = DAT_100171430;
      local_a8 = uVar11;
      uVar14 = (*(code *)puVar2)(DAT_100171428,DAT_100171430,DAT_100171438,DAT_100170c08,
                                 PTR__OBJC_CLASS___NSColor_1002eea80,puVar3);
      uVar15 = _objc_retainAutoreleasedReturnValue(uVar14);
      local_d0 = *(undefined8 *)PTR__NSFontAttributeName_10027d110;
      local_a0 = uVar15;
      uVar14 = (*(code *)puVar2)(DAT_100170e00,PTR__OBJC_CLASS___NSFont_1002eeb30,
                                 PTR_s_systemFontOfSize__1002e9880);
      uVar16 = _objc_retainAutoreleasedReturnValue(uVar14);
      local_c8 = *(undefined8 *)PTR__NSCursorAttributeName_10027d0c0;
      local_98 = uVar16;
      uVar14 = (*(code *)puVar2)(PTR__OBJC_CLASS___NSCursor_1002eeed0,
                                 PTR_s_pointingHandCursor_1002e9890);
      uVar17 = _objc_retainAutoreleasedReturnValue(uVar14);
      local_c0 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_10027d1e8;
      local_b8 = *(undefined8 *)PTR__NSShadowAttributeName_10027d200;
      local_90 = uVar17;
      local_88 = uVar9;
      local_80 = uVar8;
      uVar14 = (*(code *)puVar2)(PTR__OBJC_CLASS___NSDictionary_1002eeb78,
                                 PTR_s_dictionaryWithObjects_forKeys_co_1002e6978,&local_b0,
                                 &local_e8,7);
      uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
      pcVar19 = (code *)PTR__objc_release_10027d590;
      (*(code *)PTR__objc_release_10027d590)(uVar17);
      (*pcVar19)(uVar16);
      (*pcVar19)(uVar15);
    }
    (*pcVar19)(uVar11);
    uVar11 = (*(code *)puVar2)(PTR__OBJC_CLASS___NSAttributedString_1002eeb80,PTR_s_alloc_1002e64e8)
    ;
    uVar11 = (*(code *)puVar2)(uVar11,PTR_s_initWithString_attributes__1002e69c8,local_208,uVar14);
    local_248 = PTR_s_subMessageTextView_1002e9830;
    uVar15 = (*(code *)puVar2)(param_1);
    uVar15 = _objc_retainAutoreleasedReturnValue(uVar15);
    uVar16 = (*(code *)puVar2)(uVar15,PTR_s_textStorage_1002e9578);
    uVar16 = _objc_retainAutoreleasedReturnValue(uVar16);
    (*(code *)puVar2)(uVar16,PTR_s_setAttributedString__1002e9898,uVar11);
    (*pcVar19)(uVar16);
    (*pcVar19)(uVar15);
    uVar15 = (*(code *)puVar2)(param_1,PTR_s_subMessageTextView_1002e9830);
    uVar15 = _objc_retainAutoreleasedReturnValue(uVar15);
    (*(code *)puVar2)(uVar15,PTR_s_setSelectable__1002e9820,1);
    (*pcVar19)(uVar15);
    local_210 = (double)(*(code *)puVar2)(uVar11,PTR_s_size_1002e66a8);
    (*pcVar19)(uVar11);
    (*pcVar19)(uVar14);
  }
  uVar11 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_iconImageView_1002e9848);
  IVar13 = _objc_retainAutoreleasedReturnValue(uVar11);
  if (IVar13 == 0) {
    local_158 = 0.0;
    dStack_150 = 0.0;
    local_168 = 0;
    dStack_160 = 0.0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_168,IVar13,PTR_s_frame_1002e64b0);
  }
  (*(code *)PTR__objc_release_10027d590)(IVar13);
  if (param_4 == 0) {
    uVar11 = (*(code *)puVar2)(param_1,PTR_s_iconImageView_1002e9848);
    uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
    (*(code *)puVar2)(uVar11,PTR_s_setHidden__1002e68b0,1);
    (*pcVar19)(uVar11);
    local_250 = PTR_s_throbber_1002e9860;
    uVar11 = (*(code *)puVar2)(param_1);
    uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
    (*(code *)puVar2)(uVar11,PTR_s_startAnimation__1002e6ad8,param_1);
    goto LAB_100057762;
  }
  local_250 = PTR_s_throbber_1002e9860;
  uVar11 = (*(code *)puVar2)(param_1);
  uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
  (*(code *)puVar2)(uVar11,PTR_s_stopAnimation__1002e6a38,param_1);
  (*pcVar19)(uVar11);
  uVar11 = (*(code *)puVar2)(param_1,PTR_s_iconImageView_1002e9848);
  uVar14 = _objc_retainAutoreleasedReturnValue(uVar11);
  uVar11 = 0;
  (*(code *)puVar2)(uVar14,PTR_s_setHidden__1002e68b0,0);
  (*pcVar19)(uVar14);
  switch(param_4) {
  case 1:
    pcVar18 = &cf_overlay_done;
    break;
  case 2:
    pcVar18 = &cf_overlay_drag;
    break;
  case 3:
    pcVar18 = &cf_overlay_failed;
    break;
  case 4:
    pcVar18 = &cf_overlay_network;
    break;
  default:
    goto switchD_100057653_default;
  }
  uVar11 = (*(code *)PTR__objc_msgSend_10027d560)
                     (PTR__OBJC_CLASS___NSImage_1002eea70,PTR_s_imageNamed__1002e6490,pcVar18);
  uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
switchD_100057653_default:
  uVar14 = (*(code *)puVar2)(param_1,PTR_s_iconImageView_1002e9848);
  uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
  (*(code *)puVar2)(uVar14,PTR_s_setImage__1002e6448,uVar11);
  (*pcVar19)(uVar14);
LAB_100057762:
  (*pcVar19)(uVar11);
  dVar4 = local_138;
  dVar21 = local_158;
  dVar22 = DAT_1001713c0;
  if (local_208 != 0) {
    dVar22 = DAT_100170fe0 + local_230 + DAT_1001713c0;
  }
  dVar23 = local_210;
  if (local_208 == 0) {
    dVar23 = 0.0;
  }
  dVar20 = dVar23;
  dStack_160 = dVar22;
  if ((lVar5 != 0) &&
     (dStack_160 = dVar22 + dStack_130 + DAT_100170eb0, dVar20 = local_138, dStack_140 = dVar22,
     local_138 <= dVar23)) {
    dVar20 = dVar23;
  }
  dVar23 = dStack_160 + dStack_150;
  dVar22 = local_158;
  if (local_158 <= dVar20) {
    dVar22 = dVar20;
  }
  dVar20 = DAT_100171440;
  if (DAT_100171440 <= dVar22) {
    dVar20 = dVar22;
  }
  dVar22 = (dVar20 + _DAT_100171448) * DAT_100170dc0;
  _floor(dVar22 - local_210 * DAT_100170dc0);
  local_148 = _floor(dVar22 - dVar4 * DAT_100170dc0);
  local_168 = _floor(dVar22 - dVar21 * DAT_100170dc0);
  puVar2 = PTR_s_superview_1002e6df8;
  uVar11 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_superview_1002e6df8);
  IVar13 = _objc_retainAutoreleasedReturnValue(uVar11);
  if (IVar13 == 0) {
    local_178 = 0.0;
    uStack_170 = 0;
    local_188 = 0;
    uStack_180 = 0;
    dVar21 = 0.0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_188,IVar13,PTR_s_frame_1002e64b0);
    dVar21 = local_178 * DAT_100170dc0;
  }
  dVar23 = dVar23 + DAT_1001713c0;
  _floor(dVar21 - dVar22);
  uVar11 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,puVar2);
  self = _objc_retainAutoreleasedReturnValue(uVar11);
  if (self == 0) {
    local_198 = 0;
    dStack_190 = 0.0;
    local_1a8 = 0;
    uStack_1a0 = 0;
    dVar21 = 0.0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_1a8,self,PTR_s_frame_1002e64b0);
    dVar21 = dStack_190 * _DAT_100171450;
  }
  _floor(DAT_100170dc8 * dVar23 + dVar21);
  puVar2 = PTR__objc_msgSend_10027d560;
  (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_setFrame__1002e6500);
  (*pcVar19)(self);
  (*pcVar19)(IVar13);
  uVar11 = (*(code *)puVar2)(param_1,PTR_s_messageTextField_1002e9818);
  uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
  puVar1 = PTR_s_setFrame__1002e6500;
  (*(code *)puVar2)(uVar11,PTR_s_setFrame__1002e6500);
  (*pcVar19)(uVar11);
  uVar11 = (*(code *)puVar2)(param_1,local_248);
  uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
  (*(code *)puVar2)(uVar11,puVar1);
  (*pcVar19)(uVar11);
  uVar11 = (*(code *)puVar2)(param_1,PTR_s_iconImageView_1002e9848);
  uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
  (*(code *)puVar2)(uVar11,puVar1);
  (*pcVar19)(uVar11);
  uVar11 = (*(code *)puVar2)(param_1,local_250);
  uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
  (*(code *)puVar2)(uVar11,puVar1);
  (*pcVar19)(uVar11);
  (*pcVar19)(uVar10);
  (*pcVar19)(uVar12);
  (*pcVar19)(uVar9);
  (*pcVar19)(uVar8);
  (*pcVar19)(lVar7);
  (*pcVar19)(local_208);
  if (*(long *)PTR____stack_chk_guard_10027d368 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



// ===== drawRect:  @ 0x100057c78 =====

/* Function Stack Size: 0x30 bytes */

void OverlayView::drawRect_(ID param_1,SEL param_2,CGRect param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined local_50 [32];
  
  puVar2 = PTR__OBJC_CLASS___NSBezierPath_1002eea90;
  _objc_msgSend_stret(local_50,param_1,PTR_s_bounds_1002e6938);
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar3 = (*(code *)PTR__objc_msgSend_10027d560)
                    (DAT_100171048,DAT_100171048,puVar2,
                     PTR_s_bezierPathWithRoundedRect_xRadiu_1002e7ff8);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSColor_1002eea80,PTR_s_blackColor_1002e6970);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)puVar1)(DAT_100171458,uVar4,PTR_s_colorWithAlphaComponent__1002e6a88);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)puVar1)(uVar5,PTR_s_set_1002e6510);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar5);
  (*(code *)puVar2)(uVar4);
  (*(code *)puVar1)(uVar3,PTR_s_fill_1002e6aa8);
  (*(code *)puVar2)(uVar3);
  return;
}



// ===== acceptsFirstResponder  @ 0x100057d72 =====

/* Function Stack Size: 0x10 bytes */

char OverlayView::acceptsFirstResponder(ID param_1,SEL param_2)

{
  return '\0';
}



// ===== messageTextField  @ 0x100057d7a =====

/* Function Stack Size: 0x10 bytes */

ID OverlayView::messageTextField(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + _messageTextField);
}



// ===== setMessageTextField:  @ 0x100057d8b =====

/* Function Stack Size: 0x18 bytes */

void OverlayView::setMessageTextField_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = _messageTextField;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = uVar3;
  (*(code *)PTR__objc_release_10027d590)(uVar1);
  return;
}



// ===== subMessageTextView  @ 0x100057db7 =====

/* Function Stack Size: 0x10 bytes */

ID OverlayView::subMessageTextView(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + _subMessageTextView);
}



// ===== setSubMessageTextView:  @ 0x100057dc8 =====

/* Function Stack Size: 0x18 bytes */

void OverlayView::setSubMessageTextView_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = _subMessageTextView;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = uVar3;
  (*(code *)PTR__objc_release_10027d590)(uVar1);
  return;
}



// ===== iconImageView  @ 0x100057df4 =====

/* Function Stack Size: 0x10 bytes */

ID OverlayView::iconImageView(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + _iconImageView);
}



// ===== setIconImageView:  @ 0x100057e05 =====

/* Function Stack Size: 0x18 bytes */

void OverlayView::setIconImageView_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = _iconImageView;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = uVar3;
  (*(code *)PTR__objc_release_10027d590)(uVar1);
  return;
}



// ===== throbber  @ 0x100057e31 =====

/* Function Stack Size: 0x10 bytes */

ID OverlayView::throbber(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + _throbber);
}



// ===== setThrobber:  @ 0x100057e42 =====

/* Function Stack Size: 0x18 bytes */

void OverlayView::setThrobber_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = _throbber;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = uVar3;
  (*(code *)PTR__objc_release_10027d590)(uVar1);
  return;
}



// ===== .cxx_destruct  @ 0x100057e6e =====

/* Function Stack Size: 0x10 bytes */

void OverlayView::_cxx_destruct(ID param_1,SEL param_2)

{
  _objc_storeStrong(_throbber + param_1,0);
  _objc_storeStrong(_iconImageView + param_1,0);
  _objc_storeStrong(_subMessageTextView + param_1,0);
  _objc_storeStrong(param_1 + _messageTextField,0);
  return;
}



// ===== cursorForHandle:  @ 0x100057ef3 =====

/* Function Stack Size: 0x18 bytes */

ID Crop::cursorForHandle_(ID param_1,SEL param_2,long_long param_3)

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
    switch(param_3 & 0xfffffffffffffffb) {
    case 0:
      uVar2 = (*(code *)PTR__objc_msgSend_10027d560)
                        (PTR_Cursors_1002eeed8,PTR_s_sharedInstance_1002e65b8);
      uVar3 = _objc_retainAutoreleasedReturnValue(uVar2);
      puVar5 = PTR_s_resizeTopRightBottomLeft_1002e8478;
      break;
    case 1:
      uVar2 = (*(code *)PTR__objc_msgSend_10027d560)
                        (PTR_Cursors_1002eeed8,PTR_s_sharedInstance_1002e65b8);
      uVar3 = _objc_retainAutoreleasedReturnValue(uVar2);
      puVar5 = PTR_s_resizeTopBottom_1002e95f0;
      break;
    case 2:
      uVar2 = (*(code *)PTR__objc_msgSend_10027d560)
                        (PTR_Cursors_1002eeed8,PTR_s_sharedInstance_1002e65b8);
      uVar3 = _objc_retainAutoreleasedReturnValue(uVar2);
      puVar5 = PTR_s_resizeTopLeftBottomRight_1002e8470;
      break;
    case 3:
      uVar2 = (*(code *)PTR__objc_msgSend_10027d560)
                        (PTR_Cursors_1002eeed8,PTR_s_sharedInstance_1002e65b8);
      uVar3 = _objc_retainAutoreleasedReturnValue(uVar2);
      puVar5 = PTR_s_resizeLeftRight_1002e95e8;
      break;
    default:
      goto switchD_100057f1e_default;
    }
    uVar2 = (*(code *)puVar1)(uVar3,puVar5);
    uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
    (*(code *)PTR__objc_release_10027d590)(uVar3);
  }
switchD_100057f1e_default:
  IVar4 = _objc_autoreleaseReturnValue(uVar2);
  return IVar4;
}



// ===== initAtPoint:inWindow:  @ 0x100058028 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Function Stack Size: 0x28 bytes */

ID __thiscall
Crop::initAtPoint_inWindow_(Crop *this,ID param_1,SEL param_2,CGPoint param_3,ID param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ID self;
  long lVar4;
  long lVar5;
  double *pdVar6;
  double *pdVar7;
  byte bVar8;
  double adStack_158 [16];
  undefined8 local_d8;
  double local_d0;
  double local_c8;
  double local_c0 [16];
  objc_super local_40;
  
  local_c8 = param_3.field1_0x8;
  local_d0 = param_3.field0_0x0;
  bVar8 = 0;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_2);
  local_40.super_class = (class_t *)PTR_Crop_1002ef930;
  local_40.receiver = (ID)this;
  self = _objc_msgSendSuper2(&local_40,PTR_s_init_1002e6538);
  if (self != 0) {
    local_d8 = uVar3;
    _objc_storeWeak(self + __window,uVar3);
    _objc_msgSend_stret((undefined *)local_c0,self,PTR_s_handles_1002e6518);
    puVar1 = PTR__objc_msgSend_10027d560;
    uVar3 = (*(code *)PTR__objc_msgSend_10027d560)(self,PTR_s_class_1002e6a28);
    puVar2 = PTR_s_numberOfHandles_1002e8488;
    lVar4 = (*(code *)puVar1)(uVar3,PTR_s_numberOfHandles_1002e8488);
    if (0 < lVar4) {
      pdVar6 = local_c0 + 1;
      lVar4 = 0;
      do {
        pdVar6[-1] = local_d0;
        *pdVar6 = local_c8;
        lVar4 = lVar4 + 1;
        uVar3 = (*(code *)puVar1)(self,PTR_s_class_1002e6a28);
        lVar5 = (*(code *)puVar1)(uVar3,puVar2);
        pdVar6 = pdVar6 + 2;
      } while (lVar4 < lVar5);
    }
    pdVar6 = local_c0;
    pdVar7 = adStack_158;
    for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
      *pdVar7 = *pdVar6;
      pdVar6 = pdVar6 + (ulong)bVar8 * -2 + 1;
      pdVar7 = pdVar7 + (ulong)bVar8 * -2 + 1;
    }
    (*(code *)PTR__objc_msgSend_10027d560)(self,PTR_s_setHandles__1002e8480);
    uVar3 = local_d8;
  }
  (*(code *)PTR__objc_release_10027d590)(uVar3);
  return self;
}



// ===== dealloc  @ 0x10005817b =====

/* Function Stack Size: 0x10 bytes */

void Crop::dealloc(ID param_1,SEL param_2)

{
  objc_super local_20;
  
  _NSLog(&cf_dealloc___,param_1);
  local_20.super_class = (class_t *)PTR_Crop_1002ef930;
  local_20.receiver = param_1;
  _objc_msgSendSuper2(&local_20,PTR_s_dealloc_1002e63c0);
  return;
}



// ===== hitRectForHandle:  @ 0x1000581be =====

/* Function Stack Size: 0x18 bytes */

CGRect * Crop::hitRectForHandle_
                   (CGRect *__return_storage_ptr__,ID param_1,SEL param_2,long_long param_3)

{
  undefined8 uVar1;
  ID self;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a0 [16];
  
  _objc_msgSend_stret((undefined *)local_a0,param_1,PTR_s_handles_1002e6518);
  uVar1 = (*(code *)PTR__objc_msgSend_10027d560)
                    (local_a0[param_3 * 2],local_a0[param_3 * 2 + 1],param_1,
                     PTR_s_handle_atPoint__1002e98a0,param_3);
  self = _objc_retainAutoreleasedReturnValue(uVar1);
  if (self == 0) {
    local_b8 = 0;
    uStack_b0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_c8,self,PTR_s_bounds_1002e6938);
  }
  (*(code *)PTR__objc_release_10027d590)(self);
  _NSInsetRect(DAT_100171150,DAT_100171150,&local_e8);
  (__return_storage_ptr__->field1_0x10).field1_0x8 = local_d0;
  (__return_storage_ptr__->field1_0x10).field0_0x0 = local_d8;
  (__return_storage_ptr__->field0_0x0).field1_0x8 = local_e0;
  (__return_storage_ptr__->field0_0x0).field0_0x0 = local_e8;
  return __return_storage_ptr__;
}



// ===== handleUnderPoint:  @ 0x1000582de =====

/* Function Stack Size: 0x20 bytes */

long_long Crop::handleUnderPoint_(ID param_1,SEL param_2,CGPoint param_3)

{
  undefined *puVar1;
  undefined *op;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  long_long lVar5;
  long_long lVar6;
  double dVar7;
  double dVar8;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  
  puVar1 = PTR__objc_msgSend_10027d560;
  dVar8 = param_3.field1_0x8;
  dVar7 = param_3.field0_0x0;
  uVar3 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_class_1002e6a28);
  lVar4 = (*(code *)puVar1)(uVar3,PTR_s_numberOfHandles_1002e8488);
  op = PTR_s_hitRectForHandle__1002e98a8;
  if (0 < lVar4) {
    lVar6 = 0;
    do {
      lVar5 = lVar6;
      _objc_msgSend_stret((undefined *)&local_50,param_1,op,lVar5);
      cVar2 = _NSPointInRect(dVar7,dVar8);
      if (cVar2 != '\0') break;
      lVar6 = lVar5 + 1;
      uVar3 = (*(code *)puVar1)(param_1,PTR_s_class_1002e6a28);
      lVar4 = (*(code *)puVar1)(uVar3,PTR_s_numberOfHandles_1002e8488);
      lVar5 = 0xffffffffffffffff;
    } while ((long)lVar6 < lVar4);
    if (lVar5 != 0xffffffffffffffff) {
      return lVar5;
    }
  }
  local_38 = *(double *)(param_1 + 0x18 + _rect);
  local_40 = *(double *)(param_1 + 0x10 + _rect);
  local_50 = *(double *)(param_1 + _rect);
  local_48 = *(double *)(param_1 + 8 + _rect);
  cVar2 = _NSPointInRect(dVar7,dVar8);
  lVar6 = 0xffffffffffffffff;
  if (cVar2 == '\0') {
    if (local_50 <= dVar7) {
      if (dVar7 <= local_50 + local_40) {
        lVar6 = 1;
        if ((local_48 <= dVar8) && (lVar6 = 0xffffffffffffffff, local_48 + local_38 < dVar8)) {
          lVar6 = 5;
        }
      }
      else {
        lVar6 = 2;
        if (local_48 <= dVar8) {
          lVar6 = (ulong)(local_48 + local_38 < dVar8) + 3;
        }
      }
    }
    else {
      lVar6 = 0;
      if (local_48 <= dVar8) {
        lVar6 = (ulong)(dVar8 <= local_48 + local_38) | 6;
      }
    }
  }
  return lVar6;
}



// ===== mouseDownOnHandle:atLocation:  @ 0x1000584c0 =====

/* Function Stack Size: 0x28 bytes */

void __thiscall
Crop::mouseDownOnHandle_atLocation_
          (Crop *this,ID param_1,SEL param_2,long_long param_3,CGPoint param_4)

{
  Crop *pCVar1;
  double local_118 [16];
  double local_98;
  double dStack_90;
  
  if (param_2 == (SEL)0xffffffffffffffff) {
    _objc_msgSend_stret((undefined *)&local_98,(ID)this,PTR_s_handles_1002e6518);
    local_98 = param_4.field0_0x0 - local_98;
    dStack_90 = param_4.field1_0x8 - dStack_90;
  }
  else {
    _objc_msgSend_stret((undefined *)local_118,(ID)this,PTR_s_handles_1002e6518);
    local_98 = local_118[(long)param_2 * 2] - param_4.field0_0x0;
    dStack_90 = local_118[(long)param_2 * 2 + 1] - param_4.field1_0x8;
  }
  pCVar1 = this + _mouseDownOffset;
  *(double *)pCVar1 = local_98;
  *(double *)(pCVar1 + 8) = dStack_90;
  return;
}



// ===== scaleTo:  @ 0x100058569 =====

/* Function Stack Size: 0x18 bytes */

void Crop::scaleTo_(ID param_1,SEL param_2,double param_3)

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



// ===== resizeByMovingHandle:withDelta:toLocation:  @ 0x10005866c =====

/* WARNING: Removing unreachable block (ram,0x000100058ba1) */
/* WARNING: Removing unreachable block (ram,0x000100058aca) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Function Stack Size: 0x38 bytes */

long_long Crop::resizeByMovingHandle_withDelta_toLocation_
                    (ID param_1,SEL param_2,long_long param_3,CGPoint param_4,CGPoint param_5)

{
  undefined *puVar1;
  undefined *op;
  undefined8 uVar2;
  ID IVar3;
  long lVar4;
  double *pdVar5;
  double *pdVar6;
  byte bVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double adStack_618 [17];
  double local_590;
  double local_588;
  double local_580;
  double local_578;
  double local_570;
  double local_568;
  double local_560;
  double local_558;
  double local_550;
  double local_548;
  double local_540;
  double local_538;
  double local_530;
  undefined8 local_528;
  double local_520;
  double local_518;
  double local_510;
  double local_508;
  double local_500;
  double local_4f8;
  double local_4f0;
  undefined8 local_4e8;
  double local_4e0;
  double local_4d8;
  double local_4d0;
  double local_4c8;
  double local_4c0;
  undefined8 local_4b8;
  undefined8 uStack_4b0;
  undefined8 local_4a8;
  double dStack_4a0;
  undefined8 local_498;
  undefined8 uStack_490;
  undefined8 local_488;
  double dStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  double local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  double local_448;
  undefined8 uStack_440;
  undefined local_430 [128];
  undefined local_3b0 [96];
  double local_350;
  double local_348;
  undefined local_330 [128];
  undefined local_2b0 [64];
  double local_270;
  double local_268;
  undefined local_230 [128];
  undefined local_1b0 [32];
  double local_190;
  double local_188;
  undefined local_130 [128];
  double local_b0;
  double local_a8;
  
  op = PTR_s_handles_1002e6518;
  local_540 = param_5.field1_0x8;
  local_558 = param_5.field0_0x0;
  bVar7 = 0;
  _objc_msgSend_stret((undefined *)&local_b0,param_1,PTR_s_handles_1002e6518,param_4.field0_0x0,
                      param_4.field1_0x8);
  local_588 = local_b0;
  local_570 = local_a8;
  _objc_msgSend_stret(local_130,param_1,op);
  _objc_msgSend_stret(local_1b0,param_1,op);
  local_568 = local_190;
  local_560 = local_188;
  _objc_msgSend_stret(local_230,param_1,op);
  _objc_msgSend_stret(local_2b0,param_1,op);
  local_580 = local_270;
  local_578 = local_268;
  _objc_msgSend_stret(local_330,param_1,op);
  _objc_msgSend_stret(local_3b0,param_1,op);
  local_550 = local_350;
  local_548 = local_348;
  _objc_msgSend_stret(local_430,param_1,op);
  puVar1 = PTR_s_canvasView_1002e6c08;
  dVar9 = local_558 + *(double *)(param_1 + _mouseDownOffset);
  local_540 = local_540 + *(double *)(param_1 + 8 + _mouseDownOffset);
  local_558 = 0.0;
  dVar10 = local_540;
  if (0.0 <= dVar9) {
    local_558 = dVar9;
    uVar2 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_canvasView_1002e6c08);
    IVar3 = _objc_retainAutoreleasedReturnValue(uVar2);
    if (IVar3 == 0) {
      local_448 = 0.0;
      uStack_440 = 0;
      local_458 = 0;
      uStack_450 = 0;
    }
    else {
      _objc_msgSend_stret((undefined *)&local_458,IVar3,PTR_s_bounds_1002e6938);
    }
    local_590 = local_448;
    (*(code *)PTR__objc_release_10027d590)(IVar3);
    dVar10 = local_540;
    if (local_590 < local_558) {
      uVar2 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,puVar1);
      IVar3 = _objc_retainAutoreleasedReturnValue(uVar2);
      if (IVar3 == 0) {
        local_468 = 0.0;
        uStack_460 = 0;
        local_478 = 0;
        uStack_470 = 0;
      }
      else {
        _objc_msgSend_stret((undefined *)&local_478,IVar3,PTR_s_bounds_1002e6938);
      }
      local_558 = local_468;
      (*(code *)PTR__objc_release_10027d590)(IVar3);
      dVar10 = local_540;
    }
  }
  puVar1 = PTR_s_canvasView_1002e6c08;
  local_540 = 0.0;
  if (0.0 <= dVar10) {
    local_540 = dVar10;
    uVar2 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_canvasView_1002e6c08);
    IVar3 = _objc_retainAutoreleasedReturnValue(uVar2);
    if (IVar3 == 0) {
      local_488 = 0;
      dStack_480 = 0.0;
      local_498 = 0;
      uStack_490 = 0;
    }
    else {
      _objc_msgSend_stret((undefined *)&local_498,IVar3,PTR_s_bounds_1002e6938);
    }
    local_590 = dStack_480;
    (*(code *)PTR__objc_release_10027d590)(IVar3);
    if (local_590 < local_540) {
      uVar2 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,puVar1);
      IVar3 = _objc_retainAutoreleasedReturnValue(uVar2);
      if (IVar3 == 0) {
        local_4a8 = 0;
        dStack_4a0 = 0.0;
        local_4b8 = 0;
        uStack_4b0 = 0;
      }
      else {
        _objc_msgSend_stret((undefined *)&local_4b8,IVar3,PTR_s_bounds_1002e6938);
      }
      local_540 = dStack_4a0;
      (*(code *)PTR__objc_release_10027d590)(IVar3);
    }
  }
  puVar1 = PTR__objc_msgSend_10027d560;
  if (((7 < param_3) ||
      (dVar10 = local_580, dVar9 = local_558, dVar17 = local_568,
      (0xc1UL >> (param_3 & 0x3f) & 1) == 0)) &&
     (dVar10 = local_558, dVar9 = local_550, dVar17 = local_558, local_558 = local_588,
     2 < param_3 - 2)) {
    dVar10 = local_580;
    dVar17 = local_568;
  }
  dVar11 = local_560;
  dVar12 = dVar9;
  dVar13 = local_578;
  dVar15 = local_548;
  dVar18 = local_558;
  if (dVar17 < local_558) {
    if ((DAT_1002fa050 & 1) == 0) {
      _DAT_1002fa010 = 2;
      _DAT_1002fa030 = 6;
      _DAT_1002fa020 = 0;
      uRam00000001002fa028 = 7;
      _DAT_1002fa040 = _DAT_1001713a0;
      uRam00000001002fa048 = _UNK_1001713a8;
      DAT_1002fa050 = 1;
    }
    param_3 = *(long_long *)(&DAT_1002fa010 + param_3 * 8);
    dVar11 = local_570;
    dVar12 = dVar10;
    dVar13 = local_548;
    local_570 = local_560;
    dVar15 = local_578;
    dVar10 = dVar9;
    dVar18 = dVar17;
    dVar17 = local_558;
  }
  local_548 = local_540;
  dVar9 = dVar13;
  dVar14 = local_540;
  dVar16 = dVar15;
  if ((2 < param_3) &&
     (local_548 = dVar11, dVar9 = local_540, dVar14 = local_570, dVar16 = local_540, 2 < param_3 - 4
     )) {
    dVar9 = dVar13;
    dVar16 = dVar15;
  }
  local_560 = dVar18;
  local_558 = dVar14;
  local_550 = dVar17;
  local_588 = dVar10;
  local_580 = dVar9;
  local_578 = dVar12;
  if (dVar16 < dVar14) {
    if ((DAT_1002fa0a0 & 1) == 0) {
      _DAT_1002fa060 = 6;
      _DAT_1002fa080 = 2;
      _DAT_1002fa090 = 0;
      uRam00000001002fa098 = 3;
      _DAT_1002fa070 = _DAT_100171480;
      uRam00000001002fa078 = _UNK_100171488;
      DAT_1002fa0a0 = 1;
    }
    param_3 = *(long_long *)(&DAT_1002fa060 + param_3 * 8);
    local_560 = dVar12;
    local_558 = dVar16;
    local_550 = dVar10;
    dVar16 = dVar14;
    local_588 = dVar17;
    local_580 = local_548;
    local_578 = dVar18;
    local_548 = dVar9;
  }
  local_568 = (local_550 - local_560) * DAT_100170dc0 + local_560;
  local_570 = (dVar16 - local_558) * DAT_100170dc0 + local_558;
  local_540 = dVar16;
  uVar2 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_canvasView_1002e6c08);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  uVar8 = (*(code *)puVar1)(local_568,uVar2,PTR_s_alignToNearestPixel__1002e93c0);
  local_568 = local_570;
  local_570 = (double)uVar8;
  (*(code *)PTR__objc_release_10027d590)(uVar2);
  _objc_msgSend_stret((undefined *)&local_538,param_1,op);
  local_538 = local_560;
  local_530 = local_558;
  local_528 = local_570;
  local_520 = local_548;
  local_518 = local_550;
  local_510 = local_548;
  local_508 = local_550;
  local_500 = local_568;
  local_4f8 = local_588;
  local_4f0 = local_580;
  local_4e8 = local_570;
  local_4e0 = local_580;
  local_4d8 = local_578;
  local_4d0 = local_540;
  local_4c8 = local_560;
  local_4c0 = local_568;
  pdVar5 = &local_538;
  pdVar6 = adStack_618;
  for (lVar4 = 0x10; lVar4 != 0; lVar4 = lVar4 + -1) {
    *pdVar6 = *pdVar5;
    pdVar5 = pdVar5 + (ulong)bVar7 * -2 + 1;
    pdVar6 = pdVar6 + (ulong)bVar7 * -2 + 1;
  }
  (*(code *)puVar1)(param_1,PTR_s_setHandles__1002e8480);
  return param_3;
}



// ===== translateWithDelta:toLocation:  @ 0x100058dec =====

/* Function Stack Size: 0x30 bytes */

void __thiscall
Crop::translateWithDelta_toLocation_
          (Crop *this,ID param_1,SEL param_2,CGPoint param_3,CGPoint param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ID IVar4;
  ID IVar5;
  SEL extraout_RDX;
  SEL extraout_RDX_00;
  SEL extraout_RDX_01;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  double dStack_140;
  undefined8 local_138;
  double dStack_130;
  undefined8 local_128;
  double dStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  double dStack_100;
  undefined8 local_f8;
  double dStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  double local_c8;
  undefined8 uStack_c0;
  double local_b8 [15];
  double dStack_40;
  
  puVar2 = PTR_s_canvasView_1002e6c08;
  dVar8 = param_4.field1_0x8;
  dVar7 = param_4.field0_0x0;
  local_b8[0xc] = dVar7 - *(double *)(this + _mouseDownOffset);
  local_b8[0xd] = dVar8 - *(double *)(this + _mouseDownOffset + 8);
  local_b8[0xe] = *(double *)(this + _rect + 0x10);
  dStack_40 = *(double *)(this + _rect + 0x10 + 8);
  if (local_b8[0xc] < 0.0) {
LAB_100058f14:
    local_b8[0xc] = 0.0;
  }
  else {
    uVar3 = (*(code *)PTR__objc_msgSend_10027d560)(this,PTR_s_canvasView_1002e6c08);
    IVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
    if (IVar4 == 0) {
      local_b8[10] = 0.0;
      local_b8[0xb] = 0.0;
      local_b8[8] = 0.0;
      local_b8[9] = 0.0;
    }
    else {
      _objc_msgSend_stret((undefined *)(local_b8 + 8),IVar4,PTR_s_bounds_1002e6938);
    }
    dVar6 = local_b8[8];
    (*(code *)PTR__objc_release_10027d590)(IVar4);
    param_2 = extraout_RDX;
    if (dVar7 <= dVar6) goto LAB_100058f14;
    dVar6 = local_b8[0xc] + local_b8[0xe];
    uVar3 = (*(code *)PTR__objc_msgSend_10027d560)(this,puVar2);
    IVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
    if (IVar4 == 0) {
      local_b8[6] = 0.0;
      local_b8[7] = 0.0;
      local_b8[4] = 0.0;
      local_b8[5] = 0.0;
    }
    else {
      _objc_msgSend_stret((undefined *)(local_b8 + 4),IVar4,PTR_s_bounds_1002e6938);
    }
    if (dVar6 <= local_b8[6]) {
      uVar3 = (*(code *)PTR__objc_msgSend_10027d560)(this,puVar2);
      IVar5 = _objc_retainAutoreleasedReturnValue(uVar3);
      if (IVar5 == 0) {
        local_b8[2] = 0.0;
        local_b8[3] = 0.0;
        local_b8[0] = 0.0;
        local_b8[1] = 0.0;
      }
      else {
        _objc_msgSend_stret((undefined *)local_b8,IVar5,PTR_s_bounds_1002e6938);
      }
      puVar1 = PTR__objc_release_10027d590;
      dVar6 = local_b8[2] + local_b8[0];
      (*(code *)PTR__objc_release_10027d590)(IVar5);
      (*(code *)puVar1)(IVar4);
      param_2 = extraout_RDX_00;
      if (dVar6 <= dVar7) goto LAB_100058fe1;
    }
    else {
      (*(code *)PTR__objc_release_10027d590)(IVar4);
LAB_100058fe1:
      uVar3 = (*(code *)PTR__objc_msgSend_10027d560)(this,puVar2);
      IVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
      if (IVar4 == 0) {
        local_c8 = 0.0;
        uStack_c0 = 0;
        local_d8 = 0;
        uStack_d0 = 0;
      }
      else {
        _objc_msgSend_stret((undefined *)&local_d8,IVar4,PTR_s_bounds_1002e6938);
      }
      local_b8[0xc] = local_c8 - local_b8[0xe];
      (*(code *)PTR__objc_release_10027d590)(IVar4);
      param_2 = extraout_RDX_01;
    }
  }
  puVar2 = PTR_s_canvasView_1002e6c08;
  if (0.0 <= local_b8[0xd]) {
    uVar3 = (*(code *)PTR__objc_msgSend_10027d560)(this,PTR_s_canvasView_1002e6c08,param_2);
    IVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
    if (IVar4 == 0) {
      local_e8 = 0;
      uStack_e0 = 0;
      local_f8 = 0;
      dStack_f0 = 0.0;
    }
    else {
      _objc_msgSend_stret((undefined *)&local_f8,IVar4,PTR_s_bounds_1002e6938);
    }
    dVar7 = dStack_f0;
    (*(code *)PTR__objc_release_10027d590)(IVar4);
    if (dVar7 < dVar8) {
      dVar7 = local_b8[0xd] + dStack_40;
      uVar3 = (*(code *)PTR__objc_msgSend_10027d560)(this,puVar2);
      IVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
      if (IVar4 == 0) {
        local_108 = 0;
        dStack_100 = 0.0;
        local_118 = 0;
        uStack_110 = 0;
      }
      else {
        _objc_msgSend_stret((undefined *)&local_118,IVar4,PTR_s_bounds_1002e6938);
      }
      if (dVar7 <= dStack_100) {
        uVar3 = (*(code *)PTR__objc_msgSend_10027d560)(this,puVar2);
        IVar5 = _objc_retainAutoreleasedReturnValue(uVar3);
        if (IVar5 == 0) {
          local_128 = 0;
          dStack_120 = 0.0;
          local_138 = 0;
          dStack_130 = 0.0;
        }
        else {
          _objc_msgSend_stret((undefined *)&local_138,IVar5,PTR_s_bounds_1002e6938);
        }
        puVar1 = PTR__objc_release_10027d590;
        dVar7 = dStack_120 + dStack_130;
        (*(code *)PTR__objc_release_10027d590)(IVar5);
        (*(code *)puVar1)(IVar4);
        if (dVar8 < dVar7) goto LAB_10005925a;
      }
      else {
        (*(code *)PTR__objc_release_10027d590)(IVar4);
      }
      uVar3 = (*(code *)PTR__objc_msgSend_10027d560)(this,puVar2);
      IVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
      if (IVar4 == 0) {
        local_148 = 0;
        dStack_140 = 0.0;
        local_158 = 0;
        uStack_150 = 0;
      }
      else {
        _objc_msgSend_stret((undefined *)&local_158,IVar4,PTR_s_bounds_1002e6938);
      }
      local_b8[0xd] = dStack_140 - dStack_40;
      (*(code *)PTR__objc_release_10027d590)(IVar4);
      goto LAB_10005925a;
    }
  }
  local_b8[0xd] = 0.0;
LAB_10005925a:
  (*(code *)PTR__objc_msgSend_10027d560)(this,PTR_s_setHandlesFromRect__1002e98b0);
  return;
}



// ===== setHandlesFromRect:  @ 0x10005929f =====

/* Function Stack Size: 0x30 bytes */

void Crop::setHandlesFromRect_(ID param_1,SEL param_2,CGRect param_3)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  double *pdVar6;
  double *pdVar7;
  byte bVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  double adStack_178 [16];
  undefined8 local_f8;
  double dStack_f0;
  undefined1 local_e8 [16];
  CGPoint local_d8;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  double local_a8;
  double local_a0;
  undefined8 local_98;
  undefined8 local_90;
  double local_88;
  double local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 local_50;
  double local_48;
  double local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined8 local_30;
  
  bVar8 = 0;
  _objc_msgSend_stret((undefined *)&local_a8,param_1,PTR_s_handles_1002e6518);
  puVar1 = PTR__objc_msgSend_10027d560;
  local_d8 = param_3.field0_0x0;
  local_a8 = param_3.field0_0x0.field0_0x0;
  local_a0 = param_3.field0_0x0.field1_0x8;
  local_b8._8_4_ = param_3.field0_0x0.field0_0x0._0_4_;
  local_b8._0_8_ = local_a0;
  local_b8._12_4_ = param_3.field0_0x0.field0_0x0._4_4_;
  dStack_f0 = param_3.field1_0x10.field0_0x0 + local_a8;
  local_40 = param_3.field1_0x10.field1_0x8 + local_a0;
  uVar9 = SUB84(local_40,0);
  uVar10 = (undefined4)((ulong)local_40 >> 0x20);
  local_c8._8_4_ = uVar9;
  local_c8._0_8_ = dStack_f0;
  local_c8._12_4_ = uVar10;
  local_68._8_4_ = uVar9;
  local_68._0_8_ = dStack_f0;
  local_68._12_4_ = uVar10;
  local_e8._8_4_ = uVar9;
  local_e8._0_8_ = (dStack_f0 - local_a8) * DAT_100170dc0 + local_a8;
  local_e8._12_4_ = uVar10;
  local_f8 = (local_40 - local_a0) * DAT_100170dc0 + local_a0;
  local_88 = dStack_f0;
  local_80 = local_a0;
  local_48 = local_a8;
  uVar3 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_canvasView_1002e6c08);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar3 = (*(code *)puVar1)(local_e8._0_4_,uVar4,PTR_s_alignToNearestPixel__1002e93c0);
  auVar2 = local_e8;
  local_e8._4_4_ = local_f8._4_4_;
  local_e8._0_4_ = (undefined4)local_f8;
  local_e8._8_8_ = auVar2._8_8_;
  local_f8 = (double)uVar3;
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  local_98 = local_f8;
  local_90 = local_b8._0_8_;
  local_58 = local_f8;
  local_50 = local_c8._8_8_;
  local_78 = local_c8._0_8_;
  local_70 = local_e8._0_8_;
  local_38 = local_d8.field0_0x0._0_4_;
  uStack_34 = local_d8.field0_0x0._4_4_;
  local_30 = local_e8._0_8_;
  pdVar6 = &local_a8;
  pdVar7 = adStack_178;
  for (lVar5 = 0x10; lVar5 != 0; lVar5 = lVar5 + -1) {
    *pdVar7 = *pdVar6;
    pdVar6 = pdVar6 + (ulong)bVar8 * -2 + 1;
    pdVar7 = pdVar7 + (ulong)bVar8 * -2 + 1;
  }
  (*(code *)puVar1)(param_1,PTR_s_setHandles__1002e8480);
  return;
}



// ===== drawContentsInView:  @ 0x10005943c =====

/* Function Stack Size: 0x18 bytes */

void Crop::drawContentsInView_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ID self;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 local_d8 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  uVar4 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  puVar3 = PTR_s_saveGraphicsState_1002e6a70;
  puVar1 = PTR__objc_msgSend_10027d560;
  (*(code *)PTR__objc_msgSend_10027d560)
            (PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98,PTR_s_saveGraphicsState_1002e6a70);
  puVar2 = PTR_s_bezierPathWithRect__1002e6520;
  uVar5 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSBezierPath_1002eea90,
                            PTR_s_bezierPathWithRect__1002e6520);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)puVar1)(PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98,puVar3);
  puVar3 = PTR__OBJC_CLASS___NSBezierPath_1002eea90;
  uVar6 = (*(code *)puVar1)(param_1,PTR_s_canvasView_1002e6c08);
  self = _objc_retainAutoreleasedReturnValue(uVar6);
  if (self == 0) {
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_58,self,PTR_s_bounds_1002e6938);
  }
  uVar6 = (*(code *)puVar1)(puVar3,puVar2);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(self);
  (*(code *)puVar1)(uVar6,PTR_s_appendBezierPath__1002e86f8,uVar5);
  (*(code *)puVar1)(uVar6,PTR_s_setWindingRule__1002e8700,1);
  (*(code *)puVar1)(uVar6,PTR_s_addClip_1002e86d8);
  uVar7 = (*(code *)puVar1)(0,DAT_1001710b8,PTR__OBJC_CLASS___NSColor_1002eea80,
                            PTR_s_colorWithWhite_alpha__1002e6508);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  (*(code *)puVar1)(uVar7,PTR_s_set_1002e6510);
  (*(code *)puVar2)(uVar7);
  (*(code *)puVar1)(uVar6,PTR_s_fill_1002e6aa8);
  (*(code *)puVar1)(PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98,
                    PTR_s_restoreGraphicsState_1002e6ab0);
  uVar7 = (*(code *)puVar1)(param_1,PTR_s_class_1002e6a28);
  lVar8 = (*(code *)puVar1)(uVar7,PTR_s_numberOfHandles_1002e8488);
  if (0 < lVar8) {
    puVar10 = local_d8 + 1;
    lVar8 = 0;
    do {
      _objc_msgSend_stret((undefined *)local_d8,param_1,PTR_s_handles_1002e6518);
      (*(code *)puVar1)(puVar10[-1],*puVar10,param_1,PTR_s_drawHandle_inView_atPoint__1002e93b0,
                        lVar8,uVar4);
      lVar8 = lVar8 + 1;
      uVar7 = (*(code *)puVar1)(param_1,PTR_s_class_1002e6a28);
      lVar9 = (*(code *)puVar1)(uVar7,PTR_s_numberOfHandles_1002e8488);
      puVar10 = puVar10 + 2;
    } while (lVar8 < lVar9);
  }
  (*(code *)PTR__objc_msgSend_10027d560)
            (PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98,PTR_s_restoreGraphicsState_1002e6ab0);
  puVar1 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar6);
  (*(code *)puVar1)(uVar5);
  (*(code *)puVar1)(uVar4);
  return;
}



// ===== handle:atPoint:  @ 0x1000596ca =====

/* Function Stack Size: 0x28 bytes */

ID __thiscall
Crop::handle_atPoint_(Crop *this,ID param_1,SEL param_2,long_long param_3,CGPoint param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ID IVar4;
  undefined8 uVar5;
  
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar3 = (*(code *)PTR__objc_msgSend_10027d560)
                    (PTR__OBJC_CLASS___NSBezierPath_1002eea90,PTR_s_bezierPath_1002e7f08);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)puVar1)(param_4.field0_0x0,param_4.field1_0x8,uVar3,PTR_s_moveToPoint__1002e66b0);
  puVar2 = PTR_s_relativeLineToPoint__1002e98b8;
  switch(param_2) {
  case (SEL)0x0:
    (*(code *)puVar1)(DAT_100171148,0,uVar3,PTR_s_relativeLineToPoint__1002e98b8);
    (*(code *)puVar1)(0,DAT_100170fe0,uVar3,puVar2);
    (*(code *)puVar1)(DAT_100171470,0,uVar3,puVar2);
    (*(code *)puVar1)(0,DAT_100170ec0,uVar3,puVar2);
    uVar5 = DAT_100171080;
    goto LAB_10005992f;
  case (SEL)0x1:
    (*(code *)puVar1)(DAT_100171460,0,uVar3,PTR_s_relativeLineToPoint__1002e98b8);
    (*(code *)puVar1)(0,DAT_100170fe0,uVar3,puVar2);
    (*(code *)puVar1)(DAT_100171468,0,uVar3,puVar2);
    uVar5 = DAT_100171080;
    goto LAB_10005998f;
  case (SEL)0x2:
    (*(code *)puVar1)(0,DAT_100171148,uVar3,PTR_s_relativeLineToPoint__1002e98b8);
    (*(code *)puVar1)(DAT_100171080,0,uVar3,puVar2);
    (*(code *)puVar1)(0,DAT_100171470,uVar3,puVar2);
    (*(code *)puVar1)(DAT_100171470,0,uVar3,puVar2);
    (*(code *)puVar1)(0,DAT_100171080,uVar3,puVar2);
    break;
  case (SEL)0x3:
    (*(code *)puVar1)(0,DAT_100171460,uVar3,PTR_s_relativeLineToPoint__1002e98b8);
    (*(code *)puVar1)(DAT_100171080,0,uVar3,puVar2);
    (*(code *)puVar1)(0,DAT_100171468,uVar3,puVar2);
    uVar5 = DAT_100170fe0;
    goto LAB_100059a76;
  case (SEL)0x4:
    (*(code *)puVar1)(DAT_100171468,0,uVar3,PTR_s_relativeLineToPoint__1002e98b8);
    (*(code *)puVar1)(0,DAT_100171080,uVar3,puVar2);
    (*(code *)puVar1)(DAT_100170ec0,0,uVar3,puVar2);
    (*(code *)puVar1)(0,DAT_100171470,uVar3,puVar2);
    uVar5 = DAT_100170fe0;
LAB_10005992f:
    (*(code *)puVar1)(uVar5,0,uVar3,puVar2);
    break;
  case (SEL)0x5:
    (*(code *)puVar1)(DAT_100171460,0,uVar3,PTR_s_relativeLineToPoint__1002e98b8);
    (*(code *)puVar1)(0,DAT_100171080,uVar3,puVar2);
    (*(code *)puVar1)(DAT_100171468,0,uVar3,puVar2);
    uVar5 = DAT_100170fe0;
LAB_10005998f:
    (*(code *)puVar1)(0,uVar5,uVar3,puVar2);
    (*(code *)puVar1)(DAT_100171460,0,uVar3,puVar2);
    break;
  case (SEL)0x6:
    (*(code *)puVar1)(DAT_100171148,0,uVar3,PTR_s_relativeLineToPoint__1002e98b8);
    (*(code *)puVar1)(0,DAT_100171080,uVar3,puVar2);
    (*(code *)puVar1)(DAT_100171470,0,uVar3,puVar2);
    (*(code *)puVar1)(0,DAT_100171470,uVar3,puVar2);
    (*(code *)puVar1)(DAT_100171080,0,uVar3,puVar2);
    break;
  case (SEL)0x7:
    (*(code *)puVar1)(0,DAT_100171460,uVar3,PTR_s_relativeLineToPoint__1002e98b8);
    (*(code *)puVar1)(DAT_100170fe0,0,uVar3,puVar2);
    (*(code *)puVar1)(0,DAT_100171468,uVar3,puVar2);
    uVar5 = DAT_100171080;
LAB_100059a76:
    (*(code *)puVar1)(uVar5,0,uVar3,puVar2);
    (*(code *)puVar1)(0,DAT_100171460,uVar3,puVar2);
    break;
  default:
    _NSLog(&cf_Invalidhandle);
  }
  (*(code *)PTR__objc_msgSend_10027d560)(uVar3,PTR_s_closePath_1002e66c0);
  IVar4 = _objc_autoreleaseReturnValue(uVar3);
  return IVar4;
}



// ===== drawHandle:inView:atPoint:  @ 0x100059adc =====

/* Function Stack Size: 0x30 bytes */

void Crop::drawHandle_inView_atPoint_
               (ID param_1,SEL param_2,long_long param_3,ID param_4,CGPoint param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID self;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  puVar1 = PTR__objc_msgSend_10027d560;
  (*(code *)PTR__objc_msgSend_10027d560)
            (PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98,PTR_s_saveGraphicsState_1002e6a70);
  uVar3 = (*(code *)puVar1)(param_5.field0_0x0,param_5.field1_0x8,param_1,
                            PTR_s_handle_atPoint__1002e98a0,param_3);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSColor_1002eea80,PTR_s_blackColor_1002e6970);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)puVar1)(uVar4,PTR_s_set_1002e6510);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  (*(code *)puVar1)(uVar3,PTR_s_fill_1002e6aa8);
  (*(code *)puVar1)(DAT_100170c08,uVar3,PTR_s_setLineWidth__1002e6530);
  uVar4 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSColor_1002eea80,PTR_s_whiteColor_1002e6fc0);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)puVar1)(uVar4,PTR_s_set_1002e6510);
  (*(code *)puVar2)(uVar4);
  uVar4 = (*(code *)puVar1)(param_1,PTR_s_canvasView_1002e6c08);
  self = _objc_retainAutoreleasedReturnValue(uVar4);
  if (self == 0) {
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_58,self,PTR_s_bounds_1002e6938);
  }
  (*(code *)puVar1)(uVar3,PTR_s_strokeInsideWithinRect__1002e8e58);
  (*(code *)puVar2)(self);
  (*(code *)puVar1)(PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98,
                    PTR_s_restoreGraphicsState_1002e6ab0);
  (*(code *)puVar2)(uVar3);
  return;
}



// ===== setHandles:  @ 0x100059c5d =====

/* Function Stack Size: 0x90 bytes */

void Crop::setHandles_(ID param_1,SEL param_2,AnonymousStructure3 param_3)

{
  double *pdVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined local_198 [104];
  double local_130;
  undefined local_118 [32];
  double local_f8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  
  puVar6 = (undefined8 *)(_handles + param_1);
  puVar5 = (undefined8 *)register0x00000020;
  for (lVar4 = 0x10; puVar2 = PTR_s_handles_1002e6518, puVar5 = puVar5 + 1, lVar4 != 0;
      lVar4 = lVar4 + -1) {
    *puVar6 = *puVar5;
    puVar6 = puVar6 + 1;
  }
  _objc_msgSend_stret((undefined *)&local_98,param_1,PTR_s_handles_1002e6518);
  _objc_msgSend_stret(local_118,param_1,puVar2);
  _objc_msgSend_stret(local_198,param_1,puVar2);
  lVar4 = _rect;
  pdVar1 = (double *)(param_1 + _rect);
  *pdVar1 = (double)CONCAT44(uStack_94,local_98);
  pdVar1[1] = (double)CONCAT44(uStack_8c,uStack_90);
  pdVar1 = (double *)(param_1 + 0x10 + lVar4);
  *pdVar1 = local_f8 - (double)CONCAT44(uStack_94,local_98);
  pdVar1[1] = local_130 - (double)CONCAT44(uStack_8c,uStack_90);
  puVar2 = PTR__objc_msgSend_10027d560;
  uVar3 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_canvasView_1002e6c08);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)puVar2)(uVar3,PTR_s_setNeedsDisplay__1002e6ac8,1);
  (*(code *)PTR__objc_release_10027d590)(uVar3);
  return;
}



// ===== didGetCreated  @ 0x100059d53 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Function Stack Size: 0x10 bytes */

char Crop::didGetCreated(ID param_1,SEL param_2)

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
  return DAT_100170eb0 <
         (double)(uVar5 & _UNK_1001710e8 | ~uVar5 & (ulong)dVar3) *
         (double)(uVar4 & _DAT_1001710e0 | ~uVar4 & (ulong)dVar2);
}



// ===== handles  @ 0x100059d9e =====

/* Function Stack Size: 0x10 bytes */

AnonymousStructure3 *
Crop::handles(AnonymousStructure3 *__return_storage_ptr__,ID param_1,SEL param_2)

{
  long lVar1;
  double *pdVar2;
  double *pdVar3;
  
  pdVar2 = (double *)(param_1 + _handles);
  pdVar3 = (double *)__return_storage_ptr__;
  for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *pdVar3 = *pdVar2;
    pdVar2 = pdVar2 + 1;
    pdVar3 = pdVar3 + 1;
  }
  return __return_storage_ptr__;
}



// ===== nudgeWithDelta:  @ 0x100059db6 =====

/* Function Stack Size: 0x20 bytes */

void Crop::nudgeWithDelta_(ID param_1,SEL param_2,CGPoint param_3)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  ID IVar4;
  double dVar5;
  double dVar6;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  double dStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  double dStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  double local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  double local_58;
  undefined8 uStack_50;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  
  dVar5 = param_3.field1_0x8;
  dVar6 = param_3.field0_0x0;
  cVar2 = (*(code *)PTR__objc_msgSend_10027d560)
                    (PTR__OBJC_CLASS___NSEvent_1002eebe0,PTR_s_isShiftDown_1002e7130);
  if (cVar2 != '\0') {
    dVar6 = dVar6 * DAT_100170eb0;
    dVar5 = dVar5 * DAT_100170eb0;
  }
  _NSOffsetRect(dVar6,dVar5,&local_40);
  puVar1 = PTR_s_canvasView_1002e6c08;
  if (0.0 <= local_40) {
    dVar6 = local_40 + local_30;
    uVar3 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_canvasView_1002e6c08);
    IVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
    if (IVar4 == 0) {
      local_58 = 0.0;
      uStack_50 = 0;
      local_68 = 0;
      uStack_60 = 0;
    }
    else {
      _objc_msgSend_stret((undefined *)&local_68,IVar4,PTR_s_bounds_1002e6938);
    }
    dVar5 = local_58;
    (*(code *)PTR__objc_release_10027d590)(IVar4);
    if (dVar5 < dVar6) {
      uVar3 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,puVar1);
      IVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
      if (IVar4 == 0) {
        local_78 = 0.0;
        uStack_70 = 0;
        local_88 = 0;
        uStack_80 = 0;
      }
      else {
        _objc_msgSend_stret((undefined *)&local_88,IVar4,PTR_s_bounds_1002e6938);
      }
      local_40 = local_78 - local_30;
      (*(code *)PTR__objc_release_10027d590)(IVar4);
    }
  }
  else {
    local_40 = 0.0;
  }
  puVar1 = PTR_s_canvasView_1002e6c08;
  if (0.0 <= local_38) {
    dVar6 = local_38 + local_28;
    uVar3 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_canvasView_1002e6c08);
    IVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
    if (IVar4 == 0) {
      local_98 = 0;
      dStack_90 = 0.0;
      local_a8 = 0;
      uStack_a0 = 0;
    }
    else {
      _objc_msgSend_stret((undefined *)&local_a8,IVar4,PTR_s_bounds_1002e6938);
    }
    dVar5 = dStack_90;
    (*(code *)PTR__objc_release_10027d590)(IVar4);
    if (dVar5 < dVar6) {
      uVar3 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,puVar1);
      IVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
      if (IVar4 == 0) {
        local_b8 = 0;
        dStack_b0 = 0.0;
        local_c8 = 0;
        uStack_c0 = 0;
      }
      else {
        _objc_msgSend_stret((undefined *)&local_c8,IVar4,PTR_s_bounds_1002e6938);
      }
      local_38 = dStack_b0 - local_28;
      (*(code *)PTR__objc_release_10027d590)(IVar4);
    }
  }
  else {
    local_38 = 0.0;
  }
  (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_setHandlesFromRect__1002e98b0);
  return;
}



// ===== moveLeft:  @ 0x10005a0a2 =====

/* Function Stack Size: 0x18 bytes */

void Crop::moveLeft_(ID param_1,SEL param_2,ID param_3)

{
  (*(code *)PTR__objc_msgSend_10027d560)(DAT_100170e18,0,param_1,PTR_s_nudgeWithDelta__1002e98c0);
  return;
}



// ===== moveRight:  @ 0x10005a0bf =====

/* Function Stack Size: 0x18 bytes */

void Crop::moveRight_(ID param_1,SEL param_2,ID param_3)

{
  (*(code *)PTR__objc_msgSend_10027d560)(DAT_100170c08,0,param_1,PTR_s_nudgeWithDelta__1002e98c0);
  return;
}



// ===== moveUp:  @ 0x10005a0dc =====

/* Function Stack Size: 0x18 bytes */

void Crop::moveUp_(ID param_1,SEL param_2,ID param_3)

{
  (*(code *)PTR__objc_msgSend_10027d560)(0,DAT_100170e18,param_1,PTR_s_nudgeWithDelta__1002e98c0);
  return;
}



// ===== moveDown:  @ 0x10005a0f9 =====

/* Function Stack Size: 0x18 bytes */

void Crop::moveDown_(ID param_1,SEL param_2,ID param_3)

{
  (*(code *)PTR__objc_msgSend_10027d560)(0,DAT_100170c08,param_1,PTR_s_nudgeWithDelta__1002e98c0);
  return;
}



// ===== acceptsFirstResponder  @ 0x10005a116 =====

/* Function Stack Size: 0x10 bytes */

char Crop::acceptsFirstResponder(ID param_1,SEL param_2)

{
  return '\x01';
}



// ===== frame  @ 0x10005a121 =====

/* Function Stack Size: 0x10 bytes */

CGRect * Crop::frame(CGRect *__return_storage_ptr__,ID param_1,SEL param_2)

{
  double dVar1;
  long lVar2;
  
  lVar2 = _rect;
  (__return_storage_ptr__->field1_0x10).field1_0x8 = *(double *)(param_1 + 0x18 + _rect);
  (__return_storage_ptr__->field1_0x10).field0_0x0 = *(double *)(param_1 + 0x10 + lVar2);
  dVar1 = *(double *)(param_1 + lVar2);
  (__return_storage_ptr__->field0_0x0).field1_0x8 = *(double *)(param_1 + 8 + lVar2);
  (__return_storage_ptr__->field0_0x0).field0_0x0 = dVar1;
  return __return_storage_ptr__;
}



// ===== windowController  @ 0x10005a153 =====

/* Function Stack Size: 0x10 bytes */

ID Crop::windowController(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID IVar4;
  
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar2 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_window_1002e6878);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  uVar3 = (*(code *)puVar1)(uVar2,PTR_s_windowController_1002e7378);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)PTR__objc_release_10027d590)(uVar2);
  IVar4 = _objc_autoreleaseReturnValue(uVar3);
  return IVar4;
}



// ===== canvasView  @ 0x10005a1a3 =====

/* Function Stack Size: 0x10 bytes */

ID Crop::canvasView(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID IVar4;
  
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar2 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_windowController_1002e7378);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  uVar3 = (*(code *)puVar1)(uVar2,PTR_s_canvasView_1002e6c08);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)PTR__objc_release_10027d590)(uVar2);
  IVar4 = _objc_autoreleaseReturnValue(uVar3);
  return IVar4;
}



// ===== window  @ 0x10005a1f3 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Function Stack Size: 0x10 bytes */

ID Crop::window(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  
  uVar1 = _objc_loadWeakRetained(param_1 + __window);
  IVar2 = _objc_autoreleaseReturnValue(uVar1);
  return IVar2;
}



// ===== .cxx_destruct  @ 0x10005a20c =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Function Stack Size: 0x10 bytes */

void Crop::_cxx_destruct(ID param_1,SEL param_2)

{
  _objc_destroyWeak(param_1 + __window);
  return;
}



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



// ===== drawingPath  @ 0x100062582 =====

/* Function Stack Size: 0x10 bytes */

ID ShapeRectangle::drawingPath(ID param_1,SEL param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID IVar5;
  long lVar6;
  undefined local_1a8 [128];
  undefined local_128 [128];
  undefined local_a8 [128];
  
  lVar2 = Shape::_drawingPath;
  puVar1 = PTR_s_handles_1002e6518;
  lVar6 = *(long *)(param_1 + Shape::_drawingPath);
  if (lVar6 == 0) {
    _objc_msgSend_stret(local_a8,param_1,PTR_s_handles_1002e6518);
    _objc_msgSend_stret(local_128,param_1,puVar1);
    _objc_msgSend_stret(local_1a8,param_1,puVar1);
    puVar1 = PTR__objc_msgSend_10027d560;
    uVar3 = (*(code *)PTR__objc_msgSend_10027d560)
                      (PTR__OBJC_CLASS___NSBezierPath_1002eea90,PTR_s_bezierPathWithRect__1002e6520)
    ;
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
    uVar3 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = uVar4;
    (*(code *)PTR__objc_release_10027d590)(uVar3);
    uVar3 = *(undefined8 *)(param_1 + lVar2);
    (*(code *)puVar1)(param_1,PTR_s_strokeWidth_1002e6528);
    (*(code *)puVar1)(uVar3,PTR_s_setLineWidth__1002e6530);
    lVar6 = *(long *)(param_1 + lVar2);
  }
  IVar5 = _objc_retainAutoreleaseReturnValue(lVar6);
  return IVar5;
}



// ===== drawingPath  @ 0x100069083 =====

/* Function Stack Size: 0x10 bytes */

ID OverlayCircle::drawingPath(ID param_1,SEL param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID IVar5;
  long lVar6;
  undefined local_1a8 [128];
  undefined local_128 [128];
  undefined local_a8 [128];
  
  lVar2 = Overlay::_drawingPath;
  puVar1 = PTR_s_handles_1002e6518;
  lVar6 = *(long *)(param_1 + Overlay::_drawingPath);
  if (lVar6 == 0) {
    _objc_msgSend_stret(local_a8,param_1,PTR_s_handles_1002e6518);
    _objc_msgSend_stret(local_128,param_1,puVar1);
    _objc_msgSend_stret(local_1a8,param_1,puVar1);
    puVar1 = PTR__objc_msgSend_10027d560;
    uVar3 = (*(code *)PTR__objc_msgSend_10027d560)
                      (PTR__OBJC_CLASS___NSBezierPath_1002eea90,
                       PTR_s_bezierPathWithOvalInRect__1002e86d0);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
    uVar3 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = uVar4;
    (*(code *)PTR__objc_release_10027d590)(uVar3);
    uVar3 = *(undefined8 *)(param_1 + lVar2);
    (*(code *)puVar1)(param_1,PTR_s_strokeWidth_1002e6528);
    (*(code *)puVar1)(uVar3,PTR_s_setLineWidth__1002e6530);
    lVar6 = *(long *)(param_1 + lVar2);
  }
  IVar5 = _objc_retainAutoreleaseReturnValue(lVar6);
  return IVar5;
}



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



// ===== setEndPoint:  @ 0x10006a30d =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Function Stack Size: 0x20 bytes */

void Selection::setEndPoint_(ID param_1,SEL param_2,CGPoint param_3)

{
  ulong *puVar1;
  undefined1 auVar2 [16];
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  lVar3 = _endPoint;
  *(double *)(param_1 + _endPoint) = param_3.field0_0x0;
  *(double *)(param_1 + 8 + lVar3) = param_3.field1_0x8;
  lVar3 = _rect;
  auVar2 = *(undefined1 (*) [16])(param_1 + _startPoint);
  auVar6 = minpd(auVar2,(undefined1  [16])param_3);
  uVar4 = (ulong)(param_3.field0_0x0 - auVar2._0_8_) & _DAT_100170e90;
  uVar5 = (ulong)(param_3.field1_0x8 - auVar2._8_8_) & _UNK_100170e98;
  *(undefined1 (*) [16])(param_1 + _rect) = auVar6;
  puVar1 = (ulong *)(param_1 + 0x10 + lVar3);
  *puVar1 = uVar4;
  puVar1[1] = uVar5;
  return;
}



// ===== endPoint  @ 0x10006a35b =====

/* Function Stack Size: 0x10 bytes */

CGPoint Selection::endPoint(ID param_1,SEL param_2)

{
  CGPoint CVar1;
  
  CVar1.field1_0x8 = *(double *)(param_1 + 8 + _endPoint);
  CVar1.field0_0x0 = *(double *)(param_1 + _endPoint);
  return CVar1;
}



// ===== dealloc  @ 0x10006a373 =====

/* Function Stack Size: 0x10 bytes */

void Selection::dealloc(ID param_1,SEL param_2)

{
  objc_super local_20;
  
  _NSLog(&cf_dealloc___,param_1);
  local_20.super_class = (class_t *)PTR_Selection_1002ef9b8;
  local_20.receiver = param_1;
  _objc_msgSendSuper2(&local_20,PTR_s_dealloc_1002e63c0);
  return;
}



// ===== drawContentsInView:  @ 0x10006a3b6 =====

/* Function Stack Size: 0x18 bytes */

void Selection::drawContentsInView_(ID param_1,SEL param_2,ID param_3)

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
  _objc_msgSend_stret(local_50,param_1,PTR_s_rect_1002e7020);
  uVar3 = (*(code *)puVar1)(puVar2,PTR_s_bezierPathWithRect__1002e6520);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSAffineTransform_1002eeb10,PTR_s_transform_1002e66c8)
  ;
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)puVar1)(DAT_100170dc0,DAT_100170dc0,uVar4,PTR_s_translateXBy_yBy__1002e66d0);
  (*(code *)puVar1)(uVar3,PTR_s_transformUsingAffineTransform__1002e66e8,uVar4);
  uVar5 = (*(code *)puVar1)(DAT_1001714d0,DAT_1001714d0,DAT_1001714d0,DAT_100171070,
                            PTR__OBJC_CLASS___NSColor_1002eea80,
                            PTR_s_colorWithDeviceRed_green_blue_al_1002e84a0);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)puVar1)(uVar5,PTR_s_set_1002e6510);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar5);
  (*(code *)puVar1)(uVar3,PTR_s_fill_1002e6aa8);
  uVar5 = (*(code *)puVar1)(DAT_1001710f8,DAT_100171100,DAT_100171108,DAT_100170c08,
                            PTR__OBJC_CLASS___NSColor_1002eea80,
                            PTR_s_colorWithDeviceRed_green_blue_al_1002e84a0);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)puVar1)(uVar5,PTR_s_set_1002e6510);
  (*(code *)puVar2)(uVar5);
  (*(code *)puVar1)(DAT_100170c08,uVar3,PTR_s_setLineWidth__1002e6530);
  (*(code *)puVar1)(uVar3,PTR_s_stroke_1002e6a90);
  (*(code *)puVar1)(PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98,
                    PTR_s_restoreGraphicsState_1002e6ab0);
  (*(code *)puVar2)(uVar4);
  (*(code *)puVar2)(uVar3);
  return;
}



// ===== rect  @ 0x10006a574 =====

/* Function Stack Size: 0x10 bytes */

CGRect * Selection::rect(CGRect *__return_storage_ptr__,ID param_1,SEL param_2)

{
  _objc_copyStruct(__return_storage_ptr__,param_1 + _rect,0x20,1,0);
  return __return_storage_ptr__;
}



// ===== setRect:  @ 0x10006a5a0 =====

/* Function Stack Size: 0x30 bytes */

void Selection::setRect_(ID param_1,SEL param_2,CGRect param_3)

{
  _objc_copyStruct(param_1 + _rect,&param_3,0x20,1,0);
  return;
}



// ===== startPoint  @ 0x10006a5c3 =====

/* Function Stack Size: 0x10 bytes */

CGPoint Selection::startPoint(ID param_1,SEL param_2)

{
  CGPoint local_18;
  
  _objc_copyStruct(&local_18,param_1 + _startPoint,0x10,1,0);
  return local_18;
}



// ===== setStartPoint:  @ 0x10006a5fe =====

/* Function Stack Size: 0x20 bytes */

void Selection::setStartPoint_(ID param_1,SEL param_2,CGPoint param_3)

{
  double local_18;
  double local_10;
  
  local_10 = param_3.field1_0x8;
  local_18 = param_3.field0_0x0;
  _objc_copyStruct(param_1 + _startPoint,&local_18,0x10,1,0);
  return;
}



// ===== encodeWithCoder:  @ 0x10006c4ec =====

/* Function Stack Size: 0x18 bytes */

void HistoryItem::encodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_s_link_1002e7940;
  uVar4 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar5 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,puVar2);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)puVar1)(param_3,PTR_s_encodeObject_forKey__1002e72f0,uVar5,&cf_link);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar5);
  uVar5 = (*(code *)puVar1)(param_1,PTR_s_serviceType_1002e8870);
  puVar3 = PTR_s_encodeInteger_forKey__1002e9f10;
  (*(code *)puVar1)(param_3,PTR_s_encodeInteger_forKey__1002e9f10,uVar5,&cf_serviceType);
  uVar5 = (*(code *)puVar1)(param_1,PTR_s_linkType_1002e7990);
  (*(code *)puVar1)(param_3,puVar3,uVar5,&cf_linkType);
  uVar5 = (*(code *)puVar1)(param_1,PTR_s_filename_1002e74b8);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)puVar1)(param_3,PTR_s_encodeObject_forKey__1002e72f0,uVar5,&cf_filename);
  (*(code *)puVar2)(uVar4);
  (*(code *)puVar2)(uVar5);
  return;
}



// ===== initWithCoder:  @ 0x10006c5e6 =====

/* Function Stack Size: 0x18 bytes */

ID HistoryItem::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  objc_super local_40;
  
  uVar4 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  local_40.super_class = (class_t *)PTR_HistoryItem_1002ef9e0;
  local_40.receiver = param_1;
  IVar5 = _objc_msgSendSuper2(&local_40,PTR_s_init_1002e6538);
  puVar1 = PTR__objc_msgSend_10027d560;
  if (IVar5 != 0) {
    uVar6 = (*(code *)PTR__objc_msgSend_10027d560)
                      (uVar4,PTR_s_decodeIntegerForKey__1002e9f18,&cf_serviceType);
    *(undefined8 *)(IVar5 + _serviceType) = uVar6;
    puVar3 = PTR_s_decodeObjectForKey__1002e7308;
    uVar6 = (*(code *)puVar1)(uVar4,PTR_s_decodeObjectForKey__1002e7308,&cf_filename);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar6);
    uVar6 = *(undefined8 *)(IVar5 + _filename);
    *(undefined8 *)(IVar5 + _filename) = uVar7;
    puVar2 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar6);
    uVar6 = (*(code *)puVar1)(uVar4,puVar3,&cf_link);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar6);
    uVar6 = *(undefined8 *)(IVar5 + _link);
    *(undefined8 *)(IVar5 + _link) = uVar7;
    (*(code *)puVar2)(uVar6);
    uVar6 = (*(code *)puVar1)(uVar4,PTR_s_decodeIntegerForKey__1002e9f18,&cf_linkType);
    *(undefined8 *)(IVar5 + _linkType) = uVar6;
  }
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  return IVar5;
}



// ===== filename  @ 0x10006c6f3 =====

/* Function Stack Size: 0x10 bytes */

ID HistoryItem::filename(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + _filename);
}



// ===== setFilename:  @ 0x10006c704 =====

/* Function Stack Size: 0x18 bytes */

void HistoryItem::setFilename_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = _filename;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = uVar3;
  (*(code *)PTR__objc_release_10027d590)(uVar1);
  return;
}



// ===== serviceType  @ 0x10006c730 =====

/* Function Stack Size: 0x10 bytes */

long_long HistoryItem::serviceType(ID param_1,SEL param_2)

{
  return *(long_long *)(param_1 + _serviceType);
}



// ===== setServiceType:  @ 0x10006c741 =====

/* Function Stack Size: 0x18 bytes */

void HistoryItem::setServiceType_(ID param_1,SEL param_2,long_long param_3)

{
  *(long_long *)(param_1 + _serviceType) = param_3;
  return;
}



// ===== linkType  @ 0x10006c752 =====

/* Function Stack Size: 0x10 bytes */

long_long HistoryItem::linkType(ID param_1,SEL param_2)

{
  return *(long_long *)(param_1 + _linkType);
}



// ===== setLinkType:  @ 0x10006c763 =====

/* Function Stack Size: 0x18 bytes */

void HistoryItem::setLinkType_(ID param_1,SEL param_2,long_long param_3)

{
  *(long_long *)(param_1 + _linkType) = param_3;
  return;
}



// ===== link  @ 0x10006c774 =====

/* Function Stack Size: 0x10 bytes */

int HistoryItem::link(char *param_1,char *param_2)

{
  return (int)*(undefined8 *)(param_1 + _link);
}



// ===== setLink:  @ 0x10006c785 =====

/* Function Stack Size: 0x18 bytes */

void HistoryItem::setLink_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = _link;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = uVar3;
  (*(code *)PTR__objc_release_10027d590)(uVar1);
  return;
}



// ===== .cxx_destruct  @ 0x10006c7b1 =====

/* Function Stack Size: 0x10 bytes */

void HistoryItem::_cxx_destruct(ID param_1,SEL param_2)

{
  _objc_storeStrong(_link + param_1,0);
  _objc_storeStrong(param_1 + _filename,0);
  return;
}



