// ===== loadView  @ 0x100046128 =====

/* Function Stack Size: 0x10 bytes */

void CanvasViewController::loadView(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ID self;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(PTR_ScrollView_1002ef0b8,PTR_s_alloc_1002e64e8);
  uVar4 = (*(code *)puVar1)(uVar4,PTR_s_initWithFrame__1002e6930);
  (*(code *)puVar1)(param_1,PTR_s_setScrollView__1002e90f0,uVar4);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  uVar4 = (*(code *)puVar1)(PTR_CanvasView_1002ef068,PTR_s_alloc_1002e64e8);
  uVar4 = (*(code *)puVar1)(uVar4,PTR_s_initWithFrame__1002e6930);
  (*(code *)puVar1)(param_1,PTR_s_setCanvasView__1002e90f8,uVar4);
  (*(code *)puVar2)(uVar4);
  uVar4 = (*(code *)puVar1)(param_1,PTR_s_canvasView_1002e6c08);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)puVar1)(uVar4,PTR_s_setAutoresizingMask__1002e6fb8,0x12);
  (*(code *)puVar2)(uVar4);
  uVar4 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSView_1002eec08,PTR_s_alloc_1002e64e8);
  uVar4 = (*(code *)puVar1)(uVar4,PTR_s_initWithFrame__1002e6930);
  (*(code *)puVar1)(param_1,PTR_s_setContainerDocumentView__1002e9100,uVar4);
  (*(code *)puVar2)(uVar4);
  puVar3 = PTR_s_containerDocumentView_1002e9108;
  uVar4 = (*(code *)puVar1)(param_1,PTR_s_containerDocumentView_1002e9108);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)puVar1)(uVar4,PTR_s_setWantsLayer__1002e7260,1);
  (*(code *)puVar2)(uVar4);
  uVar4 = (*(code *)puVar1)(param_1,puVar3);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)puVar1)(param_1,PTR_s_canvasView_1002e6c08);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)puVar1)(uVar4,PTR_s_addSubview__1002e6920,uVar5);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar5);
  (*(code *)puVar2)(uVar4);
  puVar3 = PTR_s_scrollView_1002e9110;
  uVar4 = (*(code *)puVar1)(param_1,PTR_s_scrollView_1002e9110);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)puVar1)(param_1,PTR_s_containerDocumentView_1002e9108);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)puVar1)(uVar4,PTR_s_setDocumentView__1002e9118,uVar5);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar5);
  (*(code *)puVar2)(uVar4);
  uVar4 = (*(code *)puVar1)(param_1,puVar3);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)puVar1)(param_1,PTR_s_setView__1002e6dd8,uVar4);
  (*(code *)puVar2)(uVar4);
  uVar4 = (*(code *)puVar1)(param_1,puVar3);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)puVar1)(param_1,puVar3);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar6 = (*(code *)puVar1)(uVar5,PTR_s_superview_1002e6df8);
  self = _objc_retainAutoreleasedReturnValue(uVar6);
  if (self == 0) {
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_58,self,PTR_s_frame_1002e64b0);
  }
  (*(code *)puVar1)(uVar4,PTR_s_setFrame__1002e6500);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(self);
  (*(code *)puVar2)(uVar5);
  (*(code *)puVar2)(uVar4);
  uVar4 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSNotificationCenter_1002eead0,
                            PTR_s_defaultCenter_1002e65d0);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  puVar3 = PTR_s_addObserver_selector_name_object_1002e69a0;
  (*(code *)puVar1)(uVar4,PTR_s_addObserver_selector_name_object_1002e69a0,param_1,
                    PTR_s_createCenteredEmojiTextWithStrin_1002e9120,
                    PTR_cf_CreateEmojiTextNotification_1002f8fe8,0);
  (*(code *)puVar2)(uVar4);
  uVar4 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSNotificationCenter_1002eead0,
                            PTR_s_defaultCenter_1002e65d0);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)puVar1)(uVar4,puVar3,param_1,PTR_s_currentToolChangedNotification__1002e9128,
                    PTR_cf_kCurrentToolChangedNotification_1002f8520,0);
  (*(code *)puVar2)(uVar4);
  uVar4 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSNotificationCenter_1002eead0,
                            PTR_s_defaultCenter_1002e65d0);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)puVar1)(uVar4,puVar3,param_1,PTR_s_selectionIndexesChangedNotificat_1002e9130,
                    PTR_cf_kSelectionIndexesChangedNotification_1002f8538,0);
  (*(code *)puVar2)(uVar4);
  return;
}



// ===== dealloc  @ 0x10004652e =====

/* Function Stack Size: 0x10 bytes */

void CanvasViewController::dealloc(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  objc_super local_30;
  
  _NSLog(&cf_dealloc___,param_1);
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar2 = (*(code *)PTR__objc_msgSend_10027d560)
                    (PTR__OBJC_CLASS___NSNotificationCenter_1002eead0,PTR_s_defaultCenter_1002e65d0)
  ;
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)puVar1)(uVar2,PTR_s_removeObserver__1002e69b0,param_1);
  (*(code *)PTR__objc_release_10027d590)(uVar2);
  (*(code *)puVar1)(param_1,PTR_s_stopEditingText_1002e9138);
  (*(code *)puVar1)(param_1,PTR_s_stopCrop_1002e9140);
  local_30.super_class = (class_t *)PTR_CanvasViewController_1002ef8d0;
  local_30.receiver = param_1;
  _objc_msgSendSuper2(&local_30,PTR_s_dealloc_1002e63c0);
  return;
}



// ===== setDocument:  @ 0x1000465cf =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Function Stack Size: 0x18 bytes */

void CanvasViewController::setDocument_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  ID self;
  code *pcVar10;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  ID local_38;
  
  lVar4 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  puVar2 = PTR_s_document_1002e69e8;
  puVar1 = PTR__objc_msgSend_10027d560;
  if (lVar4 == 0) {
    uVar5 = (*(code *)PTR__objc_msgSend_10027d560)(param_1);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)puVar1)(uVar5,PTR_s_removeObserver_forKeyPath_contex_1002e63b8,param_1,&cf_graphics,
                      PTR_LOOP_1002f8ba0);
    puVar3 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar5);
    uVar5 = (*(code *)puVar1)(param_1,puVar2);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    uVar6 = (*(code *)puVar1)(uVar5,PTR_s_image_1002e69f0);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)puVar1)(uVar6,PTR_s_removeObserver_forKeyPath_contex_1002e63b8,param_1,&cf_scale,
                      PTR_LOOP_1002f8ba8);
    (*(code *)puVar3)(uVar6);
    (*(code *)puVar3)(uVar5);
    uVar5 = (*(code *)puVar1)(param_1,PTR_s_document_1002e69e8);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    uVar6 = (*(code *)puVar1)(uVar5,PTR_s_graphics_1002e6d18);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)puVar1)(param_1,PTR_s_stopObservingGraphics__1002e8e88,uVar6);
    puVar1 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar6);
    (*(code *)puVar1)(uVar5);
  }
  else {
    uVar5 = (*(code *)PTR__objc_msgSend_10027d560)(lVar4,PTR_s_graphics_1002e6d18);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    local_58 = PTR___NSConcreteStackBlock_10027d330;
    local_50 = 0xc2000000;
    local_4c = 0;
    local_48 = FUN_100046d9a;
    local_40 = &DAT_10027fdf0;
    param_1 = (*(code *)PTR__objc_retain_10027d598)(param_1);
    local_38 = param_1;
    (*(code *)puVar1)(uVar5,PTR_s_enumerateObjectsUsingBlock__1002e6d78,&local_58);
    puVar2 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar5);
    uVar5 = (*(code *)puVar1)(param_1,PTR_s_canvasView_1002e6c08);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    uVar6 = (*(code *)puVar1)(lVar4,PTR_s_graphics_1002e6d18);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)puVar1)(uVar5,PTR_s_setGraphics__1002e9148,uVar6);
    (*(code *)puVar2)(uVar6);
    (*(code *)puVar2)(uVar5);
    puVar3 = PTR_s_image_1002e69f0;
    uVar5 = (*(code *)puVar1)(lVar4);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    uVar6 = (*(code *)puVar1)(uVar5,puVar3);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    local_68 = (*(code *)puVar1)(uVar6,PTR_s_size_1002e66a8);
    local_78 = *(undefined4 *)PTR__NSZeroPoint_10027d308;
    uStack_74 = *(undefined4 *)(PTR__NSZeroPoint_10027d308 + 4);
    uStack_70 = *(undefined4 *)(PTR__NSZeroPoint_10027d308 + 8);
    uStack_6c = *(undefined4 *)(PTR__NSZeroPoint_10027d308 + 0xc);
    (*(code *)puVar2)(uVar6);
    (*(code *)puVar2)(uVar5);
    uVar5 = (*(code *)puVar1)(param_1,PTR_s_containerDocumentView_1002e9108);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)puVar1)(uVar5,PTR_s_setFrame__1002e6500);
    (*(code *)puVar2)(uVar5);
    uVar5 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSImageView_1002eeb60,PTR_s_alloc_1002e64e8);
    uVar5 = (*(code *)puVar1)(uVar5,PTR_s_initWithFrame__1002e6930);
    (*(code *)puVar1)(param_1,PTR_s_setImageView__1002e7578,uVar5);
    (*(code *)puVar2)(uVar5);
    uVar5 = (*(code *)puVar1)(param_1,PTR_s_imageView_1002e6438);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    puVar2 = PTR_s_image_1002e69f0;
    uVar6 = (*(code *)puVar1)(lVar4,PTR_s_image_1002e69f0);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    uVar7 = (*(code *)puVar1)(uVar6,puVar2);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    (*(code *)puVar1)(uVar5,PTR_s_setImage__1002e6448,uVar7);
    pcVar10 = (code *)PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar7);
    (*pcVar10)(uVar6);
    (*pcVar10)(uVar5);
    puVar2 = PTR_s_imageView_1002e6438;
    puVar1 = PTR__objc_msgSend_10027d560;
    uVar5 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_imageView_1002e6438);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)puVar1)(uVar5,PTR_s_setAutoresizingMask__1002e6fb8,0x12);
    (*pcVar10)(uVar5);
    uVar5 = (*(code *)puVar1)(param_1,PTR_s_containerDocumentView_1002e9108);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    uVar6 = (*(code *)puVar1)(param_1,puVar2);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    uVar7 = (*(code *)puVar1)(param_1,PTR_s_canvasView_1002e6c08);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    (*(code *)puVar1)(uVar5,PTR_s_addSubview_positioned_relativeTo_1002e9150,uVar6,
                      0xffffffffffffffff,uVar7);
    (*pcVar10)(uVar7);
    (*pcVar10)(uVar6);
    (*pcVar10)(uVar5);
    lVar8 = (*(code *)puVar1)(lVar4,PTR_s_documentType_1002e6f10);
    if (lVar8 == 1) {
      uVar5 = (*(code *)puVar1)(param_1,PTR_s_videoPlayerForDocument__1002e9158,lVar4);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      (*(code *)puVar1)(param_1,PTR_s_setVideoPlayer__1002e9160,uVar5);
      (*pcVar10)(uVar5);
      uVar5 = (*(code *)puVar1)(param_1,PTR_s_videoPlayer_1002e7f28);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      uVar6 = (*(code *)puVar1)(lVar4,PTR_s_video_1002e8078);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      uVar7 = (*(code *)puVar1)(param_1,PTR_s_videoViewWithPlayer_video__1002e9168,uVar5,uVar6);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      (*(code *)puVar1)(param_1,PTR_s_setVideoView__1002e9170,uVar7);
      (*(code *)PTR__objc_release_10027d590)(uVar7);
      (*(code *)PTR__objc_release_10027d590)(uVar6);
      (*(code *)PTR__objc_release_10027d590)(uVar5);
      puVar2 = PTR_s_videoView_1002e9178;
      uVar5 = (*(code *)puVar1)(param_1,PTR_s_videoView_1002e9178);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      (*(code *)puVar1)(uVar5,PTR_s_setAutoresizingMask__1002e6fb8,0x12);
      (*(code *)PTR__objc_release_10027d590)(uVar5);
      uVar5 = (*(code *)puVar1)(param_1,PTR_s_containerDocumentView_1002e9108);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      uVar6 = (*(code *)puVar1)(param_1,puVar2);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      uVar7 = (*(code *)puVar1)(param_1,PTR_s_canvasView_1002e6c08);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      (*(code *)puVar1)(uVar5,PTR_s_addSubview_positioned_relativeTo_1002e9150,uVar6,
                        0xffffffffffffffff,uVar7);
      (*(code *)PTR__objc_release_10027d590)(uVar7);
      (*(code *)PTR__objc_release_10027d590)(uVar6);
      pcVar10 = (code *)PTR__objc_release_10027d590;
      (*(code *)PTR__objc_release_10027d590)(uVar5);
    }
    puVar2 = PTR_s_addObserver_forKeyPath_options_c_1002e63b0;
    (*(code *)puVar1)(lVar4,PTR_s_addObserver_forKeyPath_options_c_1002e63b0,param_1,&cf_graphics,7,
                      PTR_LOOP_1002f8ba0);
    uVar5 = (*(code *)puVar1)(lVar4,PTR_s_image_1002e69f0);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)puVar1)(uVar5,puVar2,param_1,&cf_scale,1,PTR_LOOP_1002f8ba8);
    (*pcVar10)(uVar5);
    uVar5 = (*(code *)puVar1)(param_1,PTR_s_windowController_1002e7378);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    uVar6 = (*(code *)puVar1)(uVar5,PTR_s_window_1002e6878);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    uVar7 = (*(code *)puVar1)(param_1,PTR_s_canvasView_1002e6c08);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    (*(code *)puVar1)(uVar6,PTR_s_makeFirstResponder__1002e6e58,uVar7);
    (*pcVar10)(uVar7);
    (*pcVar10)(uVar6);
    (*pcVar10)(uVar5);
    puVar2 = PTR_s_scrollView_1002e9110;
    uVar5 = (*(code *)puVar1)(param_1,PTR_s_scrollView_1002e9110);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    puVar3 = PTR_s_documentView_1002e9180;
    uVar6 = (*(code *)puVar1)(uVar5,PTR_s_documentView_1002e9180);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    uVar7 = (*(code *)puVar1)(param_1,puVar2);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    uVar9 = (*(code *)puVar1)(uVar7,puVar3);
    self = _objc_retainAutoreleasedReturnValue(uVar9);
    if (self == 0) {
      local_88 = 0;
      uStack_80 = 0;
      local_98 = 0;
      uStack_90 = 0;
    }
    else {
      _objc_msgSend_stret((undefined *)&local_98,self,PTR_s_bounds_1002e6938);
    }
    (*(code *)PTR__objc_msgSend_10027d560)(0,uStack_80,uVar6,PTR_s_scrollPoint__1002e9188);
    puVar1 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(self);
    (*(code *)puVar1)(uVar7);
    (*(code *)puVar1)(uVar6);
    (*(code *)puVar1)(uVar5);
    (*(code *)puVar1)(local_38);
  }
  _objc_storeWeak(param_1 + __document,lVar4);
  (*(code *)PTR__objc_release_10027d590)(lVar4);
  return;
}



// ===== mouseDown:  @ 0x100046e4c =====

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x18 bytes */

