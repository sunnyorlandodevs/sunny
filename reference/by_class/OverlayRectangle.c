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



