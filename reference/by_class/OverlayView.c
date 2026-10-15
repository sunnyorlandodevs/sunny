// ===== dealloc  @ 0x100056708 =====

/* Function Stack Size: 0x10 bytes */

void OverlayView::dealloc(ID param_1,SEL param_2)

{
  objc_super local_20;
  
  _NSLog(&cf_dealloc___,param_1);
  local_20.super_class = (class_t *)PTR_OverlayView_1002ef928;
  local_20.receiver = param_1;
  _objc_msgSendSuper2(&local_20,PTR_s_dealloc_1002e63c0);
  return;
}



// ===== initWithFrame:  @ 0x10005674b =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Function Stack Size: 0x30 bytes */

ID OverlayView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  objc_super local_40;
  
  local_40.super_class = (class_t *)PTR_OverlayView_1002ef928;
  local_40.receiver = param_1;
  IVar4 = _objc_msgSendSuper2(&local_40,PTR_s_initWithFrame__1002e6930);
  puVar1 = PTR__objc_msgSend_10027d560;
  if (IVar4 != 0) {
    (*(code *)PTR__objc_msgSend_10027d560)(IVar4,PTR_s_setAutoresizingMask__1002e6fb8,0x2d);
    uVar5 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSTextField_1002eeb68,PTR_s_alloc_1002e64e8);
    uVar5 = (*(code *)puVar1)(uVar5,PTR_s_init_1002e6538);
    (*(code *)puVar1)(IVar4,PTR_s_setMessageTextField__1002e9810,uVar5);
    puVar2 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar5);
    puVar3 = PTR_s_messageTextField_1002e9818;
    uVar5 = (*(code *)puVar1)(IVar4,PTR_s_messageTextField_1002e9818);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)puVar1)(uVar5,PTR_s_setDrawsBackground__1002e6958,0);
    (*(code *)puVar2)(uVar5);
    uVar5 = (*(code *)puVar1)(IVar4,puVar3);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)puVar1)(uVar5,PTR_s_setEditable__1002e6948,0);
    (*(code *)puVar2)(uVar5);
    uVar5 = (*(code *)puVar1)(IVar4,puVar3);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)puVar1)(uVar5,PTR_s_setSelectable__1002e9820,0);
    (*(code *)puVar2)(uVar5);
    uVar5 = (*(code *)puVar1)(IVar4,puVar3);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)puVar1)(uVar5,PTR_s_setBezeled__1002e8608,0);
    (*(code *)puVar2)(uVar5);
    uVar5 = (*(code *)puVar1)(IVar4,puVar3);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)puVar1)(uVar5,PTR_s_setAutoresizingMask__1002e6fb8,2);
    (*(code *)puVar2)(uVar5);
    uVar5 = (*(code *)puVar1)(IVar4,puVar3);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)puVar1)(IVar4,PTR_s_addSubview__1002e6920,uVar5);
    (*(code *)puVar2)(uVar5);
    uVar5 = (*(code *)puVar1)(PTR_TextView_1002ef138,PTR_s_alloc_1002e64e8);
    uVar5 = (*(code *)puVar1)(uVar5,PTR_s_init_1002e6538);
    (*(code *)puVar1)(IVar4,PTR_s_setSubMessageTextView__1002e9828,uVar5);
    (*(code *)puVar2)(uVar5);
    puVar3 = PTR_s_subMessageTextView_1002e9830;
    uVar5 = (*(code *)puVar1)(IVar4,PTR_s_subMessageTextView_1002e9830);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)puVar1)(uVar5,PTR_s_setDrawsBackground__1002e6958,0);
    (*(code *)puVar2)(uVar5);
    uVar5 = (*(code *)puVar1)(IVar4,puVar3);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)puVar1)(uVar5,PTR_s_setEditable__1002e6948,0);
    (*(code *)puVar2)(uVar5);
    uVar5 = (*(code *)puVar1)(IVar4,puVar3);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)puVar1)(uVar5,PTR_s_setSelectable__1002e9820,0);
    (*(code *)puVar2)(uVar5);
    uVar5 = (*(code *)puVar1)(IVar4,puVar3);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)puVar1)(uVar5,PTR_s_setLinkTextAttributes__1002e9838,0);
    (*(code *)puVar2)(uVar5);
    uVar5 = (*(code *)puVar1)(IVar4,puVar3);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)puVar1)(uVar5,PTR_s_setAutoresizingMask__1002e6fb8,5);
    (*(code *)puVar2)(uVar5);
    uVar5 = (*(code *)puVar1)(IVar4,puVar3);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)puVar1)(IVar4,PTR_s_addSubview__1002e6920,uVar5);
    (*(code *)puVar2)(uVar5);
    uVar5 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSImageView_1002eeb60,PTR_s_alloc_1002e64e8);
    uVar5 = (*(code *)puVar1)(uVar5,PTR_s_initWithFrame__1002e6930);
    (*(code *)puVar1)(IVar4,PTR_s_setIconImageView__1002e9840,uVar5);
    (*(code *)puVar2)(uVar5);
    uVar5 = (*(code *)puVar1)(IVar4,PTR_s_iconImageView_1002e9848);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)puVar1)(uVar5,PTR_s_setAutoresizingMask__1002e6fb8,5);
    (*(code *)puVar2)(uVar5);
    uVar5 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSShadow_1002eef38,PTR_s_alloc_1002e64e8);
    uVar5 = (*(code *)puVar1)(uVar5,PTR_s_init_1002e6538);
    (*(code *)puVar1)((int)DAT_100170c08,uVar5,PTR_s_setShadowBlurRadius__1002e86e8);
    uVar6 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSColor_1002eea80,PTR_s_blackColor_1002e6970);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    uVar7 = (*(code *)puVar1)((int)DAT_100170dc0,uVar6,PTR_s_colorWithAlphaComponent__1002e6a88);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    (*(code *)PTR__objc_msgSend_10027d560)(uVar5,PTR_s_setShadowColor__1002e86e0,uVar7);
    puVar2 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar7);
    (*(code *)puVar2)(uVar6);
    puVar1 = PTR__objc_msgSend_10027d560;
    (*(code *)PTR__objc_msgSend_10027d560)(0,DAT_100170e18,uVar5,PTR_s_setShadowOffset__1002e90a0);
    uVar6 = (*(code *)puVar1)(IVar4,PTR_s_iconImageView_1002e9848);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)puVar1)(uVar6,PTR_s_setShadow__1002e9850,uVar5);
    (*(code *)puVar2)(uVar6);
    uVar6 = (*(code *)puVar1)(IVar4,PTR_s_iconImageView_1002e9848);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)puVar1)(IVar4,PTR_s_addSubview__1002e6920,uVar6);
    (*(code *)puVar2)(uVar6);
    uVar6 = (*(code *)puVar1)(PTR_YRKSpinningProgressIndicator_1002ef140,PTR_s_alloc_1002e64e8);
    uVar6 = (*(code *)puVar1)(uVar6,PTR_s_initWithFrame__1002e6930);
    (*(code *)puVar1)(IVar4,PTR_s_setThrobber__1002e9858,uVar6);
    (*(code *)puVar2)(uVar6);
    puVar3 = PTR_s_throbber_1002e9860;
    uVar6 = (*(code *)puVar1)(IVar4,PTR_s_throbber_1002e9860);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    uVar7 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSColor_1002eea80,PTR_s_whiteColor_1002e6fc0);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    (*(code *)puVar1)(uVar6,PTR_s_setColor__1002e6ec0,uVar7);
    puVar2 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar7);
    (*(code *)puVar2)(uVar6);
    uVar6 = (*(code *)puVar1)(IVar4,puVar3);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)puVar1)(uVar6,PTR_s_setDrawsBackground__1002e6958,0);
    (*(code *)puVar2)(uVar6);
    uVar6 = (*(code *)puVar1)(IVar4,puVar3);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)puVar1)(uVar6,PTR_s_setDisplayedWhenStopped__1002e9868,0);
    (*(code *)puVar2)(uVar6);
    uVar6 = (*(code *)puVar1)(IVar4,puVar3);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)puVar1)(uVar6,PTR_s_setUsesThreadedAnimation__1002e9870,0);
    (*(code *)puVar2)(uVar6);
    uVar6 = (*(code *)puVar1)(IVar4,puVar3);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)puVar1)(uVar6,PTR_s_setAutoresizingMask__1002e6fb8,5);
    (*(code *)puVar2)(uVar6);
    uVar6 = (*(code *)puVar1)(IVar4,puVar3);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)puVar1)(IVar4,PTR_s_addSubview__1002e6920,uVar6);
    (*(code *)puVar2)(uVar6);
    (*(code *)puVar2)(uVar5);
  }
  return IVar4;
}



