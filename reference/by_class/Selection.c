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