void CanvasViewController::mouseDown_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ID self;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  code *pcVar13;
  undefined8 uVar14;
  undefined8 in_XMM1_Qa;
  long local_60 [6];
  
  uVar6 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  puVar2 = PTR_s_canvasView_1002e6c08;
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar7 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_canvasView_1002e6c08);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  uVar14 = (*(code *)puVar1)(uVar7,PTR_s_pixelAlignedLocationFromEvent__1002e9190,uVar6);
  (*(code *)PTR__objc_release_10027d590)(uVar7);
  uVar7 = (*(code *)puVar1)(param_1,puVar2);
  self = _objc_retainAutoreleasedReturnValue(uVar7);
  if (self == 0) {
    local_60[3] = 0;
    local_60[4] = 0;
    local_60[1] = 0;
    local_60[2] = 0;
  }
  else {
    _objc_msgSend_stret((undefined *)(local_60 + 1),self,PTR_s_bounds_1002e6938);
  }
  cVar4 = _NSPointInRect(uVar14,in_XMM1_Qa);
  (*(code *)PTR__objc_release_10027d590)(self);
  if (cVar4 == '\0') {
    *(undefined1 *)(param_1 + _isMouseDown) = 0;
    goto LAB_100047cab;
  }
  *(undefined1 *)(param_1 + _isMouseDown) = 1;
  cVar4 = *(char *)(param_1 + _overrideCreationBlock);
  *(undefined1 *)(param_1 + _overrideCreationBlock) = 0;
  (*(code *)puVar1)(param_1,PTR_s_stopEditingText_1002e9138);
  lVar10 = _mouseLocation;
  *(undefined8 *)(param_1 + _mouseLocation) = uVar14;
  *(undefined8 *)(param_1 + 8 + lVar10) = in_XMM1_Qa;
  *(undefined8 *)(param_1 + _panType) = 0;
  *(undefined8 *)(param_1 + _resizeHandle) = 0xffffffffffffffff;
  uVar7 = (*(code *)puVar1)(param_1,PTR_s_crop_1002e6d98);
  lVar8 = _objc_retainAutoreleasedReturnValue(uVar7);
  (*(code *)PTR__objc_release_10027d590)(lVar8);
  puVar2 = PTR_Graphic_1002eeee0;
  if (lVar8 != 0) {
    uVar7 = (*(code *)puVar1)(param_1,PTR_s_windowController_1002e7378);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    uVar14 = (*(code *)puVar1)(uVar7,PTR_s_window_1002e6878);
    uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
    uVar9 = (*(code *)puVar1)(param_1,PTR_s_crop_1002e6d98);
    uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
    (*(code *)puVar1)(uVar14,PTR_s_makeFirstResponder__1002e6e58,uVar9);
    puVar2 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar9);
    (*(code *)puVar2)(uVar14);
    (*(code *)puVar2)(uVar7);
    uVar7 = (*(code *)puVar1)(param_1,PTR_s_crop_1002e6d98);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    lVar10 = (*(code *)puVar1)(*(undefined8 *)(param_1 + _mouseLocation),
                               *(undefined8 *)(param_1 + 8 + _mouseLocation),uVar7,
                               PTR_s_handleUnderPoint__1002e9198);
    (*(code *)puVar2)(uVar7);
    uVar7 = (*(code *)puVar1)(param_1,PTR_s_crop_1002e6d98);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    (*(code *)puVar1)(*(undefined8 *)(param_1 + _mouseLocation),
                      *(undefined8 *)(param_1 + 8 + _mouseLocation),uVar7,
                      PTR_s_mouseDownOnHandle_atLocation__1002e91a0,lVar10);
    (*(code *)puVar2)(uVar7);
    if (lVar10 == -1) {
      lVar10 = (*(code *)PTR__objc_msgSend_10027d560)(uVar6,PTR_s_clickCount_1002e91a8);
      if (lVar10 < 2) {
        *(undefined8 *)(param_1 + _panType) = 7;
        uVar7 = (*(code *)puVar1)(param_1,PTR_s_canvasView_1002e6c08);
        uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
        uVar14 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSCursor_1002eeed0,
                                   PTR_s_closedHandCursor_1002e91b8);
        uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
        (*(code *)puVar1)(uVar7,PTR_s_setCursor__1002e8450,uVar14);
        (*(code *)puVar2)(uVar14);
        (*(code *)puVar2)(uVar7);
      }
      else {
        (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_doCrop_1002e91b0);
      }
    }
    else {
      *(long *)(param_1 + _resizeHandle) = lVar10;
      *(undefined8 *)(param_1 + _panType) = 6;
    }
    goto LAB_100047cab;
  }
  uVar7 = (*(code *)puVar1)(param_1,PTR_s_document_1002e69e8);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  uVar14 = (*(code *)puVar1)(uVar7,PTR_s_graphics_1002e6d18);
  uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
  uVar9 = (*(code *)PTR__objc_msgSend_10027d560)
                    (*(undefined8 *)(param_1 + lVar10),*(undefined8 *)(param_1 + 8 + lVar10),puVar2,
                     PTR_s_graphicUnderPoint_handle_fromGra_1002e91c0,local_60,uVar14);
  lVar10 = _objc_retainAutoreleasedReturnValue(uVar9);
  puVar1 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar14);
  (*(code *)puVar1)(uVar7);
  puVar1 = PTR__objc_msgSend_10027d560;
  if (lVar10 == 0) {
    cVar5 = (*(code *)PTR__objc_msgSend_10027d560)
                      (PTR__OBJC_CLASS___NSEvent_1002eebe0,PTR_s_isShiftDown_1002e7130);
    if (cVar5 == '\0') {
      cVar4 = (*(code *)puVar1)(param_1,PTR_s_blockGraphicsCreationOnMouseDown_1002e9208,(int)cVar4)
      ;
      uVar7 = (*(code *)puVar1)(param_1,PTR_s_windowController_1002e7378);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      if (cVar4 == '\0') {
        uVar14 = (*(code *)puVar1)(uVar7,PTR_s_currentTool_1002e9210);
        lVar8 = (*(code *)puVar1)(param_1,PTR_s_graphicClassForTool__1002e9218,uVar14);
        (*(code *)PTR__objc_release_10027d590)(uVar7);
        if (lVar8 != 0) {
          uVar7 = (*(code *)puVar1)(param_1,PTR_s_windowController_1002e7378);
          uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
          uVar14 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSIndexSet_1002eebc8,PTR_s_indexSet_1002e6ba8
                                    );
          uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
          (*(code *)puVar1)(uVar7,PTR_s_setSelectionIndexes__1002e6bb0,uVar14);
          puVar2 = PTR__objc_release_10027d590;
          (*(code *)PTR__objc_release_10027d590)(uVar14);
          (*(code *)puVar2)(uVar7);
          lVar11 = (*(code *)puVar1)(PTR_Crop_1002ef0c8,PTR_s_class_1002e6a28);
          if (lVar8 != lVar11) {
            *(undefined8 *)(param_1 + _panType) = 1;
            uVar7 = (*(code *)puVar1)(lVar8,PTR_s_creationSizingHandle_1002e9220);
            *(undefined8 *)(param_1 + _resizeHandle) = uVar7;
            uVar7 = (*(code *)puVar1)(param_1,PTR_s_undoManager_1002e6bc8);
            uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
            (*(code *)puVar1)(uVar7,PTR_s_beginUndoGrouping_1002e6d88);
            (*(code *)puVar2)(uVar7);
            uVar7 = (*(code *)puVar1)(lVar8,PTR_s_alloc_1002e64e8);
            uVar14 = (*(code *)puVar1)(param_1,PTR_s_view_1002e6900);
            uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
            uVar9 = (*(code *)puVar1)(uVar14,PTR_s_window_1002e6878);
            uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
            uVar7 = (*(code *)puVar1)(*(undefined8 *)(param_1 + _mouseLocation),
                                      *(undefined8 *)(param_1 + 8 + _mouseLocation),uVar7,
                                      PTR_s_initAtPoint_inWindow__1002e6678,uVar9);
            (*(code *)puVar1)(param_1,PTR_s_setCreatingGraphic__1002e9238,uVar7);
            puVar2 = PTR__objc_release_10027d590;
            (*(code *)PTR__objc_release_10027d590)(uVar7);
            (*(code *)puVar2)(uVar9);
            (*(code *)puVar2)(uVar14);
            uVar7 = (*(code *)puVar1)(param_1,PTR_s_creatingGraphic_1002e9240);
            uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
            uVar14 = (*(code *)puVar1)(param_1,PTR_s_document_1002e69e8);
            uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
            uVar9 = (*(code *)puVar1)(uVar14,PTR_s_graphics_1002e6d18);
            uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
            uVar12 = (*(code *)puVar1)(uVar7,PTR_s_proposedIndexInGraphics__1002e91c8,uVar9);
            puVar2 = PTR__objc_release_10027d590;
            (*(code *)PTR__objc_release_10027d590)(uVar9);
            (*(code *)puVar2)(uVar14);
            (*(code *)puVar2)(uVar7);
            uVar7 = (*(code *)puVar1)(param_1,PTR_s_document_1002e69e8);
            uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
            uVar14 = (*(code *)puVar1)(uVar7,PTR_s_mutableGraphics_1002e9248);
            uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
            (*(code *)puVar1)(uVar14,PTR_s_insertObject_atIndex__1002e8008,
                              *(undefined8 *)(param_1 + _creatingGraphic),uVar12);
            goto LAB_100047c93;
          }
          *(undefined8 *)(param_1 + _panType) = 5;
          uVar7 = (*(code *)puVar1)(lVar8,PTR_s_creationSizingHandle_1002e9220);
          *(undefined8 *)(param_1 + _resizeHandle) = uVar7;
          uVar7 = (*(code *)puVar1)(lVar8,PTR_s_alloc_1002e64e8);
          uVar14 = (*(code *)puVar1)(param_1,PTR_s_view_1002e6900);
          uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
          uVar9 = (*(code *)puVar1)(uVar14,PTR_s_window_1002e6878);
          uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
          uVar7 = (*(code *)puVar1)(*(undefined8 *)(param_1 + _mouseLocation),
                                    *(undefined8 *)(param_1 + 8 + _mouseLocation),uVar7,
                                    PTR_s_initAtPoint_inWindow__1002e6678,uVar9);
          (*(code *)puVar1)(param_1,PTR_s_setCrop__1002e9228,uVar7);
          puVar2 = PTR__objc_release_10027d590;
          (*(code *)PTR__objc_release_10027d590)(uVar7);
          (*(code *)puVar2)(uVar9);
          (*(code *)puVar2)(uVar14);
          puVar3 = PTR_s_windowController_1002e7378;
          uVar7 = (*(code *)puVar1)(param_1,PTR_s_windowController_1002e7378);
          uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
          uVar14 = (*(code *)puVar1)(uVar7,PTR_s_window_1002e6878);
          uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
          uVar9 = (*(code *)puVar1)(uVar14,PTR_s_firstResponder_1002e6c98);
          uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
          puVar2 = PTR__objc_release_10027d590;
          (*(code *)PTR__objc_release_10027d590)(uVar14);
          (*(code *)puVar2)(uVar7);
          uVar7 = (*(code *)puVar1)(param_1,puVar3);
          uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
          uVar14 = (*(code *)puVar1)(uVar7,PTR_s_window_1002e6878);
          uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
          uVar12 = (*(code *)puVar1)(param_1,PTR_s_crop_1002e6d98);
          uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
          (*(code *)puVar1)(uVar14,PTR_s_makeFirstResponder__1002e6e58,uVar12);
          puVar2 = PTR__objc_release_10027d590;
          (*(code *)PTR__objc_release_10027d590)(uVar12);
          (*(code *)puVar2)(uVar14);
          (*(code *)puVar2)(uVar7);
          uVar7 = (*(code *)puVar1)(param_1,PTR_s_crop_1002e6d98);
          uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
          (*(code *)puVar1)(uVar7,PTR_s_setNextResponder__1002e9230,uVar9);
          (*(code *)puVar2)(uVar7);
          (*(code *)puVar2)(uVar9);
        }
      }
      else {
        uVar14 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSIndexSet_1002eebc8,PTR_s_indexSet_1002e6ba8);
        uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
        (*(code *)puVar1)(uVar7,PTR_s_setSelectionIndexes__1002e6bb0,uVar14);
        puVar1 = PTR__objc_release_10027d590;
        (*(code *)PTR__objc_release_10027d590)(uVar14);
        (*(code *)puVar1)(uVar7);
      }
    }
    else {
      uVar7 = (*(code *)puVar1)(param_1,PTR_s_windowController_1002e7378);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      uVar14 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSIndexSet_1002eebc8,PTR_s_indexSet_1002e6ba8);
      uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
      (*(code *)puVar1)(uVar7,PTR_s_setSelectionIndexes__1002e6bb0,uVar14);
      puVar2 = PTR__objc_release_10027d590;
      (*(code *)PTR__objc_release_10027d590)(uVar14);
      (*(code *)puVar2)(uVar7);
      uVar7 = (*(code *)puVar1)(PTR_Selection_1002ef0c0,PTR_s_alloc_1002e64e8);
      uVar7 = (*(code *)puVar1)(uVar7,PTR_s_init_1002e6538);
      (*(code *)puVar1)(param_1,PTR_s_setSelection__1002e91f8,uVar7);
      (*(code *)puVar2)(uVar7);
      (*(code *)puVar1)(*(undefined8 *)(param_1 + _mouseLocation),
                        *(undefined8 *)(param_1 + 8 + _mouseLocation),
                        *(undefined8 *)(param_1 + _selection),PTR_s_setStartPoint__1002e9200);
      *(undefined8 *)(param_1 + _panType) = 4;
    }
  }
  else {
    uVar7 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_document_1002e69e8);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    uVar14 = (*(code *)puVar1)(uVar7,PTR_s_graphics_1002e6d18);
    uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
    lVar8 = (*(code *)puVar1)(lVar10,PTR_s_proposedIndexInGraphics__1002e91c8,uVar14);
    puVar2 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar14);
    (*(code *)puVar2)(uVar7);
    uVar7 = (*(code *)puVar1)(param_1,PTR_s_document_1002e69e8);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    uVar14 = (*(code *)puVar1)(uVar7,PTR_s_graphics_1002e6d18);
    uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
    lVar11 = (*(code *)puVar1)(uVar14,PTR_s_indexOfObject__1002e6cd8,lVar10);
    puVar1 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar14);
    (*(code *)puVar1)(uVar7);
    if (lVar8 != lVar11) {
      (*(code *)PTR__objc_msgSend_10027d560)
                (param_1,PTR_s_moveGraphic_fromIndex_toIndex__1002e91d0,lVar10,lVar11);
    }
    lVar8 = (*(code *)PTR__objc_msgSend_10027d560)(uVar6,PTR_s_clickCount_1002e91a8);
    puVar1 = PTR__objc_msgSend_10027d560;
    if (1 < lVar8) {
      uVar7 = (*(code *)PTR__objc_msgSend_10027d560)(PTR_Text_1002eebf0,PTR_s_class_1002e6a28);
      cVar4 = (*(code *)puVar1)(lVar10,PTR_s_isKindOfClass__1002e6ef8,uVar7);
      if (cVar4 != '\0') {
        (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_startEditingText__1002e91d8,lVar10);
        goto LAB_100047ca2;
      }
    }
    if (local_60[0] == -1) {
      *(undefined8 *)(param_1 + _panType) = 3;
      uVar7 = (*(code *)puVar1)(param_1,PTR_s_canvasView_1002e6c08);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      uVar14 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSCursor_1002eeed0,
                                 PTR_s_closedHandCursor_1002e91b8);
      uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
      (*(code *)puVar1)(uVar7,PTR_s_setCursor__1002e8450,uVar14);
      puVar2 = PTR__objc_release_10027d590;
      (*(code *)PTR__objc_release_10027d590)(uVar14);
      (*(code *)puVar2)(uVar7);
      uVar7 = (*(code *)puVar1)(param_1,PTR_s_undoManager_1002e6bc8);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      (*(code *)puVar1)(uVar7,PTR_s_beginUndoGrouping_1002e6d88);
      (*(code *)puVar2)(uVar7);
      uVar7 = (*(code *)puVar1)(param_1,PTR_s_document_1002e69e8);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      uVar14 = (*(code *)puVar1)(uVar7,PTR_s_graphics_1002e6d18);
      uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
      uVar9 = (*(code *)puVar1)(uVar14,PTR_s_indexOfObject__1002e6cd8,lVar10);
      (*(code *)puVar2)(uVar14);
      (*(code *)puVar2)(uVar7);
      puVar1 = PTR__objc_msgSend_10027d560;
      uVar7 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_windowController_1002e7378);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      uVar14 = (*(code *)puVar1)(uVar7,PTR_s_selectionIndexes_1002e6d20);
      uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
      cVar4 = (*(code *)puVar1)(uVar14,PTR_s_containsIndex__1002e8400,uVar9);
      puVar1 = PTR__objc_release_10027d590;
      (*(code *)PTR__objc_release_10027d590)(uVar14);
      (*(code *)puVar1)(uVar7);
      puVar2 = PTR_s_windowController_1002e7378;
      puVar1 = PTR__objc_msgSend_10027d560;
      if (cVar4 == '\0') {
        cVar4 = (*(code *)PTR__objc_msgSend_10027d560)
                          (PTR__OBJC_CLASS___NSEvent_1002eebe0,PTR_s_isShiftDown_1002e7130);
        if ((cVar4 == '\0') &&
           (cVar4 = (*(code *)PTR__objc_msgSend_10027d560)
                              (PTR__OBJC_CLASS___NSEvent_1002eebe0,PTR_s_isCommandDown_1002e91e0),
           cVar4 == '\0')) {
          uVar7 = (*(code *)puVar1)(param_1,puVar2);
          uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
          uVar14 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSIndexSet_1002eebc8,
                                     PTR_s_indexSetWithIndex__1002e8d18,uVar9);
          uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
          (*(code *)puVar1)(uVar7,PTR_s_setSelectionIndexes__1002e6bb0,uVar14);
LAB_100047c93:
          pcVar13 = (code *)PTR__objc_release_10027d590;
          (*(code *)PTR__objc_release_10027d590)(uVar14);
        }
        else {
          uVar7 = (*(code *)puVar1)(param_1,puVar2);
          uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
          uVar14 = (*(code *)puVar1)(param_1,puVar2);
          uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
          uVar12 = (*(code *)puVar1)(uVar14,PTR_s_selectionIndexes_1002e6d20);
          uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
          uVar9 = (*(code *)puVar1)(uVar12,PTR_s_indexSetByAddingIndex__1002e91e8,uVar9);
          uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
          (*(code *)puVar1)(uVar7,PTR_s_setSelectionIndexes__1002e6bb0,uVar9);
          pcVar13 = (code *)PTR__objc_release_10027d590;
          (*(code *)PTR__objc_release_10027d590)(uVar9);
          (*pcVar13)(uVar12);
          (*pcVar13)(uVar14);
        }
        (*pcVar13)(uVar7);
      }
    }
    else {
      *(undefined8 *)(param_1 + _panType) = 2;
      *(long *)(param_1 + _resizeHandle) = local_60[0];
      uVar7 = (*(code *)puVar1)(param_1,PTR_s_undoManager_1002e6bc8);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      (*(code *)puVar1)(uVar7,PTR_s_beginUndoGrouping_1002e6d88);
      (*(code *)PTR__objc_release_10027d590)(uVar7);
      uVar7 = (*(code *)puVar1)(param_1,PTR_s_windowController_1002e7378);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      puVar2 = PTR__OBJC_CLASS___NSIndexSet_1002eebc8;
      uVar14 = (*(code *)puVar1)(param_1,PTR_s_document_1002e69e8);
      uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
      uVar9 = (*(code *)puVar1)(uVar14,PTR_s_graphics_1002e6d18);
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      uVar12 = (*(code *)puVar1)(lVar10,PTR_s_indexInGraphics__1002e91f0,uVar9);
      uVar12 = (*(code *)puVar1)(puVar2,PTR_s_indexSetWithIndex__1002e8d18,uVar12);
      uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
      (*(code *)PTR__objc_msgSend_10027d560)(uVar7,PTR_s_setSelectionIndexes__1002e6bb0,uVar12);
      puVar1 = PTR__objc_release_10027d590;
      (*(code *)PTR__objc_release_10027d590)(uVar12);
      (*(code *)puVar1)(uVar9);
      (*(code *)puVar1)(uVar14);
      (*(code *)puVar1)(uVar7);
    }
  }
