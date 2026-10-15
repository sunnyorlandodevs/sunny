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



