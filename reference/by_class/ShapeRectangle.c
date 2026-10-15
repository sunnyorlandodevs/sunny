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