LAB_100047ca2:
  (*(code *)PTR__objc_release_10027d590)(lVar10);
LAB_100047cab:
  (*(code *)PTR__objc_release_10027d590)(uVar6);
  return;
}



// ===== mouseDragged:  @ 0x100047cc3 =====

/* Function Stack Size: 0x18 bytes */

void CanvasViewController::mouseDragged_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double in_XMM1_Qa;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8 [32];
  undefined *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  code *local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined8 local_48;
  double local_40;
  double dStack_38;
  
  uVar5 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  puVar1 = PTR__objc_msgSend_10027d560;
  if (*(char *)(param_1 + _isMouseDown) == '\0') goto LAB_100048139;
  uVar6 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_canvasView_1002e6c08);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  dVar11 = (double)(*(code *)puVar1)(uVar6,PTR_s_pixelAlignedLocation_1002e9250);
  (*(code *)PTR__objc_release_10027d590)(uVar6);
  lVar3 = _mouseLocation;
  dVar12 = *(double *)(param_1 + _mouseLocation);
  dVar13 = ((double *)(param_1 + _mouseLocation))[1];
  *(double *)(param_1 + _mouseLocation) = dVar11;
  *(double *)(param_1 + 8 + lVar3) = in_XMM1_Qa;
  lVar4 = _resizeHandle;
  if (6 < *(long *)(param_1 + _panType) - 1U) goto LAB_100048139;
  dVar12 = dVar11 - dVar12;
  dVar13 = in_XMM1_Qa - dVar13;
  switch(*(long *)(param_1 + _panType)) {
  case 1:
    uVar6 = (*(code *)PTR__objc_msgSend_10027d560)
                      (dVar12,dVar13,*(undefined8 *)(param_1 + _creatingGraphic),
                       PTR_s_resizeByMovingHandle_withDelta_t_1002e9258,
                       *(undefined8 *)(param_1 + _resizeHandle));
    *(undefined8 *)(param_1 + lVar4) = uVar6;
    goto LAB_100048139;
  case 2:
    uVar6 = (*(code *)puVar1)(param_1,PTR_s_selectedGraphics_1002e9260);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    uVar7 = (*(code *)puVar1)(uVar6,PTR_s_firstObject_1002e67e0);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    uVar8 = (*(code *)puVar1)(dVar12,dVar13,*(undefined8 *)(param_1 + lVar3),
                              *(undefined8 *)(param_1 + 8 + lVar3),uVar7,
                              PTR_s_resizeByMovingHandle_withDelta_t_1002e9258,
                              *(undefined8 *)(param_1 + _resizeHandle));
    *(undefined8 *)(param_1 + _resizeHandle) = uVar8;
    pcVar10 = (code *)PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar7);
    break;
  case 3:
    uVar6 = (*(code *)puVar1)(param_1,PTR_s_selectedGraphics_1002e9260);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    local_68 = PTR___NSConcreteStackBlock_10027d330;
    local_60 = 0xc2000000;
    local_5c = 0;
    local_58 = FUN_10004822c;
    local_50 = &DAT_10027fe20;
    local_40 = dVar12;
    dStack_38 = dVar13;
    local_48 = (*(code *)PTR__objc_retain_10027d598)(param_1);
    (*(code *)puVar1)(uVar6,PTR_s_enumerateObjectsUsingBlock__1002e6d78,&local_68);
    pcVar10 = (code *)PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar6);
    uVar6 = local_48;
    break;
  case 4:
    (*(code *)puVar1)(dVar11,in_XMM1_Qa,*(undefined8 *)(param_1 + _selection),
                      PTR_s_setEndPoint__1002e9270);
    uVar6 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSMutableIndexSet_1002eef88,PTR_s_alloc_1002e64e8);
    uVar6 = (*(code *)puVar1)(uVar6,PTR_s_init_1002e6538);
    uVar7 = (*(code *)puVar1)(param_1,PTR_s_document_1002e69e8);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    uVar8 = (*(code *)puVar1)(uVar7,PTR_s_graphics_1002e6d18);
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
    puVar2 = PTR__objc_retain_10027d598;
    local_98 = PTR___NSConcreteStackBlock_10027d330;
    local_90 = 0xc2000000;
    local_8c = 0;
    local_88 = FUN_100048282;
    local_80 = &DAT_10027fe50;
    uVar9 = (*(code *)PTR__objc_retain_10027d598)(param_1);
    local_78 = uVar9;
    uVar6 = (*(code *)puVar2)(uVar6);
    local_70 = uVar6;
    (*(code *)puVar1)(uVar8,PTR_s_enumerateObjectsUsingBlock__1002e6d78,&local_98);
    puVar2 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar8);
    (*(code *)puVar2)(uVar7);
    uVar7 = (*(code *)puVar1)(uVar9,PTR_s_windowController_1002e7378);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    (*(code *)puVar1)(uVar7,PTR_s_setSelectionIndexes__1002e6bb0,uVar6);
    puVar2 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar7);
    uVar7 = (*(code *)puVar1)(uVar9,PTR_s_canvasView_1002e6c08);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    if (*(ID *)(param_1 + _selection) == 0) {
      local_c8 = 0;
      uStack_c0 = 0;
      local_d8 = 0;
      uStack_d0 = 0;
    }
    else {
      _objc_msgSend_stret((undefined *)&local_d8,*(ID *)(param_1 + _selection),PTR_s_rect_1002e7020)
      ;
    }
    _NSInsetRect(DAT_100171318,DAT_100171318,local_b8);
    (*(code *)PTR__objc_msgSend_10027d560)(uVar7,PTR_s_setNeedsDisplayInRect__1002e9280);
    (*(code *)puVar2)(uVar7);
    (*(code *)puVar2)(local_70);
    (*(code *)puVar2)(local_78);
    (*(code *)puVar2)(uVar6);
    goto LAB_100048139;
  default:
    uVar6 = (*(code *)puVar1)(param_1,PTR_s_crop_1002e6d98);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    lVar4 = _resizeHandle;
    uVar7 = (*(code *)puVar1)(dVar12,dVar13,*(undefined8 *)(param_1 + lVar3),
                              *(undefined8 *)(param_1 + 8 + lVar3),uVar6,
                              PTR_s_resizeByMovingHandle_withDelta_t_1002e9258,
                              *(undefined8 *)(param_1 + _resizeHandle));
    *(undefined8 *)(param_1 + lVar4) = uVar7;
    goto LAB_100048129;
  case 7:
    uVar6 = (*(code *)puVar1)(param_1,PTR_s_crop_1002e6d98);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)puVar1)(dVar12,dVar13,*(undefined8 *)(param_1 + lVar3),
                      *(undefined8 *)(param_1 + 8 + lVar3),uVar6,
                      PTR_s_translateWithDelta_toLocation__1002e9268);
LAB_100048129:
    (*(code *)PTR__objc_release_10027d590)(uVar6);
    goto LAB_100048139;
  }
  (*pcVar10)(uVar6);
LAB_100048139:
  (*(code *)PTR__objc_release_10027d590)(uVar5);
  return;
}



// ===== mouseUp:  @ 0x100048424 =====

/* Function Stack Size: 0x18 bytes */

void CanvasViewController::mouseUp_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  cfstringStruct *pcVar8;
  undefined *puVar9;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  uVar5 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  if (*(char *)(param_1 + _isMouseDown) == '\0') goto LAB_10004887d;
  *(undefined1 *)(param_1 + _isMouseDown) = 0;
  uVar7 = *(undefined8 *)(param_1 + _panType);
  *(undefined8 *)(param_1 + _panType) = 0;
  lVar3 = _creatingGraphic;
  puVar9 = PTR__objc_msgSend_10027d560;
  switch(uVar7) {
  case 1:
    cVar4 = (*(code *)PTR__objc_msgSend_10027d560)
                      (*(undefined8 *)(param_1 + _creatingGraphic),PTR_s_didGetCreated_1002e9288);
    puVar1 = PTR_s_undoManager_1002e6bc8;
    puVar9 = PTR__objc_msgSend_10027d560;
    if (cVar4 == '\0') {
      uVar7 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_undoManager_1002e6bc8);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      (*(code *)puVar9)(uVar7,PTR_s_endUndoGrouping_1002e6da8);
      (*(code *)PTR__objc_release_10027d590)(uVar7);
      uVar7 = (*(code *)puVar9)(param_1,puVar1);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      (*(code *)puVar9)(uVar7,PTR_s_disableUndoRegistration_1002e8f58);
      (*(code *)PTR__objc_release_10027d590)(uVar7);
      uVar7 = (*(code *)puVar9)(param_1,puVar1);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      (*(code *)puVar9)(uVar7,PTR_s_undoNestedGroup_1002e9290);
      puVar2 = PTR__objc_release_10027d590;
      (*(code *)PTR__objc_release_10027d590)(uVar7);
      uVar7 = (*(code *)puVar9)(param_1,puVar1);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      (*(code *)puVar9)(uVar7,PTR_s_enableUndoRegistration_1002e8f70);
      (*(code *)puVar2)(uVar7);
    }
    else {
      uVar7 = *(undefined8 *)(param_1 + lVar3);
      uVar6 = (*(code *)PTR__objc_msgSend_10027d560)(PTR_Text_1002eebf0,PTR_s_class_1002e6a28);
      cVar4 = (*(code *)puVar9)(uVar7,PTR_s_isKindOfClass__1002e6ef8,uVar6);
      if (cVar4 != '\0') {
        (*(code *)PTR__objc_msgSend_10027d560)
                  (param_1,PTR_s_startEditingText__1002e91d8,*(undefined8 *)(param_1 + lVar3));
      }
      uVar7 = (*(code *)puVar9)(param_1,PTR_s_undoManager_1002e6bc8);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      puVar1 = PTR__OBJC_CLASS___NSString_1002eea68;
      uVar6 = (*(code *)puVar9)(*(undefined8 *)(param_1 + lVar3),PTR_s_class_1002e6a28);
      uVar6 = (*(code *)puVar9)(puVar1,PTR_s_stringWithFormat__1002e63a8,&cf_Add__,uVar6);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      (*(code *)puVar9)(uVar7,PTR_s_setActionName__1002e6da0,uVar6);
      puVar1 = PTR__objc_release_10027d590;
      (*(code *)PTR__objc_release_10027d590)(uVar6);
      (*(code *)puVar1)(uVar7);
      uVar7 = (*(code *)puVar9)(param_1,PTR_s_undoManager_1002e6bc8);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      (*(code *)puVar9)(uVar7,PTR_s_endUndoGrouping_1002e6da8);
      (*(code *)puVar1)(uVar7);
    }
    if (*(ID *)(param_1 + _creatingGraphic) == 0) {
      local_48 = 0;
      uStack_40 = 0;
      local_58 = 0;
      uStack_50 = 0;
      puVar9 = PTR_s_setCreatingGraphic__1002e9238;
    }
    else {
      _objc_msgSend_stret((undefined *)&local_58,*(ID *)(param_1 + _creatingGraphic),
                          PTR_s_drawingBounds_1002e83f0);
      puVar9 = PTR_s_setCreatingGraphic__1002e9238;
    }
    break;
  case 2:
    uVar7 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_undoManager_1002e6bc8);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    pcVar8 = &cf_Resize;
    goto LAB_1000485f8;
  case 3:
    uVar7 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_undoManager_1002e6bc8);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    pcVar8 = &cf_Move;
LAB_1000485f8:
    (*(code *)puVar9)(uVar7,PTR_s_setActionName__1002e6da0,pcVar8);
    puVar1 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar7);
    uVar7 = (*(code *)puVar9)(param_1,PTR_s_undoManager_1002e6bc8);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    (*(code *)puVar9)(uVar7,PTR_s_endUndoGrouping_1002e6da8);
    (*(code *)puVar1)(uVar7);
    (*(code *)puVar9)(param_1,PTR_s_checkAndSetMouseCursor_1002e9298);
    goto LAB_10004887d;
  case 4:
    if (*(ID *)(param_1 + _selection) == 0) {
      local_68 = 0;
      uStack_60 = 0;
      local_78 = 0;
      uStack_70 = 0;
    }
    else {
      _objc_msgSend_stret((undefined *)&local_78,*(ID *)(param_1 + _selection),PTR_s_rect_1002e7020)
      ;
    }
    _NSInsetRect((int)DAT_100171318,DAT_100171318,&local_58);
    puVar9 = PTR_s_setSelection__1002e91f8;
    break;
  case 5:
    uVar7 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_crop_1002e6d98);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    cVar4 = (*(code *)puVar9)(uVar7,PTR_s_didGetCreated_1002e9288);
    (*(code *)PTR__objc_release_10027d590)(uVar7);
    if (cVar4 == '\0') {
      (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_stopCrop_1002e9140);
    }
  default:
    (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_checkAndSetMouseCursor_1002e9298);
    goto LAB_10004887d;
  }
  puVar1 = PTR__objc_msgSend_10027d560;
  (*(code *)PTR__objc_msgSend_10027d560)(param_1,puVar9,0);
  uVar7 = (*(code *)puVar1)(param_1,PTR_s_canvasView_1002e6c08);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  (*(code *)puVar1)(uVar7,PTR_s_setNeedsDisplayInRect__1002e9280);
  (*(code *)PTR__objc_release_10027d590)(uVar7);
  (*(code *)puVar1)(param_1,PTR_s_checkAndSetMouseCursor_1002e9298);
