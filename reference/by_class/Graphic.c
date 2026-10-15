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



