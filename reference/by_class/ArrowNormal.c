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