LAB_10004887d:
  (*(code *)PTR__objc_release_10027d590)(uVar5);
  return;
}



// ===== blockGraphicsCreationOnMouseDown:  @ 0x1000488ac =====

/* Function Stack Size: 0x14 bytes */

char CanvasViewController::blockGraphicsCreationOnMouseDown_(ID param_1,SEL param_2,char param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  
  puVar1 = PTR_s_windowController_1002e7378;
  pcVar7 = (code *)PTR__objc_msgSend_10027d560;
  uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_windowController_1002e7378);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  puVar2 = PTR_s_currentTool_1002e9210;
  lVar5 = (*pcVar7)(uVar4,PTR_s_currentTool_1002e9210);
  if (lVar5 == 7) {
    (*(code *)PTR__objc_release_10027d590)(uVar4);
  }
  else {
    uVar6 = (*pcVar7)(param_1,puVar1);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    lVar5 = (*pcVar7)(uVar6,puVar2);
    puVar1 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar6);
    (*(code *)puVar1)(uVar4);
    pcVar7 = (code *)PTR__objc_msgSend_10027d560;
    if (lVar5 != 6) {
      return '\0';
    }
  }
  uVar4 = (*pcVar7)(param_1,PTR_s_canvasView_1002e6c08);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  cVar3 = (*pcVar7)(uVar4,PTR_s_isFirstResponder_1002e92a0);
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  if (cVar3 != '\0') {
    if (param_3 == '\0') {
      uVar4 = (*pcVar7)(param_1,PTR_s_windowController_1002e7378);
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      uVar6 = (*pcVar7)(uVar4,PTR_s_selectionIndexes_1002e6d20);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      lVar5 = (*pcVar7)(uVar6,PTR_s_count_1002e6488);
      puVar1 = PTR__objc_release_10027d590;
      (*(code *)PTR__objc_release_10027d590)(uVar6);
      (*(code *)puVar1)(uVar4);
      if (lVar5 != 0) {
        return '\x01';
      }
    }
    return '\0';
  }
  return '\x01';
}



// ===== mouseMoved:  @ 0x1000489f2 =====

/* Function Stack Size: 0x18 bytes */

void CanvasViewController::mouseMoved_(ID param_1,SEL param_2,ID param_3)

{
  objc_super local_20;
  
  local_20.super_class = (class_t *)PTR_CanvasViewController_1002ef8d0;
  local_20.receiver = param_1;
  _objc_msgSendSuper2(&local_20,PTR_s_mouseMoved__1002e92a8);
  (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_checkAndSetMouseCursor_1002e9298);
  return;
}



// ===== checkAndSetMouseCursor  @ 0x100048a34 =====

/* Function Stack Size: 0x10 bytes */

void __thiscall
CanvasViewController::checkAndSetMouseCursor(CanvasViewController *this,ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 in_XMM1_Qa;
  undefined8 local_38;
  
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar5 = (*(code *)PTR__objc_msgSend_10027d560)(this,PTR_s_canvasView_1002e6c08);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar10 = (*(code *)puVar1)(uVar5,PTR_s_pixelAlignedLocation_1002e9250);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar5);
  puVar3 = PTR_s_crop_1002e6d98;
  uVar5 = (*(code *)puVar1)(this,PTR_s_crop_1002e6d98);
  lVar6 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)puVar2)(lVar6);
  puVar2 = PTR_Graphic_1002eeee0;
  if (lVar6 != 0) {
    uVar5 = (*(code *)puVar1)(this,puVar3);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    uVar10 = (*(code *)puVar1)(uVar10,in_XMM1_Qa,uVar5,PTR_s_handleUnderPoint__1002e9198);
    (*(code *)PTR__objc_release_10027d590)(uVar5);
    uVar5 = (*(code *)puVar1)(this,PTR_s_canvasView_1002e6c08);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    uVar7 = (*(code *)puVar1)(this,puVar3);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    uVar10 = (*(code *)puVar1)(uVar7,PTR_s_cursorForHandle__1002e92b0,uVar10);
    uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
    (*(code *)puVar1)(uVar5,PTR_s_setCursor__1002e8450,uVar10);
    (*(code *)PTR__objc_release_10027d590)(uVar10);
    (*(code *)PTR__objc_release_10027d590)(uVar7);
    (*(code *)PTR__objc_release_10027d590)(uVar5);
    return;
  }
  uVar5 = (*(code *)puVar1)(this,PTR_s_document_1002e69e8);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar7 = (*(code *)puVar1)(uVar5,PTR_s_graphics_1002e6d18);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  uVar10 = (*(code *)puVar1)(uVar10,in_XMM1_Qa,puVar2,
                             PTR_s_graphicUnderPoint_handle_fromGra_1002e91c0,&local_38,uVar7);
  lVar6 = _objc_retainAutoreleasedReturnValue(uVar10);
  puVar1 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar7);
  (*(code *)puVar1)(uVar5);
  if (lVar6 == 0) {
LAB_100048c4c:
    cVar4 = (*(code *)PTR__objc_msgSend_10027d560)
                      (this,PTR_s_blockGraphicsCreationOnMouseDown_1002e9208,
                       (int)(char)this[_overrideCreationBlock]);
    pcVar9 = (code *)PTR__objc_msgSend_10027d560;
    if (cVar4 == '\0') {
      uVar5 = (*(code *)PTR__objc_msgSend_10027d560)(this,PTR_s_windowController_1002e7378);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      uVar10 = (*pcVar9)(uVar5,PTR_s_currentTool_1002e9210);
      uVar10 = (*pcVar9)(this,PTR_s_graphicClassForTool__1002e9218,uVar10);
      (*(code *)PTR__objc_release_10027d590)(uVar5);
      uVar5 = (*pcVar9)(this,PTR_s_canvasView_1002e6c08);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar5);
      uVar5 = (*pcVar9)(uVar10,PTR_s_creationCursor_1002e92b8);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      (*pcVar9)(uVar7,PTR_s_setCursor__1002e8450,uVar5);
      goto LAB_100048d6a;
    }
    uVar5 = (*(code *)PTR__objc_msgSend_10027d560)(this,PTR_s_canvasView_1002e6c08);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar5);
    uVar5 = (*pcVar9)(PTR__OBJC_CLASS___NSCursor_1002eeed0,PTR_s_arrowCursor_1002e8440);
  }
  else {
    uVar5 = (*(code *)PTR__objc_msgSend_10027d560)(this,PTR_s_text_1002e83f8);
    lVar8 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)PTR__objc_release_10027d590)(lVar8);
    pcVar9 = (code *)PTR__objc_msgSend_10027d560;
    if (lVar6 == lVar8) goto LAB_100048c4c;
    uVar5 = (*(code *)PTR__objc_msgSend_10027d560)(this,PTR_s_canvasView_1002e6c08);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar5);
    uVar5 = (*pcVar9)(lVar6,PTR_s_cursorForHandle__1002e92b0,local_38);
  }
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*pcVar9)(uVar7,PTR_s_setCursor__1002e8450,uVar5);
LAB_100048d6a:
  puVar1 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar5);
  (*(code *)puVar1)(uVar7);
  (*(code *)PTR__objc_release_10027d590)(lVar6);
  return;
}



// ===== keyDown:  @ 0x100048d89 =====

/* Function Stack Size: 0x18 bytes */

void CanvasViewController::keyDown_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  char cVar2;
  short sVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  float fVar10;
  objc_super local_40;
  
  uVar4 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  puVar9 = PTR_s_keyCode_1002e7e18;
  sVar3 = (*(code *)PTR__objc_msgSend_10027d560)(uVar4,PTR_s_keyCode_1002e7e18);
  if ((sVar3 == 0x24) ||
     (sVar3 = (*(code *)PTR__objc_msgSend_10027d560)(uVar4,puVar9), sVar3 == 0x4c)) {
    uVar5 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_crop_1002e6d98);
    lVar6 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)PTR__objc_release_10027d590)(lVar6);
    if (lVar6 != 0) {
      (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_doCrop_1002e91b0);
      goto LAB_100049005;
    }
    uVar5 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_text_1002e83f8);
    lVar6 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)PTR__objc_release_10027d590)(lVar6);
    puVar1 = PTR__objc_msgSend_10027d560;
    if (lVar6 == 0) {
      uVar5 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_selectedGraphics_1002e9260);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      lVar6 = (*(code *)puVar1)(uVar5,PTR_s_count_1002e6488);
      if (lVar6 == 1) {
        uVar7 = (*(code *)puVar1)(uVar5,PTR_s_objectAtIndexedSubscript__1002e6400,0);
        uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
        uVar8 = (*(code *)PTR__objc_msgSend_10027d560)(PTR_Text_1002eebf0,PTR_s_class_1002e6a28);
        cVar2 = (*(code *)PTR__objc_msgSend_10027d560)(uVar7,PTR_s_isKindOfClass__1002e6ef8,uVar8);
        puVar1 = PTR__objc_msgSend_10027d560;
        (*(code *)PTR__objc_release_10027d590)(uVar7);
        if (cVar2 != '\0') {
          uVar7 = (*(code *)puVar1)(uVar5,PTR_s_objectAtIndexedSubscript__1002e6400,0);
          uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
          (*(code *)puVar1)(param_1,PTR_s_startEditingText__1002e91d8,uVar7);
          puVar9 = PTR__objc_release_10027d590;
          (*(code *)PTR__objc_release_10027d590)(uVar7);
          (*(code *)puVar9)(uVar5);
          goto LAB_100049005;
        }
      }
      (*(code *)PTR__objc_release_10027d590)(uVar5);
    }
  }
  sVar3 = (*(code *)PTR__objc_msgSend_10027d560)(uVar4,puVar9);
  if (sVar3 == 0x75) {
    (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_delete__1002e92c0,param_1);
  }
  else {
    sVar3 = (*(code *)PTR__objc_msgSend_10027d560)(uVar4,puVar9);
    puVar1 = PTR_s_videoPlayer_1002e7f28;
    puVar9 = PTR__objc_msgSend_10027d560;
    if (sVar3 == 0x31) {
      uVar5 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_videoPlayer_1002e7f28);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      fVar10 = (float)(*(code *)puVar9)(uVar5,PTR_s_rate_1002e7f60);
      uVar7 = (*(code *)puVar9)(param_1,puVar1);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      puVar9 = PTR_s_pause_1002e7f70;
      if ((fVar10 == 0.0) && (!NAN(fVar10))) {
        puVar9 = PTR_s_play_1002e7f80;
      }
      (*(code *)PTR__objc_msgSend_10027d560)(uVar7,puVar9);
      (*(code *)PTR__objc_release_10027d590)(uVar7);
      (*(code *)PTR__objc_release_10027d590)(uVar5);
    }
    else {
      local_40.super_class = (class_t *)PTR_CanvasViewController_1002ef8d0;
      local_40.receiver = param_1;
      _objc_msgSendSuper2(&local_40,PTR_s_keyDown__1002e7e28,uVar4);
    }
  }
LAB_100049005:
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  return;
}



// ===== validateMenuItem:  @ 0x10004901d =====

/* Function Stack Size: 0x18 bytes */

char CanvasViewController::validateMenuItem_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  byte bVar7;
  undefined *puVar8;
  bool bVar9;
  
  uVar1 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar2 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_crop_1002e6d98);
  lVar3 = _objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)PTR__objc_release_10027d590)(lVar3);
  puVar8 = PTR_s_action_1002e82a8;
  if (lVar3 == 0) {
    puVar4 = (undefined *)(*(code *)PTR__objc_msgSend_10027d560)(uVar1,PTR_s_action_1002e82a8);
    puVar6 = PTR__objc_msgSend_10027d560;
    if (puVar4 == PTR_s_selectAll__1002e92c8) {
      uVar2 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_document_1002e69e8);
      uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
      uVar5 = (*(code *)puVar6)(uVar2,PTR_s_graphics_1002e6d18);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      lVar3 = (*(code *)puVar6)(uVar5,PTR_s_count_1002e6488);
      puVar8 = PTR_s_action_1002e82a8;
      (*(code *)PTR__objc_release_10027d590)(uVar5);
      (*(code *)PTR__objc_release_10027d590)(uVar2);
      if (lVar3 == 0) goto LAB_100049101;
    }
    puVar6 = (undefined *)(*(code *)PTR__objc_msgSend_10027d560)(uVar1,puVar8);
    puVar8 = PTR__objc_msgSend_10027d560;
    if (puVar6 == PTR_s_delete__1002e92c0) {
      uVar2 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_windowController_1002e7378);
      uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
      uVar5 = (*(code *)puVar8)(uVar2,PTR_s_selectionIndexes_1002e6d20);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      lVar3 = (*(code *)puVar8)(uVar5,PTR_s_count_1002e6488);
      puVar8 = PTR__objc_release_10027d590;
      bVar9 = lVar3 == 0;
      (*(code *)PTR__objc_release_10027d590)(uVar5);
      (*(code *)puVar8)(uVar2);
    }
    else {
      bVar9 = false;
    }
    bVar7 = bVar9 ^ 1;
  }
  else {
LAB_100049101:
    bVar7 = 0;
  }
  (*(code *)PTR__objc_release_10027d590)(uVar1);
  return bVar7;
}



// ===== delete:  @ 0x10004917d =====

/* Function Stack Size: 0x18 bytes */

void CanvasViewController::delete_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar2 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_document_1002e69e8);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  uVar3 = (*(code *)puVar1)(uVar2,PTR_s_mutableGraphics_1002e9248);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*(code *)puVar1)(param_1,PTR_s_windowController_1002e7378);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)puVar1)(uVar4,PTR_s_selectionIndexes_1002e6d20);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)puVar1)(uVar3,PTR_s_removeObjectsAtIndexes__1002e9028,uVar5);
  puVar1 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar5);
  (*(code *)puVar1)(uVar4);
  (*(code *)puVar1)(uVar3);
  (*(code *)puVar1)(uVar2);
  uVar2 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_undoManager_1002e6bc8);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)PTR__objc_msgSend_10027d560)(uVar2,PTR_s_setActionName__1002e6da0,&cf_Delete);
  (*(code *)puVar1)(uVar2);
  return;
}



// ===== deleteBackward:  @ 0x10004926b =====

/* Function Stack Size: 0x18 bytes */

void CanvasViewController::deleteBackward_(ID param_1,SEL param_2,ID param_3)

{
  (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_delete__1002e92c0);
  return;
}



// ===== deleteForward:  @ 0x10004927d =====

/* Function Stack Size: 0x18 bytes */

void CanvasViewController::deleteForward_(ID param_1,SEL param_2,ID param_3)

{
  (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_delete__1002e92c0);
  return;
}



// ===== cancelOperation:  @ 0x10004928f =====

/* Function Stack Size: 0x18 bytes */

void CanvasViewController::cancelOperation_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  _NSLog(&cf_cancelOperationinCanvasViewController);
  puVar1 = PTR__objc_msgSend_10027d560;
  (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_stopCrop_1002e9140);
  (*(code *)puVar1)(param_1,PTR_s_stopEditingText_1002e9138);
  uVar3 = (*(code *)puVar1)(param_1,PTR_s_windowController_1002e7378);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*(code *)puVar1)(uVar3,PTR_s_selectionIndexes_1002e6d20);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  lVar5 = (*(code *)puVar1)(uVar4,PTR_s_count_1002e6488);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  (*(code *)puVar2)(uVar3);
  puVar1 = PTR__objc_msgSend_10027d560;
  if (lVar5 != 0) {
    uVar3 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_windowController_1002e7378);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    uVar4 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSIndexSet_1002eebc8,PTR_s_indexSet_1002e6ba8);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    (*(code *)puVar1)(uVar3,PTR_s_setSelectionIndexes__1002e6bb0,uVar4);
    (*(code *)puVar2)(uVar4);
    (*(code *)puVar2)(uVar3);
    return;
  }
  return;
}