// ===== setMessage:iconType:subMessage:subMessageLink:  @ 0x100056dba =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Function Stack Size: 0x30 bytes */

void OverlayView::setMessage_iconType_subMessage_subMessageLink_
               (ID param_1,SEL param_2,ID param_3,long_long param_4,ID param_5,ID param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ID IVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ID self;
  cfstringStruct *pcVar18;
  code *pcVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined *local_250;
  undefined *local_248;
  double local_230;
  double local_210;
  long local_208;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  double dStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  double local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  double dStack_160;
  double local_158;
  double dStack_150;
  undefined8 local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  puVar2 = PTR__objc_retain_10027d598;
  local_38 = *(long *)PTR____stack_chk_guard_10027d368;
  lVar5 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  lVar6 = (*(code *)puVar2)(param_5);
  lVar7 = (*(code *)puVar2)(param_6);
  puVar2 = PTR__objc_msgSend_10027d560;
  uVar8 = (*(code *)PTR__objc_msgSend_10027d560)
                    (PTR__OBJC_CLASS___NSShadow_1002eef38,PTR_s_alloc_1002e64e8);
  uVar8 = (*(code *)puVar2)(uVar8,PTR_s_init_1002e6538);
  (*(code *)puVar2)(DAT_100170c08,uVar8,PTR_s_setShadowBlurRadius__1002e86e8);
  uVar9 = (*(code *)puVar2)(PTR__OBJC_CLASS___NSColor_1002eea80,PTR_s_blackColor_1002e6970);
  uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
  uVar10 = (*(code *)puVar2)(DAT_100170dc0,uVar9,PTR_s_colorWithAlphaComponent__1002e6a88);
  uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
  (*(code *)puVar2)(uVar8,PTR_s_setShadowColor__1002e86e0,uVar10);
  puVar1 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar10);
  (*(code *)puVar1)(uVar9);
  local_230 = DAT_100170e18;
  (*(code *)puVar2)(0,uVar8,PTR_s_setShadowOffset__1002e90a0);
  uVar9 = (*(code *)puVar2)(PTR__OBJC_CLASS___NSMutableParagraphStyle_1002eeb70,
                            PTR_s_alloc_1002e64e8);
  uVar9 = (*(code *)puVar2)(uVar9,PTR_s_init_1002e6538);
  (*(code *)puVar2)(uVar9,PTR_s_setAlignment__1002e6960,2);
  (*(code *)puVar2)(uVar9,PTR_s_setLineBreakMode__1002e9878,2);
  local_78 = *(undefined8 *)PTR__NSForegroundColorAttributeName_10027d118;
  uVar10 = (*(code *)puVar2)(PTR__OBJC_CLASS___NSColor_1002eea80,PTR_s_whiteColor_1002e6fc0);
  uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
  local_70 = *(undefined8 *)PTR__NSFontAttributeName_10027d110;
  local_58 = uVar10;
  uVar11 = (*(code *)puVar2)(DAT_100170c30,PTR__OBJC_CLASS___NSFont_1002eeb30,
                             PTR_s_systemFontOfSize__1002e9880);
  uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
  puVar1 = PTR__objc_release_10027d590;
  local_68 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_10027d1e8;
  local_60 = *(undefined8 *)PTR__NSShadowAttributeName_10027d200;
  local_50 = uVar11;
  local_48 = uVar9;
  local_40 = uVar8;
  uVar12 = (*(code *)puVar2)(PTR__OBJC_CLASS___NSDictionary_1002eeb78,
                             PTR_s_dictionaryWithObjects_forKeys_co_1002e6978,&local_58,&local_78,4)
  ;
  uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
  (*(code *)puVar1)(uVar11);
  (*(code *)puVar1)(uVar10);
  uVar10 = (*(code *)puVar2)(PTR__OBJC_CLASS___NSAttributedString_1002eeb80,PTR_s_alloc_1002e64e8);
  uVar10 = (*(code *)puVar2)(uVar10,PTR_s_initWithString_attributes__1002e69c8,lVar5,uVar12);
  (*(code *)puVar1)(lVar5);
  puVar1 = PTR_s_messageTextField_1002e9818;
  uVar11 = (*(code *)puVar2)(param_1,PTR_s_messageTextField_1002e9818);
  uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
  (*(code *)puVar2)(uVar11,PTR_s_setAttributedStringValue__1002e69d0,uVar10);
  pcVar19 = (code *)PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar11);
  uVar11 = (*(code *)puVar2)(param_1,puVar1);
  uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
  (*(code *)puVar2)(uVar11,PTR_s_sizeToFit_1002e9888);
  (*pcVar19)(uVar11);
  uVar11 = (*(code *)puVar2)(param_1,puVar1);
  IVar13 = _objc_retainAutoreleasedReturnValue(uVar11);
  if (IVar13 == 0) {
    local_138 = 0.0;
    dStack_130 = 0.0;
    local_148 = 0;
    dStack_140 = 0.0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_148,IVar13,PTR_s_frame_1002e64b0);
  }
  (*(code *)PTR__objc_release_10027d590)(IVar13);
  if (lVar6 == 0) {
    local_210 = *(double *)(PTR__NSZeroRect_10027d310 + 0x10);
    local_230 = *(double *)(PTR__NSZeroRect_10027d310 + 0x18);
    local_248 = PTR_s_subMessageTextView_1002e9830;
    uVar11 = (*(code *)puVar2)(param_1);
    uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
    (*(code *)puVar2)(uVar11,PTR_s_setString__1002e95a0,&cf___);
    (*(code *)PTR__objc_release_10027d590)(uVar11);
    local_208 = 0;
  }
  else {
    uVar11 = (*(code *)PTR__objc_msgSend_10027d560)
                       (PTR__OBJC_CLASS___NSString_1002eea68,PTR_s_stringWithFormat__1002e63a8,
                        &cf___,lVar6);
    local_208 = _objc_retainAutoreleasedReturnValue(uVar11);
    (*(code *)PTR__objc_release_10027d590)(lVar6);
    puVar3 = PTR_s_colorWithDeviceRed_green_blue_al_1002e84a0;
    puVar1 = PTR__NSForegroundColorAttributeName_10027d118;
    if (lVar7 == 0) {
      local_128 = *(undefined8 *)PTR__NSForegroundColorAttributeName_10027d118;
      uVar11 = (*(code *)puVar2)(PTR__OBJC_CLASS___NSColor_1002eea80,PTR_s_whiteColor_1002e6fc0);
      uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
      local_120 = *(undefined8 *)PTR__NSFontAttributeName_10027d110;
      local_108 = uVar11;
      uVar14 = (*(code *)puVar2)(DAT_100170e00,PTR__OBJC_CLASS___NSFont_1002eeb30,
                                 PTR_s_systemFontOfSize__1002e9880);
      uVar15 = _objc_retainAutoreleasedReturnValue(uVar14);
      local_118 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_10027d1e8;
      local_110 = *(undefined8 *)PTR__NSShadowAttributeName_10027d200;
      local_100 = uVar15;
      local_f8 = uVar9;
      local_f0 = uVar8;
      uVar14 = (*(code *)puVar2)(PTR__OBJC_CLASS___NSDictionary_1002eeb78,
                                 PTR_s_dictionaryWithObjects_forKeys_co_1002e6978,&local_108,
                                 &local_128,4);
      uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
      pcVar19 = (code *)PTR__objc_release_10027d590;
      (*(code *)PTR__objc_release_10027d590)(uVar15);
    }
    else {
      local_e8 = *(undefined8 *)PTR__NSLinkAttributeName_10027d190;
      local_e0 = *(undefined8 *)PTR__NSForegroundColorAttributeName_10027d118;
      local_b0 = lVar7;
      uVar11 = (*(code *)puVar2)(DAT_100171410,DAT_100171418,DAT_100171420,DAT_100170c08,
                                 PTR__OBJC_CLASS___NSColor_1002eea80,
                                 PTR_s_colorWithDeviceRed_green_blue_al_1002e84a0);
      uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
      local_d8 = *(undefined8 *)puVar1;
      local_230 = DAT_100171430;
      local_a8 = uVar11;
      uVar14 = (*(code *)puVar2)(DAT_100171428,DAT_100171430,DAT_100171438,DAT_100170c08,
                                 PTR__OBJC_CLASS___NSColor_1002eea80,puVar3);
      uVar15 = _objc_retainAutoreleasedReturnValue(uVar14);
      local_d0 = *(undefined8 *)PTR__NSFontAttributeName_10027d110;
      local_a0 = uVar15;
      uVar14 = (*(code *)puVar2)(DAT_100170e00,PTR__OBJC_CLASS___NSFont_1002eeb30,
                                 PTR_s_systemFontOfSize__1002e9880);
      uVar16 = _objc_retainAutoreleasedReturnValue(uVar14);
      local_c8 = *(undefined8 *)PTR__NSCursorAttributeName_10027d0c0;
      local_98 = uVar16;
      uVar14 = (*(code *)puVar2)(PTR__OBJC_CLASS___NSCursor_1002eeed0,
                                 PTR_s_pointingHandCursor_1002e9890);
      uVar17 = _objc_retainAutoreleasedReturnValue(uVar14);
      local_c0 = *(undefined8 *)PTR__NSParagraphStyleAttributeName_10027d1e8;
      local_b8 = *(undefined8 *)PTR__NSShadowAttributeName_10027d200;
      local_90 = uVar17;
      local_88 = uVar9;
      local_80 = uVar8;
      uVar14 = (*(code *)puVar2)(PTR__OBJC_CLASS___NSDictionary_1002eeb78,
                                 PTR_s_dictionaryWithObjects_forKeys_co_1002e6978,&local_b0,
                                 &local_e8,7);
      uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
      pcVar19 = (code *)PTR__objc_release_10027d590;
      (*(code *)PTR__objc_release_10027d590)(uVar17);
      (*pcVar19)(uVar16);
      (*pcVar19)(uVar15);
    }
    (*pcVar19)(uVar11);
    uVar11 = (*(code *)puVar2)(PTR__OBJC_CLASS___NSAttributedString_1002eeb80,PTR_s_alloc_1002e64e8)
    ;
    uVar11 = (*(code *)puVar2)(uVar11,PTR_s_initWithString_attributes__1002e69c8,local_208,uVar14);
    local_248 = PTR_s_subMessageTextView_1002e9830;
    uVar15 = (*(code *)puVar2)(param_1);
    uVar15 = _objc_retainAutoreleasedReturnValue(uVar15);
    uVar16 = (*(code *)puVar2)(uVar15,PTR_s_textStorage_1002e9578);
    uVar16 = _objc_retainAutoreleasedReturnValue(uVar16);
    (*(code *)puVar2)(uVar16,PTR_s_setAttributedString__1002e9898,uVar11);
    (*pcVar19)(uVar16);
    (*pcVar19)(uVar15);
    uVar15 = (*(code *)puVar2)(param_1,PTR_s_subMessageTextView_1002e9830);
    uVar15 = _objc_retainAutoreleasedReturnValue(uVar15);
    (*(code *)puVar2)(uVar15,PTR_s_setSelectable__1002e9820,1);
    (*pcVar19)(uVar15);
    local_210 = (double)(*(code *)puVar2)(uVar11,PTR_s_size_1002e66a8);
    (*pcVar19)(uVar11);
    (*pcVar19)(uVar14);
  }
  uVar11 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_iconImageView_1002e9848);
  IVar13 = _objc_retainAutoreleasedReturnValue(uVar11);
  if (IVar13 == 0) {
    local_158 = 0.0;
    dStack_150 = 0.0;
    local_168 = 0;
    dStack_160 = 0.0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_168,IVar13,PTR_s_frame_1002e64b0);
  }
  (*(code *)PTR__objc_release_10027d590)(IVar13);
  if (param_4 == 0) {
    uVar11 = (*(code *)puVar2)(param_1,PTR_s_iconImageView_1002e9848);
    uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
    (*(code *)puVar2)(uVar11,PTR_s_setHidden__1002e68b0,1);
    (*pcVar19)(uVar11);
    local_250 = PTR_s_throbber_1002e9860;
    uVar11 = (*(code *)puVar2)(param_1);
    uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
    (*(code *)puVar2)(uVar11,PTR_s_startAnimation__1002e6ad8,param_1);
    goto LAB_100057762;
  }
  local_250 = PTR_s_throbber_1002e9860;
  uVar11 = (*(code *)puVar2)(param_1);
  uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
  (*(code *)puVar2)(uVar11,PTR_s_stopAnimation__1002e6a38,param_1);
  (*pcVar19)(uVar11);
  uVar11 = (*(code *)puVar2)(param_1,PTR_s_iconImageView_1002e9848);
  uVar14 = _objc_retainAutoreleasedReturnValue(uVar11);
  uVar11 = 0;
  (*(code *)puVar2)(uVar14,PTR_s_setHidden__1002e68b0,0);
  (*pcVar19)(uVar14);
  switch(param_4) {
  case 1:
    pcVar18 = &cf_overlay_done;
    break;
  case 2:
    pcVar18 = &cf_overlay_drag;
    break;
  case 3:
    pcVar18 = &cf_overlay_failed;
    break;
  case 4:
    pcVar18 = &cf_overlay_network;
    break;
  default:
    goto switchD_100057653_default;
  }
  uVar11 = (*(code *)PTR__objc_msgSend_10027d560)
                     (PTR__OBJC_CLASS___NSImage_1002eea70,PTR_s_imageNamed__1002e6490,pcVar18);
  uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
