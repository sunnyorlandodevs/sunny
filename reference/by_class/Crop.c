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