// ===== selectAll:  @ 0x10004939d =====

/* Function Stack Size: 0x18 bytes */

void CanvasViewController::selectAll_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar3 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_windowController_1002e7378);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSIndexSet_1002eebc8;
  uVar4 = (*(code *)puVar1)(param_1,PTR_s_document_1002e69e8);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)puVar1)(uVar4,PTR_s_graphics_1002e6d18);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar6 = (*(code *)puVar1)(uVar5,PTR_s_count_1002e6488);
  uVar6 = (*(code *)puVar1)(puVar2,PTR_s_indexSetWithIndexesInRange__1002e8f60,0,uVar6);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  (*(code *)puVar1)(uVar3,PTR_s_setSelectionIndexes__1002e6bb0,uVar6);
  puVar1 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar6);
  (*(code *)puVar1)(uVar5);
  (*(code *)puVar1)(uVar4);
  (*(code *)puVar1)(uVar3);
  return;
}



// ===== moveLeft:  @ 0x10004946f =====

/* Function Stack Size: 0x18 bytes */

void CanvasViewController::moveLeft_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined *local_40;
  undefined4 local_38;
  undefined4 local_34;
  code *local_30;
  undefined *local_28;
  undefined8 local_20;
  
  puVar2 = PTR__objc_msgSend_10027d560;
  cVar3 = (*(code *)PTR__objc_msgSend_10027d560)
                    (PTR__OBJC_CLASS___NSEvent_1002eebe0,PTR_s_isShiftDown_1002e7130);
  uVar1 = *(undefined8 *)(&DAT_100170f10 + (ulong)(cVar3 == '\0') * 8);
  uVar4 = (*(code *)puVar2)(param_1,PTR_s_selectedGraphics_1002e9260);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  local_40 = PTR___NSConcreteStackBlock_10027d330;
  local_38 = 0xc0000000;
  local_34 = 0;
  local_30 = FUN_100049522;
  local_28 = &DAT_10027fe80;
  local_20 = uVar1;
  (*(code *)puVar2)(uVar4,PTR_s_enumerateObjectsUsingBlock__1002e6d78,&local_40);
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  return;
}



// ===== moveRight:  @ 0x10004955a =====

/* Function Stack Size: 0x18 bytes */

void CanvasViewController::moveRight_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined *local_40;
  undefined4 local_38;
  undefined4 local_34;
  code *local_30;
  undefined *local_28;
  undefined8 local_20;
  
  puVar2 = PTR__objc_msgSend_10027d560;
  cVar3 = (*(code *)PTR__objc_msgSend_10027d560)
                    (PTR__OBJC_CLASS___NSEvent_1002eebe0,PTR_s_isShiftDown_1002e7130);
  uVar1 = *(undefined8 *)(&DAT_100170f10 + (ulong)(cVar3 == '\0') * 8);
  uVar4 = (*(code *)puVar2)(param_1,PTR_s_selectedGraphics_1002e9260);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  local_40 = PTR___NSConcreteStackBlock_10027d330;
  local_38 = 0xc0000000;
  local_34 = 0;
  local_30 = FUN_10004960d;
  local_28 = &DAT_10027fea0;
  local_20 = uVar1;
  (*(code *)puVar2)(uVar4,PTR_s_enumerateObjectsUsingBlock__1002e6d78,&local_40);
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  return;
}



// ===== moveUp:  @ 0x10004963d =====

/* Function Stack Size: 0x18 bytes */

void CanvasViewController::moveUp_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined *local_40;
  undefined4 local_38;
  undefined4 local_34;
  code *local_30;
  undefined *local_28;
  undefined8 local_20;
  
  puVar2 = PTR__objc_msgSend_10027d560;
  cVar3 = (*(code *)PTR__objc_msgSend_10027d560)
                    (PTR__OBJC_CLASS___NSEvent_1002eebe0,PTR_s_isShiftDown_1002e7130);
  uVar1 = *(undefined8 *)(&DAT_100170f10 + (ulong)(cVar3 == '\0') * 8);
  uVar4 = (*(code *)puVar2)(param_1,PTR_s_selectedGraphics_1002e9260);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  local_40 = PTR___NSConcreteStackBlock_10027d330;
  local_38 = 0xc0000000;
  local_34 = 0;
  local_30 = FUN_1000496f0;
  local_28 = &DAT_10027fec0;
  local_20 = uVar1;
  (*(code *)puVar2)(uVar4,PTR_s_enumerateObjectsUsingBlock__1002e6d78,&local_40);
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  return;
}



// ===== moveDown:  @ 0x100049720 =====

/* Function Stack Size: 0x18 bytes */

void CanvasViewController::moveDown_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined *local_40;
  undefined4 local_38;
  undefined4 local_34;
  code *local_30;
  undefined *local_28;
  undefined8 local_20;
  
  puVar2 = PTR__objc_msgSend_10027d560;
  cVar3 = (*(code *)PTR__objc_msgSend_10027d560)
                    (PTR__OBJC_CLASS___NSEvent_1002eebe0,PTR_s_isShiftDown_1002e7130);
  uVar1 = *(undefined8 *)(&DAT_100170f10 + (ulong)(cVar3 == '\0') * 8);
  uVar4 = (*(code *)puVar2)(param_1,PTR_s_selectedGraphics_1002e9260);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  local_40 = PTR___NSConcreteStackBlock_10027d330;
  local_38 = 0xc0000000;
  local_34 = 0;
  local_30 = FUN_1000497d3;
  local_28 = &DAT_10027fee0;
  local_20 = uVar1;
  (*(code *)puVar2)(uVar4,PTR_s_enumerateObjectsUsingBlock__1002e6d78,&local_40);
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  return;
}



// ===== undo:  @ 0x10004980b =====

/* Function Stack Size: 0x18 bytes */

void CanvasViewController::undo_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__objc_msgSend_10027d560;
  if (*(char *)(param_1 + _isMouseDown) != '\0') {
    return;
  }
  uVar2 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_undoManager_1002e6bc8);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)puVar1)(uVar2,PTR_s_undo_1002e92d0);
  (*(code *)PTR__objc_release_10027d590)(uVar2);
  return;
}



// ===== moveGraphic:fromIndex:toIndex:  @ 0x100049856 =====

/* Function Stack Size: 0x28 bytes */

void CanvasViewController::moveGraphic_fromIndex_toIndex_
               (ID param_1,SEL param_2,ID param_3,long_long param_4,long_long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  puVar2 = PTR_s_selectedGraphics_1002e9260;
  if (param_4 != param_5) {
    uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
    puVar1 = PTR__objc_msgSend_10027d560;
    uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,puVar2);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar5 = (*(code *)puVar1)(param_1,PTR_s_undoManager_1002e6bc8);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)puVar1)(uVar5,PTR_s_disableUndoRegistration_1002e8f58);
    (*(code *)PTR__objc_release_10027d590)(uVar5);
    uVar5 = (*(code *)puVar1)(param_1,PTR_s_document_1002e69e8);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    uVar6 = (*(code *)puVar1)(uVar5,PTR_s_mutableGraphics_1002e9248);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)puVar1)(uVar6,PTR_s_removeObjectAtIndex__1002e92d8,param_4);
    puVar2 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar6);
    (*(code *)puVar2)(uVar5);
    uVar5 = (*(code *)puVar1)(param_1,PTR_s_document_1002e69e8);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    uVar6 = (*(code *)puVar1)(uVar5,PTR_s_mutableGraphics_1002e9248);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)puVar1)(uVar6,PTR_s_insertObject_atIndex__1002e8008,param_3,param_5);
    puVar2 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar3);
    (*(code *)puVar2)(uVar6);
    (*(code *)puVar2)(uVar5);
    uVar3 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSMutableIndexSet_1002eef88,PTR_s_alloc_1002e64e8);
    uVar3 = (*(code *)puVar1)(uVar3,PTR_s_init_1002e6538);
    uVar5 = (*(code *)puVar1)(param_1,PTR_s_document_1002e69e8);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    uVar6 = (*(code *)puVar1)(uVar5,PTR_s_graphics_1002e6d18);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    puVar2 = PTR__objc_retain_10027d598;
    local_60 = PTR___NSConcreteStackBlock_10027d330;
    local_58 = 0xc2000000;
    local_54 = 0;
    local_50 = FUN_100049aee;
    local_48 = &DAT_10027ff00;
    local_40 = uVar4;
    uVar4 = (*(code *)PTR__objc_retain_10027d598)();
    local_38 = uVar3;
    uVar3 = (*(code *)puVar2)(uVar3);
    (*(code *)puVar1)(uVar6,PTR_s_enumerateObjectsUsingBlock__1002e6d78,&local_60);
    puVar2 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar6);
    (*(code *)puVar2)(uVar5);
    uVar5 = (*(code *)puVar1)(param_1,PTR_s_windowController_1002e7378);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)puVar1)(uVar5,PTR_s_setSelectionIndexes__1002e6bb0,uVar3);
    (*(code *)puVar2)(uVar5);
    uVar5 = (*(code *)puVar1)(param_1,PTR_s_undoManager_1002e6bc8);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)puVar1)(uVar5,PTR_s_enableUndoRegistration_1002e8f70);
    (*(code *)puVar2)(uVar5);
    (*(code *)puVar2)(local_38);
    (*(code *)puVar2)(local_40);
    (*(code *)puVar2)(uVar3);
    (*(code *)puVar2)(uVar4);
  }
  return;
}



// ===== selectedGraphics  @ 0x100049b7d =====

/* Function Stack Size: 0x10 bytes */

ID CanvasViewController::selectedGraphics(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ID IVar7;
  
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar2 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_document_1002e69e8);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  uVar3 = (*(code *)puVar1)(uVar2,PTR_s_graphics_1002e6d18);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*(code *)puVar1)(param_1,PTR_s_windowController_1002e7378);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)puVar1)(uVar4,PTR_s_selectionIndexes_1002e6d20);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar6 = (*(code *)puVar1)(uVar3,PTR_s_objectsAtIndexes__1002e6d28,uVar5);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  puVar1 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar5);
  (*(code *)puVar1)(uVar4);
  (*(code *)puVar1)(uVar3);
  (*(code *)puVar1)(uVar2);
  IVar7 = _objc_autoreleaseReturnValue(uVar6);
  return IVar7;
}



// ===== graphicClassForTool:  @ 0x100049c44 =====

/* Function Stack Size: 0x18 bytes */

CLASS CanvasViewController::graphicClassForTool_(ID param_1,SEL param_2,long_long param_3)

{
  undefined8 uVar1;
  CLASS CVar2;
  undefined *puVar3;
  
  uVar1 = 0;
  puVar3 = PTR_Arrow_1002ef0d0;
  switch(param_3) {
  case 0:
    puVar3 = PTR_ArrowNormal_1002eee58;
    break;
  case 1:
    puVar3 = PTR_ArrowLine_1002eee60;
    break;
  case 2:
    puVar3 = PTR_OverlayRectangle_1002eee68;
    break;
  case 3:
    puVar3 = PTR_OverlayCircle_1002eee70;
    break;
  case 4:
    puVar3 = PTR_ShapeRectangle_1002eee78;
    break;
  case 5:
    puVar3 = PTR_ShapeCircle_1002eee80;
    break;
  case 6:
    puVar3 = PTR_Pen_1002eee88;
    break;
  case 7:
    puVar3 = PTR_Text_1002eebf0;
    break;
  case 8:
    puVar3 = PTR_Pixelate_1002eee90;
    break;
  case 9:
    puVar3 = PTR_Crop_1002ef0c8;
    break;
  case 0xffffffffffffffff:
    goto switchD_100049c61_caseD_ffffffff;
  }
  uVar1 = (*(code *)PTR__objc_msgSend_10027d560)(puVar3,PTR_s_class_1002e6a28);
switchD_100049c61_caseD_ffffffff:
  CVar2 = _objc_retainAutoreleaseReturnValue(uVar1);
  return CVar2;
}



// ===== createCenteredEmojiTextWithString:  @ 0x100049d08 =====

/* Function Stack Size: 0x18 bytes */

void CanvasViewController::createCenteredEmojiTextWithString_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  ID self;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 uVar13;
  undefined4 local_88;
  double local_78;
  undefined8 local_58;
  undefined8 uStack_50;
  double local_48;
  double dStack_40;
  
  uVar4 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar5 = (*(code *)PTR__objc_msgSend_10027d560)(uVar4,PTR_s_userInfo_1002e73b0);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar6 = (*(code *)puVar1)(uVar5,PTR_s_objectForKeyedSubscript__1002e67f0,
                            PTR_cf_CreateEmojiText_1002f8fe0);
  lVar7 = _objc_retainAutoreleasedReturnValue(uVar6);
  (*(code *)PTR__objc_release_10027d590)(uVar5);
  if (lVar7 != 0) {
    uVar5 = (*(code *)puVar1)(uVar4,PTR_s_object_1002e69d8);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    puVar2 = PTR_s_window_1002e6878;
    uVar6 = (*(code *)puVar1)(uVar5,PTR_s_window_1002e6878);
    lVar8 = _objc_retainAutoreleasedReturnValue(uVar6);
    uVar6 = (*(code *)puVar1)(param_1,PTR_s_view_1002e6900);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    uVar9 = (*(code *)PTR__objc_msgSend_10027d560)(uVar6,puVar2);
    lVar10 = _objc_retainAutoreleasedReturnValue(uVar9);
    puVar2 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(lVar10);
    puVar1 = PTR__objc_msgSend_10027d560;
    (*(code *)puVar2)(uVar6);
    (*(code *)puVar2)(lVar8);
    (*(code *)puVar2)(uVar5);
    if (lVar8 == lVar10) {
      uVar5 = (*(code *)puVar1)(param_1,PTR_s_undoManager_1002e6bc8);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      (*(code *)puVar1)(uVar5,PTR_s_beginUndoGrouping_1002e6d88);
      (*(code *)PTR__objc_release_10027d590)(uVar5);
      uVar5 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSUserDefaults_1002eeab0,
                                PTR_s_standardUserDefaults_1002e6570);
      uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
      uVar13 = (*(code *)puVar1)(uVar5,PTR_s_floatForKey__1002e9090,PTR_cf_fontSize_1002f8bf0);
      (*(code *)puVar1)(DAT_100171320,uVar5,PTR_s_setFloat_forKey__1002e92e0,
                        PTR_cf_fontSize_1002f8bf0);
      uVar6 = (*(code *)puVar1)(param_1,PTR_s_canvasView_1002e6c08);
      self = _objc_retainAutoreleasedReturnValue(uVar6);
      if (self == 0) {
        local_48 = 0.0;
        dStack_40 = 0.0;
        local_58 = 0;
        uStack_50 = 0;
        local_78 = 0.0;
        local_88 = 0;
      }
      else {
        _objc_msgSend_stret((undefined *)&local_58,self,PTR_s_bounds_1002e6938);
        local_88 = SUB84(local_48 * DAT_100170dc0,0);
        local_78 = DAT_100170dc0 * dStack_40;
      }
      puVar3 = PTR_s_view_1002e6900;
      puVar2 = PTR__objc_release_10027d590;
      (*(code *)PTR__objc_release_10027d590)(self);
      puVar1 = PTR__objc_msgSend_10027d560;
      uVar6 = (*(code *)PTR__objc_msgSend_10027d560)(PTR_Text_1002eebf0,PTR_s_alloc_1002e64e8);
      uVar9 = (*(code *)puVar1)(param_1,puVar3);
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      uVar11 = (*(code *)puVar1)(uVar9,PTR_s_window_1002e6878);
      uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
      uVar6 = (*(code *)puVar1)(local_88,local_78,uVar6,PTR_s_initAtPoint_inWindow__1002e6678,uVar11
                               );
      (*(code *)puVar2)(uVar11);
      (*(code *)puVar2)(uVar9);
      puVar1 = PTR__objc_msgSend_10027d560;
      uVar9 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_document_1002e69e8);
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      uVar11 = (*(code *)puVar1)(uVar9,PTR_s_graphics_1002e6d18);
      uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
      uVar12 = (*(code *)PTR__objc_msgSend_10027d560)
                         (uVar6,PTR_s_proposedIndexInGraphics__1002e91c8,uVar11);
      (*(code *)puVar2)(uVar11);
      (*(code *)puVar2)(uVar9);
      puVar1 = PTR__objc_msgSend_10027d560;
      uVar9 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_document_1002e69e8);
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      uVar11 = (*(code *)puVar1)(uVar9,PTR_s_mutableGraphics_1002e9248);
      uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
      (*(code *)puVar1)(uVar11,PTR_s_insertObject_atIndex__1002e8008,uVar6,uVar12);
      (*(code *)puVar2)(uVar11);
      (*(code *)puVar2)(uVar9);
      (*(code *)puVar1)(param_1,PTR_s_startEditingText__1002e91d8,uVar6);
      uVar9 = (*(code *)puVar1)(param_1,PTR_s_text_1002e83f8);
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      uVar11 = (*(code *)puVar1)(uVar9,PTR_s_textView_1002e92e8);
      uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
      (*(code *)puVar1)(uVar11,PTR_s_insertText__1002e92f0,lVar7);
      (*(code *)puVar2)(uVar11);
      (*(code *)puVar2)(uVar9);
      (*(code *)puVar1)(param_1,PTR_s_stopEditingText_1002e9138);
      (*(code *)puVar1)(uVar13,uVar5,PTR_s_setFloat_forKey__1002e92e0,PTR_cf_fontSize_1002f8bf0);
      puVar3 = PTR_s_undoManager_1002e6bc8;
      uVar9 = (*(code *)puVar1)(param_1,PTR_s_undoManager_1002e6bc8);
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      (*(code *)puVar1)(uVar9,PTR_s_setActionName__1002e6da0,&cf_AddEmoji);
      (*(code *)puVar2)(uVar9);
      uVar9 = (*(code *)puVar1)(param_1,puVar3);
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      (*(code *)puVar1)(uVar9,PTR_s_endUndoGrouping_1002e6da8);
      (*(code *)puVar2)(uVar9);
      puVar3 = PTR_s_canvasView_1002e6c08;
      uVar9 = (*(code *)puVar1)(param_1,PTR_s_canvasView_1002e6c08);
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      (*(code *)puVar1)(uVar9,PTR_s_setNeedsDisplay__1002e6ac8,1);
      (*(code *)puVar2)(uVar9);
      uVar9 = (*(code *)puVar1)(param_1,puVar3);
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      uVar11 = (*(code *)puVar1)(uVar9,PTR_s_window_1002e6878);
      uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
      (*(code *)puVar1)(uVar11,PTR_s_makeKeyAndOrderFront__1002e68c0,param_1);
      (*(code *)puVar2)(uVar11);
      (*(code *)puVar2)(uVar9);
      (*(code *)puVar2)(uVar6);
      (*(code *)puVar2)(uVar5);
    }
  }
  puVar1 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(lVar7);
  (*(code *)puVar1)(uVar4);
  return;
}