switchD_100057653_default:
  uVar14 = (*(code *)puVar2)(param_1,PTR_s_iconImageView_1002e9848);
  uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
  (*(code *)puVar2)(uVar14,PTR_s_setImage__1002e6448,uVar11);
  (*pcVar19)(uVar14);
LAB_100057762:
  (*pcVar19)(uVar11);
  dVar4 = local_138;
  dVar21 = local_158;
  dVar22 = DAT_1001713c0;
  if (local_208 != 0) {
    dVar22 = DAT_100170fe0 + local_230 + DAT_1001713c0;
  }
  dVar23 = local_210;
  if (local_208 == 0) {
    dVar23 = 0.0;
  }
  dVar20 = dVar23;
  dStack_160 = dVar22;
  if ((lVar5 != 0) &&
     (dStack_160 = dVar22 + dStack_130 + DAT_100170eb0, dVar20 = local_138, dStack_140 = dVar22,
     local_138 <= dVar23)) {
    dVar20 = dVar23;
  }
  dVar23 = dStack_160 + dStack_150;
  dVar22 = local_158;
  if (local_158 <= dVar20) {
    dVar22 = dVar20;
  }
  dVar20 = DAT_100171440;
  if (DAT_100171440 <= dVar22) {
    dVar20 = dVar22;
  }
  dVar22 = (dVar20 + _DAT_100171448) * DAT_100170dc0;
  _floor(dVar22 - local_210 * DAT_100170dc0);
  local_148 = _floor(dVar22 - dVar4 * DAT_100170dc0);
  local_168 = _floor(dVar22 - dVar21 * DAT_100170dc0);
  puVar2 = PTR_s_superview_1002e6df8;
  uVar11 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_superview_1002e6df8);
  IVar13 = _objc_retainAutoreleasedReturnValue(uVar11);
  if (IVar13 == 0) {
    local_178 = 0.0;
    uStack_170 = 0;
    local_188 = 0;
    uStack_180 = 0;
    dVar21 = 0.0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_188,IVar13,PTR_s_frame_1002e64b0);
    dVar21 = local_178 * DAT_100170dc0;
  }
  dVar23 = dVar23 + DAT_1001713c0;
  _floor(dVar21 - dVar22);
  uVar11 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,puVar2);
  self = _objc_retainAutoreleasedReturnValue(uVar11);
  if (self == 0) {
    local_198 = 0;
    dStack_190 = 0.0;
    local_1a8 = 0;
    uStack_1a0 = 0;
    dVar21 = 0.0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_1a8,self,PTR_s_frame_1002e64b0);
    dVar21 = dStack_190 * _DAT_100171450;
  }
  _floor(DAT_100170dc8 * dVar23 + dVar21);
  puVar2 = PTR__objc_msgSend_10027d560;
  (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_setFrame__1002e6500);
  (*pcVar19)(self);
  (*pcVar19)(IVar13);
  uVar11 = (*(code *)puVar2)(param_1,PTR_s_messageTextField_1002e9818);
  uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
  puVar1 = PTR_s_setFrame__1002e6500;
  (*(code *)puVar2)(uVar11,PTR_s_setFrame__1002e6500);
  (*pcVar19)(uVar11);
  uVar11 = (*(code *)puVar2)(param_1,local_248);
  uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
  (*(code *)puVar2)(uVar11,puVar1);
  (*pcVar19)(uVar11);
  uVar11 = (*(code *)puVar2)(param_1,PTR_s_iconImageView_1002e9848);
  uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
  (*(code *)puVar2)(uVar11,puVar1);
  (*pcVar19)(uVar11);
  uVar11 = (*(code *)puVar2)(param_1,local_250);
  uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
  (*(code *)puVar2)(uVar11,puVar1);
  (*pcVar19)(uVar11);
  (*pcVar19)(uVar10);
  (*pcVar19)(uVar12);
  (*pcVar19)(uVar9);
  (*pcVar19)(uVar8);
  (*pcVar19)(lVar7);
  (*pcVar19)(local_208);
  if (*(long *)PTR____stack_chk_guard_10027d368 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



// ===== drawRect:  @ 0x100057c78 =====

/* Function Stack Size: 0x30 bytes */

void OverlayView::drawRect_(ID param_1,SEL param_2,CGRect param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined local_50 [32];
  
  puVar2 = PTR__OBJC_CLASS___NSBezierPath_1002eea90;
  _objc_msgSend_stret(local_50,param_1,PTR_s_bounds_1002e6938);
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar3 = (*(code *)PTR__objc_msgSend_10027d560)
                    (DAT_100171048,DAT_100171048,puVar2,
                     PTR_s_bezierPathWithRoundedRect_xRadiu_1002e7ff8);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSColor_1002eea80,PTR_s_blackColor_1002e6970);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)puVar1)(DAT_100171458,uVar4,PTR_s_colorWithAlphaComponent__1002e6a88);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)puVar1)(uVar5,PTR_s_set_1002e6510);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar5);
  (*(code *)puVar2)(uVar4);
  (*(code *)puVar1)(uVar3,PTR_s_fill_1002e6aa8);
  (*(code *)puVar2)(uVar3);
  return;
}



