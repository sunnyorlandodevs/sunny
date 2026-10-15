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