// ===== videoPlayerForDocument:  @ 0x10004a202 =====

/* Function Stack Size: 0x18 bytes */

ID CanvasViewController::videoPlayerForDocument_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ID IVar9;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  undefined8 local_38;
  
  puVar3 = PTR__OBJC_CLASS___AVPlayerItem_1002ef0e0;
  puVar2 = PTR__OBJC_CLASS___AVPlayer_1002ef0d8;
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(param_3,PTR_s_video_1002e8078);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)puVar1)(uVar4,PTR_s_asset_1002e8080);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar6 = (*(code *)puVar1)(puVar3,PTR_s_playerItemWithAsset__1002e92f8,uVar5);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  uVar7 = (*(code *)puVar1)(puVar2,PTR_s_playerWithPlayerItem__1002e9300,uVar6);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar6);
  (*(code *)puVar2)(uVar5);
  (*(code *)puVar2)(uVar4);
  puVar1 = PTR__objc_msgSend_10027d560;
  (*(code *)PTR__objc_msgSend_10027d560)(uVar7,PTR_s_setActionAtItemEnd__1002e9308,2);
  uVar4 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSNotificationCenter_1002eead0,
                            PTR_s_defaultCenter_1002e65d0);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)puVar1)(uVar4,PTR_s_rac_addObserverForName_object__1002e82d0,
                            *(undefined8 *)PTR__AVPlayerItemDidPlayToEndTimeNotification_10027d030,0
                           );
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  local_58 = PTR___NSConcreteStackBlock_10027d330;
  local_50 = 0xc2000000;
  local_4c = 0;
  local_48 = FUN_10004a3b1;
  local_40 = &DAT_10027ff30;
  uVar6 = (*(code *)PTR__objc_retain_10027d598)(uVar7);
  local_38 = uVar6;
  uVar7 = (*(code *)puVar1)(uVar5,PTR_s_filter__1002e9310,&local_58);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  uVar8 = (*(code *)PTR__objc_msgSend_10027d560)
                    (uVar7,PTR_s_subscribeNext__1002e70d8,&PTR___NSConcreteGlobalBlock_10027ff80);
  uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
  (*(code *)puVar2)(uVar8);
  (*(code *)puVar2)(uVar7);
  (*(code *)puVar2)(uVar5);
  (*(code *)puVar2)(uVar4);
  (*(code *)puVar2)(local_38);
  IVar9 = _objc_autoreleaseReturnValue(uVar6);
  return IVar9;
}



// ===== videoViewWithPlayer:video:  @ 0x10004a4c1 =====

/* Function Stack Size: 0x20 bytes */

ID CanvasViewController::videoViewWithPlayer_video_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ID IVar6;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  puVar1 = PTR__objc_retain_10027d598;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  puVar2 = PTR__OBJC_CLASS___AVPlayerLayer_1002ef0e8;
  uVar4 = (*(code *)puVar1)(param_4);
  uVar5 = (*(code *)PTR__objc_msgSend_10027d560)
                    (puVar2,PTR_s_playerLayerWithPlayer__1002e9320,uVar3);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar3);
  IVar6 = _objc_retainAutoreleasedReturnValue(uVar5);
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar3 = (*(code *)PTR__objc_msgSend_10027d560)(param_4,PTR_s_displaySize_1002e6800);
  (*(code *)puVar2)(uVar4);
  local_58 = 0;
  uStack_50 = 0;
  local_48 = uVar3;
  (*(code *)puVar1)(IVar6,PTR_s_setBounds__1002e8628);
  uVar3 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSView_1002eec08,PTR_s_alloc_1002e64e8);
  if (IVar6 == 0) {
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_78,IVar6,PTR_s_bounds_1002e6938);
  }
  uVar3 = (*(code *)puVar1)(uVar3,PTR_s_initWithFrame__1002e6930);
  (*(code *)puVar1)(uVar3,PTR_s_setLayer__1002e78f8,IVar6);
  (*(code *)puVar1)(uVar3,PTR_s_setWantsLayer__1002e7260,1);
  (*(code *)PTR__objc_release_10027d590)(IVar6);
  IVar6 = _objc_autoreleaseReturnValue(uVar3);
  return IVar6;
}



// ===== observeValueForKeyPath:ofObject:change:context:  @ 0x10004a644 =====

/* Function Stack Size: 0x30 bytes */

void CanvasViewController::observeValueForKeyPath_ofObject_change_context_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,void *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  ID self;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ID IVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  objc_super local_e8;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  puVar1 = PTR__objc_retain_10027d598;
  uVar4 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  self = (*(code *)puVar1)(param_4);
  uVar5 = (*(code *)puVar1)(param_5);
  puVar15 = PTR_s_objectForKey__1002e6550;
  puVar1 = PTR_s_isEqualToString__1002e6410;
  if (PTR_LOOP_1002f8ba0 == param_6) {
    uVar9 = (*(code *)PTR__objc_msgSend_10027d560)
                      (uVar5,PTR_s_objectForKey__1002e6550,
                       *(undefined8 *)PTR__NSKeyValueChangeOldKey_10027d180);
    lVar6 = _objc_retainAutoreleasedReturnValue(uVar9);
    puVar1 = PTR__objc_msgSend_10027d560;
    if (lVar6 != 0) {
      (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_stopObservingGraphics__1002e8e88,lVar6);
      lVar7 = (*(code *)puVar1)(lVar6,PTR_s_count_1002e6488);
      puVar15 = PTR__objc_release_10027d590;
      if (lVar7 != 0) {
        lVar13 = 0;
        do {
          uVar9 = (*(code *)puVar1)(param_1,PTR_s_canvasView_1002e6c08);
          uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
          uVar10 = (*(code *)puVar1)(lVar6,PTR_s_objectAtIndex__1002e6a80,lVar13);
          IVar8 = _objc_retainAutoreleasedReturnValue(uVar10);
          if (IVar8 == 0) {
            local_48 = 0;
            uStack_40 = 0;
            local_58 = 0;
            uStack_50 = 0;
          }
          else {
            _objc_msgSend_stret((undefined *)&local_58,IVar8,PTR_s_drawingBounds_1002e83f0);
          }
          (*(code *)PTR__objc_msgSend_10027d560)(uVar9,PTR_s_setNeedsDisplayInRect__1002e9280);
          (*(code *)puVar15)(IVar8);
          (*(code *)puVar15)(uVar9);
          lVar13 = lVar13 + 1;
        } while (lVar7 != lVar13);
      }
      puVar15 = PTR_s_text_1002e83f8;
      uVar9 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_text_1002e83f8);
      lVar7 = _objc_retainAutoreleasedReturnValue(uVar9);
      if (lVar7 == 0) {
        (*(code *)PTR__objc_release_10027d590)(0);
      }
      else {
        uVar9 = (*(code *)puVar1)(param_1,puVar15);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        cVar3 = (*(code *)puVar1)(lVar6,PTR_s_containsObject__1002e6ea0,uVar9);
        (*(code *)PTR__objc_release_10027d590)(uVar9);
        (*(code *)PTR__objc_release_10027d590)(lVar7);
        if (cVar3 != '\0') {
          (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_stopEditingText_1002e9138);
        }
      }
      uVar9 = (*(code *)puVar1)(param_1,PTR_s_windowController_1002e7378);
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      uVar10 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSIndexSet_1002eebc8,PTR_s_indexSet_1002e6ba8);
      uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
      (*(code *)puVar1)(uVar9,PTR_s_setSelectionIndexes__1002e6bb0,uVar10);
      puVar1 = PTR__objc_release_10027d590;
      (*(code *)PTR__objc_release_10027d590)(uVar10);
      (*(code *)puVar1)(uVar9);
      puVar15 = PTR_s_objectForKey__1002e6550;
    }
    uVar9 = (*(code *)PTR__objc_msgSend_10027d560)
                      (uVar5,puVar15,*(undefined8 *)PTR__NSKeyValueChangeNewKey_10027d170);
    lVar7 = _objc_retainAutoreleasedReturnValue(uVar9);
    puVar1 = PTR__objc_msgSend_10027d560;
    if (lVar7 != 0) {
      (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_startObservingGraphics__1002e9018,lVar7);
      lVar13 = (*(code *)puVar1)(lVar7,PTR_s_count_1002e6488);
      puVar15 = PTR__objc_release_10027d590;
      if (lVar13 != 0) {
        lVar14 = 0;
        do {
          uVar9 = (*(code *)puVar1)(param_1,PTR_s_canvasView_1002e6c08);
          uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
          uVar10 = (*(code *)puVar1)(lVar7,PTR_s_objectAtIndex__1002e6a80,lVar14);
          IVar8 = _objc_retainAutoreleasedReturnValue(uVar10);
          if (IVar8 == 0) {
            local_68 = 0;
            uStack_60 = 0;
            local_78 = 0;
            uStack_70 = 0;
          }
          else {
            _objc_msgSend_stret((undefined *)&local_78,IVar8,PTR_s_drawingBounds_1002e83f0);
          }
          (*(code *)PTR__objc_msgSend_10027d560)(uVar9,PTR_s_setNeedsDisplayInRect__1002e9280);
          (*(code *)puVar15)(IVar8);
          (*(code *)puVar15)(uVar9);
          lVar14 = lVar14 + 1;
        } while (lVar13 != lVar14);
      }
    }
    puVar1 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(lVar7);
    (*(code *)puVar1)(lVar6);
  }
  else if (PTR_LOOP_1002f8bb0 == param_6) {
    cVar3 = (*(code *)PTR__objc_msgSend_10027d560)
                      (uVar4,PTR_s_isEqualToString__1002e6410,PTR_cf_drawingBounds_1002f8ae0);
    if (cVar3 == '\0') {
      cVar3 = (*(code *)PTR__objc_msgSend_10027d560)(uVar4,puVar1,PTR_cf_drawingContents_1002f8ad8);
      if (cVar3 != '\0') {
        if (self == 0) {
          local_88 = 0;
          uStack_80 = 0;
          local_98 = 0;
          uStack_90 = 0;
        }
        else {
          _objc_msgSend_stret((undefined *)&local_98,self,PTR_s_drawingBounds_1002e83f0);
        }
        puVar1 = PTR__objc_msgSend_10027d560;
        uVar9 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_canvasView_1002e6c08);
        uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
        (*(code *)puVar1)(uVar9,PTR_s_setNeedsDisplayInRect__1002e9280);
        (*(code *)PTR__objc_release_10027d590)(uVar9);
      }
    }
    else {
      uVar9 = (*(code *)PTR__objc_msgSend_10027d560)
                        (uVar5,PTR_s_objectForKey__1002e6550,
                         *(undefined8 *)PTR__NSKeyValueChangeOldKey_10027d180);
      IVar8 = _objc_retainAutoreleasedReturnValue(uVar9);
      if (IVar8 == 0) {
        local_88 = 0;
        uStack_80 = 0;
        local_98 = 0;
        uStack_90 = 0;
      }
      else {
        _objc_msgSend_stret((undefined *)&local_98,IVar8,PTR_s_rectValue_1002e9328);
      }
      puVar15 = PTR__objc_release_10027d590;
      (*(code *)PTR__objc_release_10027d590)(IVar8);
      puVar2 = PTR_s_canvasView_1002e6c08;
      puVar1 = PTR__objc_msgSend_10027d560;
      uVar9 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_canvasView_1002e6c08);
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      (*(code *)puVar1)(uVar9,PTR_s_setNeedsDisplayInRect__1002e9280);
      (*(code *)puVar15)(uVar9);
      uVar9 = (*(code *)puVar1)(uVar5,PTR_s_objectForKey__1002e6550,
                                *(undefined8 *)PTR__NSKeyValueChangeNewKey_10027d170);
      IVar8 = _objc_retainAutoreleasedReturnValue(uVar9);
      if (IVar8 == 0) {
        local_a8 = 0;
        uStack_a0 = 0;
        local_b8 = 0;
        uStack_b0 = 0;
      }
      else {
        _objc_msgSend_stret((undefined *)&local_b8,IVar8,PTR_s_rectValue_1002e9328);
      }
      (*(code *)puVar15)(IVar8);
      uVar9 = (*(code *)puVar1)(param_1,puVar2);
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      (*(code *)puVar1)(uVar9,PTR_s_setNeedsDisplayInRect__1002e9280);
      (*(code *)puVar15)(uVar9);
    }
  }
  else if (PTR_LOOP_1002f8ba8 == param_6) {
    cVar3 = (*(code *)PTR__objc_msgSend_10027d560)(uVar4,PTR_s_isEqualTo__1002e7028,&cf_scale);
    puVar1 = PTR__objc_msgSend_10027d560;
    if (cVar3 != '\0') {
      uVar9 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_containerDocumentView_1002e9108);
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      uVar10 = (*(code *)puVar1)(param_1,PTR_s_document_1002e69e8);
      uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
      puVar15 = PTR_s_image_1002e69f0;
      uVar11 = (*(code *)puVar1)(uVar10,PTR_s_image_1002e69f0);
      uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
      uVar12 = (*(code *)puVar1)(uVar11,puVar15);
      uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
      local_c8 = (*(code *)puVar1)(uVar12,PTR_s_size_1002e66a8);
      local_d8 = *(undefined4 *)PTR__NSZeroPoint_10027d308;
      uStack_d4 = *(undefined4 *)(PTR__NSZeroPoint_10027d308 + 4);
      uStack_d0 = *(undefined4 *)(PTR__NSZeroPoint_10027d308 + 8);
      uStack_cc = *(undefined4 *)(PTR__NSZeroPoint_10027d308 + 0xc);
      (*(code *)puVar1)(uVar9,PTR_s_setFrame__1002e6500);
      puVar1 = PTR__objc_release_10027d590;
      (*(code *)PTR__objc_release_10027d590)(uVar12);
      (*(code *)puVar1)(uVar11);
      (*(code *)puVar1)(uVar10);
      (*(code *)puVar1)(uVar9);
    }
  }
  else {
    local_e8.super_class = (class_t *)PTR_CanvasViewController_1002ef8d0;
    local_e8.receiver = param_1;
    _objc_msgSendSuper2(&local_e8,PTR_s_observeValueForKeyPath_ofObject__1002e63d0,uVar4,self,uVar5,
                        param_6);
  }
  puVar1 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar5);
  (*(code *)puVar1)(self);
  (*(code *)puVar1)(uVar4);
  return;
}