// ===== acceptsFirstResponder  @ 0x100057d72 =====

/* Function Stack Size: 0x10 bytes */

char OverlayView::acceptsFirstResponder(ID param_1,SEL param_2)

{
  return '\0';
}



// ===== messageTextField  @ 0x100057d7a =====

/* Function Stack Size: 0x10 bytes */

ID OverlayView::messageTextField(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + _messageTextField);
}



// ===== setMessageTextField:  @ 0x100057d8b =====

/* Function Stack Size: 0x18 bytes */

void OverlayView::setMessageTextField_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = _messageTextField;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = uVar3;
  (*(code *)PTR__objc_release_10027d590)(uVar1);
  return;
}



// ===== subMessageTextView  @ 0x100057db7 =====

/* Function Stack Size: 0x10 bytes */

ID OverlayView::subMessageTextView(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + _subMessageTextView);
}



// ===== setSubMessageTextView:  @ 0x100057dc8 =====

/* Function Stack Size: 0x18 bytes */

void OverlayView::setSubMessageTextView_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = _subMessageTextView;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = uVar3;
  (*(code *)PTR__objc_release_10027d590)(uVar1);
  return;
}



// ===== iconImageView  @ 0x100057df4 =====

/* Function Stack Size: 0x10 bytes */

ID OverlayView::iconImageView(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + _iconImageView);
}



// ===== setIconImageView:  @ 0x100057e05 =====

/* Function Stack Size: 0x18 bytes */

void OverlayView::setIconImageView_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = _iconImageView;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = uVar3;
  (*(code *)PTR__objc_release_10027d590)(uVar1);
  return;
}



// ===== throbber  @ 0x100057e31 =====

/* Function Stack Size: 0x10 bytes */

ID OverlayView::throbber(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + _throbber);
}



// ===== setThrobber:  @ 0x100057e42 =====

/* Function Stack Size: 0x18 bytes */

void OverlayView::setThrobber_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = _throbber;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = uVar3;
  (*(code *)PTR__objc_release_10027d590)(uVar1);
  return;
}



// ===== .cxx_destruct  @ 0x100057e6e =====

/* Function Stack Size: 0x10 bytes */

void OverlayView::_cxx_destruct(ID param_1,SEL param_2)

{
  _objc_storeStrong(_throbber + param_1,0);
  _objc_storeStrong(_iconImageView + param_1,0);
  _objc_storeStrong(_subMessageTextView + param_1,0);
  _objc_storeStrong(param_1 + _messageTextField,0);
  return;
}



