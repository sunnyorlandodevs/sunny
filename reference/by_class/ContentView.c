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



