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