// ===== startObservingGraphics:  @ 0x10004ae82 =====

/* Function Stack Size: 0x18 bytes */

void CanvasViewController::startObservingGraphics_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar3 = PTR__OBJC_CLASS___NSIndexSet_1002eebc8;
  puVar2 = PTR_s_count_1002e6488;
  uVar4 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar5 = (*(code *)PTR__objc_msgSend_10027d560)(param_3,puVar2);
  uVar5 = (*(code *)puVar1)(puVar3,PTR_s_indexSetWithIndexesInRange__1002e8f60,0,uVar5);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  puVar2 = PTR_s_addObserver_toObjectsAtIndexes_f_1002e9330;
  (*(code *)puVar1)(param_3,PTR_s_addObserver_toObjectsAtIndexes_f_1002e9330,param_1,uVar5,
                    PTR_cf_drawingBounds_1002f8ae0,3,PTR_LOOP_1002f8bb0);
  (*(code *)puVar1)(param_3,puVar2,param_1,uVar5,PTR_cf_drawingContents_1002f8ad8,0,
                    PTR_LOOP_1002f8bb0);
  puVar1 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  (*(code *)puVar1)(uVar5);
  return;
}



// ===== stopObservingGraphics:  @ 0x10004af5d =====

/* Function Stack Size: 0x18 bytes */

void CanvasViewController::stopObservingGraphics_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar3 = PTR__OBJC_CLASS___NSIndexSet_1002eebc8;
  puVar2 = PTR_s_count_1002e6488;
  uVar4 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar5 = (*(code *)PTR__objc_msgSend_10027d560)(param_3,puVar2);
  uVar5 = (*(code *)puVar1)(puVar3,PTR_s_indexSetWithIndexesInRange__1002e8f60,0,uVar5);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  puVar2 = PTR_s_removeObserver_fromObjectsAtInde_1002e9338;
  (*(code *)puVar1)(param_3,PTR_s_removeObserver_fromObjectsAtInde_1002e9338,param_1,uVar5,
                    PTR_cf_drawingContents_1002f8ad8);
  (*(code *)puVar1)(param_3,puVar2,param_1,uVar5,PTR_cf_drawingBounds_1002f8ae0);
  puVar1 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  (*(code *)puVar1)(uVar5);
  return;
}



// ===== currentToolChangedNotification:  @ 0x10004b016 =====

/* Function Stack Size: 0x18 bytes */

void CanvasViewController::currentToolChangedNotification_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(uVar3,PTR_s_object_1002e69d8);
  lVar5 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar4 = (*(code *)puVar1)(param_1,PTR_s_windowController_1002e7378);
  lVar6 = _objc_retainAutoreleasedReturnValue(uVar4);
  puVar1 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(lVar6);
  (*(code *)puVar1)(lVar5);
  puVar1 = PTR__objc_msgSend_10027d560;
  if (lVar5 == lVar6) {
    uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(uVar3,PTR_s_userInfo_1002e73b0);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar7 = (*(code *)puVar1)(uVar4,PTR_s_objectForKeyedSubscript__1002e67f0,
                              PTR_cf_kCurrentToolChangedOldToolKey_1002f8528);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    uVar8 = (*(code *)puVar1)(uVar7,PTR_s_integerValue_1002e6740);
    puVar2 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar7);
    (*(code *)puVar2)(uVar4);
    uVar4 = (*(code *)puVar1)(uVar3,PTR_s_userInfo_1002e73b0);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar7 = (*(code *)puVar1)(uVar4,PTR_s_objectForKeyedSubscript__1002e67f0,
                              PTR_cf_kCurrentToolChangedNewToolKey_1002f8530);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    uVar9 = (*(code *)puVar1)(uVar7,PTR_s_integerValue_1002e6740);
    puVar1 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar7);
    (*(code *)puVar1)(uVar4);
    *(bool *)(param_1 + _overrideCreationBlock) = (uVar9 & 0xfffffffffffffffe) == 6;
    if (uVar8 != uVar9) {
      (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_stopCrop_1002e9140);
    }
    (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_checkAndSetMouseCursor_1002e9298);
  }
  (*(code *)PTR__objc_release_10027d590)(uVar3);
  return;
}



// ===== selectionIndexesChangedNotification:  @ 0x10004b1a5 =====

/* Function Stack Size: 0x18 bytes */

void CanvasViewController::selectionIndexesChangedNotification_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar3 = (*(code *)PTR__objc_msgSend_10027d560)(param_3,PTR_s_object_1002e69d8);
  lVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar3 = (*(code *)puVar1)(param_1,PTR_s_windowController_1002e7378);
  lVar5 = _objc_retainAutoreleasedReturnValue(uVar3);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(lVar5);
  (*(code *)puVar2)(lVar4);
  if (lVar4 != lVar5) {
    return;
  }
  uVar3 = (*(code *)puVar1)(param_1,PTR_s_canvasView_1002e6c08);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar6 = (*(code *)puVar1)(param_1,PTR_s_windowController_1002e7378);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  uVar7 = (*(code *)puVar1)(uVar6,PTR_s_selectionIndexes_1002e6d20);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  (*(code *)puVar1)(uVar3,PTR_s_setSelectionIndexes__1002e6bb0,uVar7);
  (*(code *)PTR__objc_release_10027d590)(uVar7);
  (*(code *)PTR__objc_release_10027d590)(uVar6);
  (*(code *)PTR__objc_release_10027d590)(uVar3);
  uVar3 = (*(code *)puVar1)(param_1,PTR_s_canvasView_1002e6c08);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)puVar1)(uVar3,PTR_s_setNeedsDisplay__1002e6ac8,1);
  (*(code *)PTR__objc_release_10027d590)(uVar3);
  return;
}



// ===== startEditingText:  @ 0x10004b2cb =====

/* Function Stack Size: 0x18 bytes */

void CanvasViewController::startEditingText_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ID self;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  puVar2 = PTR_s_setText__1002e9340;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  puVar1 = PTR__objc_msgSend_10027d560;
  (*(code *)PTR__objc_msgSend_10027d560)(param_1,puVar2,uVar3);
  uVar4 = (*(code *)puVar1)(param_1,PTR_s_windowController_1002e7378);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  puVar2 = PTR__OBJC_CLASS___NSIndexSet_1002eebc8;
  uVar5 = (*(code *)puVar1)(param_1,PTR_s_document_1002e69e8);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar6 = (*(code *)puVar1)(uVar5,PTR_s_graphics_1002e6d18);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  uVar7 = (*(code *)puVar1)(param_3,PTR_s_indexInGraphics__1002e91f0,uVar6);
  uVar7 = (*(code *)puVar1)(puVar2,PTR_s_indexSetWithIndex__1002e8d18,uVar7);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  (*(code *)puVar1)(uVar4,PTR_s_setSelectionIndexes__1002e6bb0,uVar7);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar7);
  (*(code *)puVar2)(uVar6);
  (*(code *)puVar2)(uVar5);
  (*(code *)puVar2)(uVar4);
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(param_3,PTR_s_newEditingView_1002e9348);
  (*(code *)puVar2)(uVar3);
  uVar3 = (*(code *)puVar1)(param_1,PTR_s_canvasView_1002e6c08);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)puVar1)(uVar3,PTR_s_addSubview__1002e6920,uVar4);
  (*(code *)puVar2)(uVar3);
  uVar3 = (*(code *)puVar1)(param_1,PTR_s_canvasView_1002e6c08);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar5 = (*(code *)puVar1)(uVar3,PTR_s_window_1002e6878);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)PTR__objc_msgSend_10027d560)(uVar5,PTR_s_makeFirstResponder__1002e6e58,uVar4);
  (*(code *)puVar2)(uVar5);
  (*(code *)puVar2)(uVar3);
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar3 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_canvasView_1002e6c08);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar5 = (*(code *)puVar1)(param_1,PTR_s_text_1002e83f8);
  self = _objc_retainAutoreleasedReturnValue(uVar5);
  if (self == 0) {
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_58,self,PTR_s_drawingBounds_1002e83f0);
  }
  (*(code *)PTR__objc_msgSend_10027d560)(uVar3,PTR_s_setNeedsDisplayInRect__1002e9280);
  (*(code *)puVar2)(self);
  (*(code *)puVar2)(uVar3);
  (*(code *)puVar2)(uVar4);
  return;
}



// ===== stopEditingText  @ 0x10004b51c =====

/* Function Stack Size: 0x10 bytes */

void CanvasViewController::stopEditingText(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  puVar2 = PTR_s_text_1002e83f8;
  uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_text_1002e83f8);
  lVar5 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)PTR__objc_release_10027d590)(lVar5);
  puVar1 = PTR__objc_msgSend_10027d560;
  if (lVar5 != 0) {
    uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,puVar2);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar6 = (*(code *)puVar1)(uVar4,PTR_s_textView_1002e92e8);
    lVar5 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)PTR__objc_release_10027d590)(uVar4);
    uVar4 = (*(code *)puVar1)(param_1,PTR_s_canvasView_1002e6c08);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar6 = (*(code *)puVar1)(uVar4,PTR_s_window_1002e6878);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    uVar7 = (*(code *)puVar1)(uVar6,PTR_s_firstResponder_1002e6c98);
    lVar8 = _objc_retainAutoreleasedReturnValue(uVar7);
    puVar1 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(lVar8);
    (*(code *)puVar1)(uVar6);
    (*(code *)puVar1)(uVar4);
    puVar1 = PTR__objc_msgSend_10027d560;
    (*(code *)PTR__objc_msgSend_10027d560)(lVar5,PTR_s_removeFromSuperview_1002e7280);
    if (lVar8 == lVar5) {
      uVar4 = (*(code *)puVar1)(param_1,PTR_s_canvasView_1002e6c08);
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      uVar6 = (*(code *)puVar1)(uVar4,PTR_s_window_1002e6878);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      (*(code *)puVar1)(uVar6,PTR_s_makeFirstResponder__1002e6e58,param_1);
      puVar2 = PTR__objc_release_10027d590;
      (*(code *)PTR__objc_release_10027d590)(uVar6);
      (*(code *)puVar2)(uVar4);
    }
    uVar4 = (*(code *)puVar1)(param_1,PTR_s_text_1002e83f8);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    cVar3 = (*(code *)puVar1)(uVar4,PTR_s_finalizeEditingView_1002e9350);
    (*(code *)PTR__objc_release_10027d590)(uVar4);
    puVar2 = PTR_s_text_1002e83f8;
    if (cVar3 == '\0') {
      uVar4 = (*(code *)puVar1)(param_1,PTR_s_document_1002e69e8);
      uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
      uVar6 = (*(code *)puVar1)(uVar4,PTR_s_graphics_1002e6d18);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      uVar7 = (*(code *)puVar1)(param_1,puVar2);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      lVar8 = (*(code *)puVar1)(uVar6,PTR_s_indexOfObject__1002e6cd8,uVar7);
      puVar2 = PTR__objc_release_10027d590;
      (*(code *)PTR__objc_release_10027d590)(uVar7);
      (*(code *)puVar2)(uVar6);
      (*(code *)puVar2)(uVar4);
      puVar1 = PTR__objc_msgSend_10027d560;
      if (lVar8 != 0x7fffffffffffffff) {
        uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_document_1002e69e8);
        uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
        uVar6 = (*(code *)puVar1)(uVar4,PTR_s_mutableGraphics_1002e9248);
        uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
        uVar7 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSIndexSet_1002eebc8,
                                  PTR_s_indexSetWithIndex__1002e8d18,lVar8);
        uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
        (*(code *)puVar1)(uVar6,PTR_s_removeObjectsAtIndexes__1002e9028,uVar7);
        (*(code *)puVar2)(uVar7);
        (*(code *)puVar2)(uVar6);
        (*(code *)puVar2)(uVar4);
      }
    }
    (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_setText__1002e9340,0);
    (*(code *)PTR__objc_release_10027d590)(lVar5);
    return;
  }
  return;
}



// ===== doCrop  @ 0x10004b7f9 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Function Stack Size: 0x10 bytes */

void CanvasViewController::doCrop(ID param_1,SEL param_2)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  ID self;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *local_f8;
  undefined4 local_f0;
  undefined4 local_ec;
  code *local_e8;
  undefined *local_e0;
  uint local_d8;
  uint uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  code *local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  ulong local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  ulong uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  uVar11 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_crop_1002e6d98);
  self = _objc_retainAutoreleasedReturnValue(uVar11);
  if (self == 0) {
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_58,self,PTR_s_frame_1002e64b0);
  }
  puVar6 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(self);
  puVar5 = PTR__objc_msgSend_10027d560;
  uVar11 = *(undefined8 *)PTR__NSZeroPoint_10027d308;
  uVar16 = *(undefined8 *)(PTR__NSZeroPoint_10027d308 + 8);
  uVar8 = local_48._4_4_;
  uVar9 = (undefined4)uStack_40;
  uVar10 = uStack_40._4_4_;
  uVar4 = (undefined4)local_48;
  (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_stopCrop_1002e9140);
  uVar12 = (*(code *)puVar5)(param_1,PTR_s_undoManager_1002e6bc8);
  uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
  (*(code *)puVar5)(uVar12,PTR_s_disableUndoRegistration_1002e8f58);
  (*(code *)puVar6)(uVar12);
  uVar12 = (*(code *)puVar5)(param_1,PTR_s_imageView_1002e6438);
  uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
  uVar13 = (*(code *)puVar5)(param_1,PTR_s_document_1002e69e8);
  uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
  uVar14 = (*(code *)puVar5)(uVar13,PTR_s_image_1002e69f0);
  uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
  uVar15 = (*(code *)puVar5)(uVar14,PTR_s_cropToRect__1002e9358);
  uVar15 = _objc_retainAutoreleasedReturnValue(uVar15);
  (*(code *)puVar5)(uVar12,PTR_s_setImage__1002e6448,uVar15);
  puVar6 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar15);
  (*(code *)puVar6)(uVar14);
  (*(code *)puVar6)(uVar13);
  (*(code *)puVar6)(uVar12);
  uVar12 = (*(code *)puVar5)(param_1,PTR_s_document_1002e69e8);
  uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
  uVar13 = (*(code *)puVar5)(uVar12,PTR_s_video_1002e8078);
  uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
  (*(code *)puVar5)(uVar13,PTR_s_setCropRect__1002e67b8);
  (*(code *)puVar6)(uVar13);
  (*(code *)puVar6)(uVar12);
  uVar12 = (*(code *)puVar5)(param_1,PTR_s_containerDocumentView_1002e9108);
  uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
  uStack_64 = uVar8;
  uStack_60 = uVar9;
  uStack_5c = uVar10;
  local_78 = uVar11;
  uStack_70 = uVar16;
  local_68 = uVar4;
  (*(code *)puVar5)(uVar12,PTR_s_setFrame__1002e6500);
  (*(code *)puVar6)(uVar12);
  puVar6 = PTR_s_alloc_1002e64e8;
  uVar11 = (*(code *)puVar5)(PTR__OBJC_CLASS___NSMutableIndexSet_1002eef88,PTR_s_alloc_1002e64e8);
  puVar7 = PTR_s_init_1002e6538;
  uVar11 = (*(code *)puVar5)(uVar11,PTR_s_init_1002e6538);
  uVar16 = (*(code *)puVar5)(PTR__OBJC_CLASS___NSMutableIndexSet_1002eef88,puVar6);
  uVar16 = (*(code *)puVar5)(uVar16,puVar7);
  uVar12 = (*(code *)puVar5)(param_1,PTR_s_document_1002e69e8);
  uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
  uVar13 = (*(code *)puVar5)(uVar12,PTR_s_graphics_1002e6d18);
  uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
  puVar5 = PTR__objc_retain_10027d598;
  local_c8 = PTR___NSConcreteStackBlock_10027d330;
  local_c0 = 0xc2000000;
  local_bc = 0;
  local_b8 = FUN_10004bd4c;
  local_b0 = &DAT_10027ffa0;
  local_80 = uStack_40;
  local_88 = local_48;
  local_90 = uStack_50;
  local_98 = local_58;
  local_a8 = uVar16;
  uVar16 = (*(code *)PTR__objc_retain_10027d598)(uVar16);
  puVar6 = PTR_s_enumerateObjectsUsingBlock__1002e6d78;
  local_a0 = uVar11;
  uVar11 = (*(code *)puVar5)();
  puVar5 = PTR__objc_msgSend_10027d560;
  (*(code *)PTR__objc_msgSend_10027d560)(uVar13,puVar6,&local_c8);
  puVar6 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar13);
  (*(code *)puVar6)(uVar12);
  uVar2 = (uint)local_58 ^ _DAT_100170c70;
  uVar3 = local_58._4_4_ ^ _UNK_100170c74;
  uVar1 = uStack_50 ^ _UNK_100170c78;
  uVar12 = (*(code *)puVar5)(param_1,PTR_s_document_1002e69e8);
  uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
  uVar13 = (*(code *)puVar5)(uVar12,PTR_s_graphics_1002e6d18);
  uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
  uVar14 = (*(code *)puVar5)(uVar13,PTR_s_objectsAtIndexes__1002e6d28,uVar16);
  uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
  local_f8 = PTR___NSConcreteStackBlock_10027d330;
  local_f0 = 0xc0000000;
  local_ec = 0;
  local_e8 = FUN_10004be95;
  local_e0 = &DAT_10027ffd0;
  local_d8 = uVar2;
  uStack_d4 = uVar3;
  uStack_d0 = (int)uVar1;
  uStack_cc = (int)(uVar1 >> 0x20);
  (*(code *)puVar5)(uVar14,PTR_s_enumerateObjectsUsingBlock__1002e6d78,&local_f8);
  puVar6 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar14);
  (*(code *)puVar6)(uVar13);
  (*(code *)puVar6)(uVar12);
  uVar12 = (*(code *)puVar5)(param_1,PTR_s_document_1002e69e8);
  uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
  uVar13 = (*(code *)puVar5)(uVar12,PTR_s_mutableGraphics_1002e9248);
  uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
  (*(code *)puVar5)(uVar13,PTR_s_removeObjectsAtIndexes__1002e9028,uVar11);
  puVar6 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar13);
  (*(code *)puVar6)(uVar12);
  uVar12 = (*(code *)puVar5)(param_1,PTR_s_undoManager_1002e6bc8);
  uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
  (*(code *)puVar5)(uVar12,PTR_s_enableUndoRegistration_1002e8f70);
  (*(code *)puVar6)(uVar12);
  uVar12 = (*(code *)puVar5)(param_1,PTR_s_undoManager_1002e6bc8);
  uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
  (*(code *)puVar5)(uVar12,PTR_s_removeAllActions_1002e9360);
  (*(code *)puVar6)(uVar12);
  (*(code *)puVar6)(local_a0);
  (*(code *)puVar6)(local_a8);
  (*(code *)puVar6)(uVar11);
  (*(code *)puVar6)(uVar16);
  return;
}



// ===== stopCrop  @ 0x10004bec7 =====

/* Function Stack Size: 0x10 bytes */

void CanvasViewController::stopCrop(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar3 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_crop_1002e6d98);
  lVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)PTR__objc_release_10027d590)(lVar4);
  puVar2 = PTR_s_canvasView_1002e6c08;
  puVar1 = PTR__objc_msgSend_10027d560;
  if (lVar4 != 0) {
    uVar3 = (*(code *)PTR__objc_msgSend_10027d560)(param_1);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    (*(code *)puVar1)(uVar3,PTR_s_setNeedsDisplay__1002e6ac8,1);
    (*(code *)PTR__objc_release_10027d590)(uVar3);
    uVar3 = (*(code *)puVar1)(param_1,puVar2);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    uVar5 = (*(code *)puVar1)(uVar3,PTR_s_window_1002e6878);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    uVar6 = (*(code *)puVar1)(param_1,puVar2);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)puVar1)(uVar5,PTR_s_makeFirstResponder__1002e6e58,uVar6);
    puVar2 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar6);
    (*(code *)puVar2)(uVar5);
    (*(code *)puVar2)(uVar3);
    (*(code *)puVar1)(param_1,PTR_s_setCrop__1002e9228,0);
    return;
  }
  return;
}



// ===== windowController  @ 0x10004bfd6 =====

/* Function Stack Size: 0x10 bytes */

ID CanvasViewController::windowController(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID IVar5;
  
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar2 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_view_1002e6900);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  uVar3 = (*(code *)puVar1)(uVar2,PTR_s_window_1002e6878);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*(code *)puVar1)(uVar3,PTR_s_windowController_1002e7378);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  puVar1 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar3);
  (*(code *)puVar1)(uVar2);
  IVar5 = _objc_autoreleaseReturnValue(uVar4);
  return IVar5;
}



// ===== setCreatingGraphic:  @ 0x10004c050 =====

/* Function Stack Size: 0x18 bytes */

void CanvasViewController::setCreatingGraphic_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__objc_retain_10027d598;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar4 = *(undefined8 *)(param_1 + _creatingGraphic);
  *(undefined8 *)(param_1 + _creatingGraphic) = uVar3;
  uVar3 = (*(code *)puVar1)(uVar3);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_canvasView_1002e6c08);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)puVar1)(uVar4,PTR_s_setCreatingGraphic__1002e9238,uVar3);
  (*(code *)puVar2)(uVar3);
  (*(code *)puVar2)(uVar4);
  return;
}



// ===== setSelection:  @ 0x10004c0d5 =====

/* Function Stack Size: 0x18 bytes */

void CanvasViewController::setSelection_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__objc_retain_10027d598;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar4 = *(undefined8 *)(param_1 + _selection);
  *(undefined8 *)(param_1 + _selection) = uVar3;
  uVar3 = (*(code *)puVar1)(uVar3);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_canvasView_1002e6c08);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)puVar1)(uVar4,PTR_s_setSelection__1002e91f8,uVar3);
  (*(code *)puVar2)(uVar3);
  (*(code *)puVar2)(uVar4);
  return;
}



// ===== setText:  @ 0x10004c15a =====

/* Function Stack Size: 0x18 bytes */

void CanvasViewController::setText_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__objc_retain_10027d598;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar4 = *(undefined8 *)(param_1 + _text);
  *(undefined8 *)(param_1 + _text) = uVar3;
  uVar3 = (*(code *)puVar1)(uVar3);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_canvasView_1002e6c08);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)puVar1)(uVar4,PTR_s_setText__1002e9340,uVar3);
  (*(code *)puVar2)(uVar3);
  (*(code *)puVar2)(uVar4);
  return;
}



// ===== setCrop:  @ 0x10004c1df =====

/* Function Stack Size: 0x18 bytes */

void CanvasViewController::setCrop_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR__objc_retain_10027d598;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar4 = *(undefined8 *)(param_1 + _crop);
  *(undefined8 *)(param_1 + _crop) = uVar3;
  uVar3 = (*(code *)puVar1)(uVar3);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_canvasView_1002e6c08);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)puVar1)(uVar4,PTR_s_setCrop__1002e9228,uVar3);
  (*(code *)puVar2)(uVar3);
  (*(code *)puVar2)(uVar4);
  return;
}



// ===== acceptsFirstResponder  @ 0x10004c264 =====

/* Function Stack Size: 0x10 bytes */

char CanvasViewController::acceptsFirstResponder(ID param_1,SEL param_2)

{
  return '\x01';
}



// ===== snapshotRect  @ 0x10004c26f =====

/* Function Stack Size: 0x10 bytes */

CGRect * CanvasViewController::snapshotRect(CGRect *__return_storage_ptr__,ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ID IVar4;
  ID self;
  undefined8 uVar5;
  undefined8 in_R8;
  undefined8 in_R9;
  double local_98;
  double dStack_90;
  double local_88;
  double dStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  puVar2 = PTR_s_canvasView_1002e6c08;
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar3 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_canvasView_1002e6c08);
  IVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar3 = (*(code *)puVar1)(param_1,puVar2);
  self = _objc_retainAutoreleasedReturnValue(uVar3);
  if (self == 0) {
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_78,self,PTR_s_visibleRect_1002e9368);
  }
  if (IVar4 == 0) {
    local_48 = 0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_58,IVar4,PTR_s_convertRect_toView__1002e9370,0,in_R8,
                        in_R9,local_78,uStack_70,local_68,uStack_60);
  }
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(self);
  (*(code *)puVar2)(IVar4);
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar3 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_view_1002e6900);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar5 = (*(code *)puVar1)(uVar3,PTR_s_window_1002e6878);
  IVar4 = _objc_retainAutoreleasedReturnValue(uVar5);
  if (IVar4 == 0) {
    local_88 = 0.0;
    dStack_80 = 0.0;
    local_98 = 0.0;
    dStack_90 = 0.0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_98,IVar4,PTR_s_convertRectToScreen__1002e9378);
  }
  (*(code *)puVar2)(IVar4);
  (*(code *)puVar2)(uVar3);
  (__return_storage_ptr__->field1_0x10).field1_0x8 = dStack_80;
  (__return_storage_ptr__->field1_0x10).field0_0x0 = local_88;
  (__return_storage_ptr__->field0_0x0).field1_0x8 = dStack_90;
  (__return_storage_ptr__->field0_0x0).field0_0x0 = local_98;
  return __return_storage_ptr__;
}



// ===== snapshot  @ 0x10004c40b =====

/* Function Stack Size: 0x10 bytes */

ID CanvasViewController::snapshot(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ID IVar7;
  
  puVar3 = PTR_s_windowController_1002e7378;
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar4 = (*(code *)PTR__objc_msgSend_10027d560)();
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)puVar1)(uVar4,PTR_s_selectionIndexes_1002e6d20);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  uVar4 = (*(code *)puVar1)(param_1,puVar3);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar6 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSIndexSet_1002eebc8,PTR_s_indexSet_1002e6ba8);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  (*(code *)puVar1)(uVar4,PTR_s_setSelectionIndexes__1002e6bb0,uVar6);
  (*(code *)puVar2)(uVar6);
  (*(code *)puVar2)(uVar4);
  (*(code *)puVar1)(param_1,PTR_s_stopEditingText_1002e9138);
  (*(code *)puVar1)(param_1,PTR_s_stopCrop_1002e9140);
  uVar4 = (*(code *)puVar1)(param_1,PTR_s_containerDocumentView_1002e9108);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar6 = (*(code *)puVar1)(uVar4,PTR_s_snapshotVisibleRectIncludingSubv_1002e9380);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  (*(code *)puVar2)(uVar4);
  uVar4 = (*(code *)puVar1)(param_1,PTR_s_windowController_1002e7378);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)puVar1)(uVar4,PTR_s_setSelectionIndexes__1002e6bb0,uVar5);
  (*(code *)puVar2)(uVar4);
  (*(code *)puVar2)(uVar5);
  IVar7 = _objc_autoreleaseReturnValue(uVar6);
  return IVar7;
}



// ===== document  @ 0x10004c54b =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Function Stack Size: 0x10 bytes */

ID CanvasViewController::document(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  
  uVar1 = _objc_loadWeakRetained(param_1 + __document);
  IVar2 = _objc_autoreleaseReturnValue(uVar1);
  return IVar2;
}



// ===== canvasView  @ 0x10004c564 =====

/* Function Stack Size: 0x10 bytes */

ID CanvasViewController::canvasView(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + _canvasView);
}



// ===== setCanvasView:  @ 0x10004c575 =====

/* Function Stack Size: 0x18 bytes */

void CanvasViewController::setCanvasView_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = _canvasView;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = uVar3;
  (*(code *)PTR__objc_release_10027d590)(uVar1);
  return;
}



// ===== videoPlayer  @ 0x10004c5a1 =====

/* Function Stack Size: 0x10 bytes */

ID CanvasViewController::videoPlayer(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + _videoPlayer);
}



// ===== setVideoPlayer:  @ 0x10004c5b2 =====

/* Function Stack Size: 0x18 bytes */

void CanvasViewController::setVideoPlayer_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = _videoPlayer;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = uVar3;
  (*(code *)PTR__objc_release_10027d590)(uVar1);
  return;
}



// ===== scrollView  @ 0x10004c5de =====

/* Function Stack Size: 0x10 bytes */

ID CanvasViewController::scrollView(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + _scrollView);
}



// ===== setScrollView:  @ 0x10004c5ef =====

/* Function Stack Size: 0x18 bytes */

void CanvasViewController::setScrollView_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = _scrollView;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = uVar3;
  (*(code *)PTR__objc_release_10027d590)(uVar1);
  return;
}



// ===== containerDocumentView  @ 0x10004c61b =====

/* Function Stack Size: 0x10 bytes */

ID CanvasViewController::containerDocumentView(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + _containerDocumentView);
}



// ===== setContainerDocumentView:  @ 0x10004c62c =====

/* Function Stack Size: 0x18 bytes */

void CanvasViewController::setContainerDocumentView_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = _containerDocumentView;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = uVar3;
  (*(code *)PTR__objc_release_10027d590)(uVar1);
  return;
}



// ===== imageView  @ 0x10004c658 =====

/* Function Stack Size: 0x10 bytes */

ID CanvasViewController::imageView(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + _imageView);
}



// ===== setImageView:  @ 0x10004c669 =====

/* Function Stack Size: 0x18 bytes */

void CanvasViewController::setImageView_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = _imageView;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = uVar3;
  (*(code *)PTR__objc_release_10027d590)(uVar1);
  return;
}



// ===== videoView  @ 0x10004c695 =====

/* Function Stack Size: 0x10 bytes */

ID CanvasViewController::videoView(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + _videoView);
}



// ===== setVideoView:  @ 0x10004c6a6 =====

/* Function Stack Size: 0x18 bytes */

void CanvasViewController::setVideoView_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = _videoView;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = uVar3;
  (*(code *)PTR__objc_release_10027d590)(uVar1);
  return;
}



// ===== text  @ 0x10004c6d2 =====

/* Function Stack Size: 0x10 bytes */

ID CanvasViewController::text(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + _text);
}



// ===== creatingGraphic  @ 0x10004c6e3 =====

/* Function Stack Size: 0x10 bytes */

ID CanvasViewController::creatingGraphic(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + _creatingGraphic);
}



// ===== crop  @ 0x10004c6f4 =====

/* Function Stack Size: 0x10 bytes */

ID CanvasViewController::crop(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + _crop);
}



// ===== selection  @ 0x10004c705 =====

/* Function Stack Size: 0x10 bytes */

ID CanvasViewController::selection(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + _selection);
}



// ===== .cxx_destruct  @ 0x10004c716 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Function Stack Size: 0x10 bytes */

void CanvasViewController::_cxx_destruct(ID param_1,SEL param_2)

{
  _objc_storeStrong(_selection + param_1,0);
  _objc_storeStrong(_crop + param_1,0);
  _objc_storeStrong(_creatingGraphic + param_1,0);
  _objc_storeStrong(_text + param_1,0);
  _objc_storeStrong(_videoView + param_1,0);
  _objc_storeStrong(_imageView + param_1,0);
  _objc_storeStrong(_containerDocumentView + param_1,0);
  _objc_storeStrong(_scrollView + param_1,0);
  _objc_storeStrong(_videoPlayer + param_1,0);
  _objc_storeStrong(_canvasView + param_1,0);
  _objc_destroyWeak(param_1 + __document);
  return;
}



