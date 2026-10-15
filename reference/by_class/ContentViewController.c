// ===== viewDidLoad  @ 0x10005538f =====

/* Function Stack Size: 0x10 bytes */

void ContentViewController::viewDidLoad(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined local_50 [32];
  
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar3 = (*(code *)PTR__objc_msgSend_10027d560)
                    (PTR_CanvasViewController_1002ef120,PTR_s_alloc_1002e64e8);
  uVar3 = (*(code *)puVar1)(uVar3,PTR_s_init_1002e6538);
  (*(code *)puVar1)(param_1,PTR_s_setCanvasViewController__1002e97b8,uVar3);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar3);
  uVar3 = (*(code *)puVar1)(param_1,PTR_s_canvasViewController_1002e6eb0);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*(code *)puVar1)(uVar3,PTR_s_view_1002e6900);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  _objc_msgSend_stret(local_50,param_1,PTR_s_canvasViewFrame_1002e97c0);
  (*(code *)puVar1)(uVar4,PTR_s_setFrame__1002e6500);
  (*(code *)puVar2)(uVar4);
  (*(code *)puVar2)(uVar3);
  puVar2 = PTR_s_view_1002e6900;
  uVar3 = (*(code *)puVar1)(param_1,PTR_s_view_1002e6900);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*(code *)puVar1)(param_1,PTR_s_canvasViewController_1002e6eb0);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)puVar1)(uVar4,puVar2);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)puVar1)(uVar3,PTR_s_addSubview__1002e6920,uVar5);
  puVar1 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar5);
  (*(code *)puVar1)(uVar4);
  (*(code *)puVar1)(uVar3);
  return;
}



// ===== dealloc  @ 0x1000554e3 =====

/* Function Stack Size: 0x10 bytes */

void ContentViewController::dealloc(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  objc_super local_30;
  
  _NSLog(&cf_dealloc___,param_1);
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar2 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_canvasViewController_1002e6eb0);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)puVar1)(uVar2,PTR_s_setDocument__1002e6c30,0);
  (*(code *)PTR__objc_release_10027d590)(uVar2);
  (*(code *)puVar1)(param_1,PTR_s_setCanvasViewController__1002e97b8,0);
  local_30.super_class = (class_t *)PTR_ContentViewController_1002ef918;
  local_30.receiver = param_1;
  _objc_msgSendSuper2(&local_30,PTR_s_dealloc_1002e63c0);
  return;
}



// ===== acceptsFirstResponder  @ 0x100055574 =====

/* Function Stack Size: 0x10 bytes */

char ContentViewController::acceptsFirstResponder(ID param_1,SEL param_2)

{
  return '\x01';
}



// ===== setDocument:  @ 0x10005557f =====

/* Function Stack Size: 0x18 bytes */

void ContentViewController::setDocument_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = _document + param_1;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  _objc_storeWeak(lVar5,param_3);
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_canvasViewController_1002e6eb0);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)puVar1)(uVar4,PTR_s_setDocument__1002e6c30,uVar3);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar3);
  (*(code *)puVar2)(uVar4);
  uVar3 = (*(code *)puVar1)(param_1,PTR_s_document_1002e69e8);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  lVar5 = (*(code *)puVar1)(uVar3,PTR_s_documentType_1002e6f10);
  (*(code *)puVar2)(uVar3);
  if (lVar5 == 1) {
    uVar3 = (*(code *)puVar1)(param_1,PTR_s_canvasViewController_1002e6eb0);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    uVar4 = (*(code *)puVar1)(uVar3,PTR_s_videoPlayer_1002e7f28);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    (*(code *)puVar1)(param_1,PTR_s_createVideoControlsWithPlayer__1002e97c8,uVar4);
    puVar1 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar4);
    (*(code *)puVar1)(uVar3);
    return;
  }
  return;
}



// ===== canvasViewFrame  @ 0x10005569e =====

/* Function Stack Size: 0x10 bytes */

CGRect * ContentViewController::canvasViewFrame
                   (CGRect *__return_storage_ptr__,ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  double dVar3;
  undefined8 uVar4;
  long lVar5;
  ID self;
  ID self_00;
  double dVar6;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  double dStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  double local_48;
  undefined8 uStack_40;
  
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_document_1002e69e8);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  lVar5 = (*(code *)puVar1)(uVar4,PTR_s_documentType_1002e6f10);
  dVar6 = DAT_1001713f0;
  if (lVar5 != 1) {
    dVar6 = 0.0;
  }
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  puVar2 = PTR_s_view_1002e6900;
  uVar4 = (*(code *)puVar1)(param_1,PTR_s_view_1002e6900);
  self = _objc_retainAutoreleasedReturnValue(uVar4);
  if (self == 0) {
    local_48 = 0.0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_58,self,PTR_s_bounds_1002e6938);
  }
  dVar3 = local_48;
  uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,puVar2);
  self_00 = _objc_retainAutoreleasedReturnValue(uVar4);
  if (self_00 == 0) {
    local_68 = 0;
    dStack_60 = 0.0;
    local_78 = 0;
    uStack_70 = 0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_78,self_00,PTR_s_bounds_1002e6938);
  }
  (__return_storage_ptr__->field0_0x0).field0_0x0 = 0.0;
  (__return_storage_ptr__->field0_0x0).field1_0x8 = dVar6;
  (__return_storage_ptr__->field1_0x10).field0_0x0 = dVar3;
  (__return_storage_ptr__->field1_0x10).field1_0x8 = dStack_60 - dVar6;
  puVar1 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(self_00);
  (*(code *)puVar1)(self);
  return __return_storage_ptr__;
}



// ===== desiredContentSize  @ 0x1000557db =====

/* Function Stack Size: 0x10 bytes */

CGSize __thiscall
ContentViewController::desiredContentSize(ContentViewController *this,ID param_1,SEL param_2)

{
  CGSize CVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ID self;
  double dVar8;
  double in_XMM1_Qa;
  double local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  double dStack_40;
  
  puVar2 = PTR__objc_msgSend_10027d560;
  uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(this,PTR_s_document_1002e69e8);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  puVar3 = PTR_s_image_1002e69f0;
  uVar5 = (*(code *)puVar2)(uVar4,PTR_s_image_1002e69f0);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar6 = (*(code *)puVar2)(uVar5,puVar3);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  dVar8 = (double)(*(code *)puVar2)(uVar6,PTR_s_size_1002e66a8);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar6);
  (*(code *)puVar2)(uVar5);
  (*(code *)puVar2)(uVar4);
  puVar3 = PTR_s_videoControlsView_1002e97d0;
  uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(this,PTR_s_videoControlsView_1002e97d0);
  lVar7 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)puVar2)(lVar7);
  local_60 = in_XMM1_Qa;
  if (lVar7 != 0) {
    uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(this,puVar3);
    self = _objc_retainAutoreleasedReturnValue(uVar4);
    if (self == 0) {
      local_48 = 0;
      dStack_40 = 0.0;
      local_58 = 0;
      uStack_50 = 0;
    }
    else {
      _objc_msgSend_stret((undefined *)&local_58,self,PTR_s_frame_1002e64b0);
    }
    local_60 = in_XMM1_Qa + dStack_40;
    (*(code *)PTR__objc_release_10027d590)(self);
  }
  CVar1.field1_0x8 = local_60;
  CVar1.field0_0x0 = dVar8;
  return CVar1;
}



// ===== createVideoControlsWithPlayer:  @ 0x10005590b =====

/* Function Stack Size: 0x18 bytes */

void ContentViewController::createVideoControlsWithPlayer_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ID self;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined local_50 [32];
  
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_canvasViewController_1002e6eb0);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)puVar1)(uVar4,PTR_s_view_1002e6900);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  _objc_msgSend_stret(local_50,param_1,PTR_s_canvasViewFrame_1002e97c0);
  (*(code *)puVar1)(uVar5,PTR_s_setFrame__1002e6500);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar5);
  (*(code *)puVar2)(uVar4);
  uVar4 = (*(code *)puVar1)(PTR_VideoControlsView_1002ef128,PTR_s_alloc_1002e64e8);
  uVar5 = (*(code *)puVar1)(param_1,PTR_s_view_1002e6900);
  self = _objc_retainAutoreleasedReturnValue(uVar5);
  if (self == 0) {
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
  }
  else {
    _objc_msgSend_stret((undefined *)&local_98,self,PTR_s_bounds_1002e6938);
  }
  local_78 = 0;
  uStack_70 = 0;
  local_60 = 0x404f000000000000;
  local_68 = local_88;
  uVar4 = (*(code *)puVar1)(uVar4,PTR_s_initWithFrame_player__1002e86a0,uVar3);
  (*(code *)puVar1)(param_1,PTR_s_setVideoControlsView__1002e97d8,uVar4);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  (*(code *)puVar2)(self);
  uVar4 = (*(code *)puVar1)(param_1,PTR_s_videoControlsView_1002e97d0);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)puVar1)(uVar4,PTR_s_setAutoresizingMask__1002e6fb8,0x22);
  (*(code *)puVar2)(uVar4);
  uVar4 = (*(code *)puVar1)(param_1,PTR_s_view_1002e6900);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)puVar1)(param_1,PTR_s_videoControlsView_1002e97d0);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)puVar1)(uVar4,PTR_s_addSubview__1002e6920,uVar5);
  (*(code *)puVar2)(uVar5);
  (*(code *)puVar2)(uVar4);
  (*(code *)puVar2)(uVar3);
  return;
}



// ===== startDragMode:data:fileURL:  @ 0x100055b34 =====

/* Function Stack Size: 0x28 bytes */

void ContentViewController::startDragMode_data_fileURL_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined local_50 [32];
  
  puVar1 = PTR__objc_retain_10027d598;
  uVar5 = (*(code *)PTR__objc_retain_10027d598)(param_4);
  uVar6 = (*(code *)puVar1)(param_5);
  uVar7 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_dragViewController_1002e6c80);
  lVar8 = _objc_retainAutoreleasedReturnValue(uVar7);
  (*(code *)PTR__objc_release_10027d590)(lVar8);
  if (lVar8 == 0) {
    uVar7 = (*(code *)PTR__objc_msgSend_10027d560)
                      (PTR__OBJC_CLASS___NSUserDefaults_1002eeab0,
                       PTR_s_standardUserDefaults_1002e6570);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    puVar1 = PTR__objc_msgSend_10027d560;
    if (param_3 == 0) {
      (*(code *)PTR__objc_msgSend_10027d560)
                (uVar7,PTR_s_setBool_forKey__1002e68e8,1,PTR_cf_kDragProTipKey_1002f8488);
    }
    else {
      uVar9 = (*(code *)PTR__objc_msgSend_10027d560)
                        (PTR_ProTipController_1002eeb40,PTR_s_sharedController_1002e6378);
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      (*(code *)puVar1)(uVar9,PTR_s_showDragProTip_1002e97e0);
      (*(code *)PTR__objc_release_10027d590)(uVar9);
    }
    puVar1 = PTR__objc_msgSend_10027d560;
    uVar9 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_view_1002e6900);
    uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
    uVar10 = (*(code *)puVar1)(uVar9,PTR_s_window_1002e6878);
    uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
    uVar11 = (*(code *)puVar1)(uVar10,PTR_s_firstResponder_1002e6c98);
    uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
    uVar12 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSTextView_1002ef110,PTR_s_class_1002e6a28);
    cVar4 = (*(code *)puVar1)(uVar11,PTR_s_isKindOfClass__1002e6ef8,uVar12);
    puVar2 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar11);
    (*(code *)puVar2)(uVar10);
    (*(code *)puVar2)(uVar9);
    puVar1 = PTR__objc_msgSend_10027d560;
    if ((cVar4 == '\0') || (param_3 != 0)) {
      uVar9 = (*(code *)PTR__objc_msgSend_10027d560)
                        (PTR_DragViewController_1002ef130,PTR_s_alloc_1002e64e8);
      uVar9 = (*(code *)puVar1)(uVar9,PTR_s_init_1002e6538);
      (*(code *)puVar1)(param_1,PTR_s_setDragViewController__1002e97e8,uVar9);
      (*(code *)puVar2)(uVar9);
      uVar9 = (*(code *)puVar1)(param_1,PTR_s_dragViewController_1002e6c80);
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      uVar10 = (*(code *)puVar1)(param_1,PTR_s_document_1002e69e8);
      uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
      (*(code *)puVar1)(uVar9,PTR_s_setDocument__1002e6c30,uVar10);
      (*(code *)puVar2)(uVar10);
      (*(code *)puVar2)(uVar9);
      puVar3 = PTR_s_dragViewController_1002e6c80;
      uVar9 = (*(code *)puVar1)(param_1,PTR_s_dragViewController_1002e6c80);
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      (*(code *)puVar1)(uVar9,PTR_s_setDelegate__1002e6390,param_1);
      (*(code *)puVar2)(uVar9);
      uVar9 = (*(code *)puVar1)(param_1,puVar3);
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      (*(code *)puVar1)(uVar9,PTR_s_setData__1002e8230,uVar5);
      (*(code *)puVar2)(uVar9);
      uVar9 = (*(code *)puVar1)(param_1,puVar3);
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      (*(code *)puVar1)(uVar9,PTR_s_setFileURL__1002e7430,uVar6);
      (*(code *)puVar2)(uVar9);
      uVar9 = (*(code *)puVar1)(param_1,puVar3);
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      (*(code *)puVar1)(uVar9,PTR_s_setWasInitializedWithAltKey__1002e97f0,param_3 == 0);
      (*(code *)puVar2)(uVar9);
      uVar9 = (*(code *)puVar1)(param_1,puVar3);
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      uVar10 = (*(code *)puVar1)(param_1,PTR_s_view_1002e6900);
      uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
      _objc_msgSend_stret(local_50,param_1,PTR_s_canvasViewFrame_1002e97c0);
      (*(code *)puVar1)(uVar9,PTR_s_addViewToView_withFrame__1002e97f8,uVar10);
      puVar2 = PTR__objc_release_10027d590;
      (*(code *)PTR__objc_release_10027d590)(uVar10);
      (*(code *)puVar2)(uVar9);
      uVar9 = (*(code *)puVar1)(param_1,PTR_s_canvasViewController_1002e6eb0);
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      puVar3 = PTR_s_view_1002e6900;
      uVar10 = (*(code *)puVar1)(uVar9,PTR_s_view_1002e6900);
      uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
      (*(code *)puVar1)(uVar10,PTR_s_removeFromSuperview_1002e7280);
      puVar2 = PTR__objc_release_10027d590;
      (*(code *)PTR__objc_release_10027d590)(uVar10);
      (*(code *)puVar2)(uVar9);
      uVar9 = (*(code *)puVar1)(param_1,puVar3);
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      uVar10 = (*(code *)puVar1)(uVar9,PTR_s_window_1002e6878);
      uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
      uVar11 = (*(code *)puVar1)(param_1,PTR_s_dragViewController_1002e6c80);
      uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
      uVar12 = (*(code *)puVar1)(uVar11,puVar3);
      uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
      (*(code *)puVar1)(uVar10,PTR_s_makeFirstResponder__1002e6e58,uVar12);
      puVar2 = PTR__objc_release_10027d590;
      (*(code *)PTR__objc_release_10027d590)(uVar12);
      (*(code *)puVar2)(uVar11);
      (*(code *)puVar2)(uVar10);
      (*(code *)puVar2)(uVar9);
      uVar9 = (*(code *)puVar1)(param_1,PTR_s_dragViewController_1002e6c80);
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      (*(code *)puVar1)(uVar9,PTR_s_startTransition_1002e9800);
      (*(code *)puVar2)(uVar9);
    }
    (*(code *)PTR__objc_release_10027d590)(uVar7);
  }
  puVar1 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar6);
  (*(code *)puVar1)(uVar5);
  return;
}



// ===== endDragMode:  @ 0x100055fd9 =====

/* Function Stack Size: 0x18 bytes */

void ContentViewController::endDragMode_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar2 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_dragViewController_1002e6c80);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  (*(code *)puVar1)(uVar2,PTR_s_endTransition_1002e8290);
  (*(code *)PTR__objc_release_10027d590)(uVar2);
  return;
}



// ===== dragModeDidEnd  @ 0x100056016 =====

/* Function Stack Size: 0x10 bytes */

void ContentViewController::dragModeDidEnd(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined local_50 [32];
  
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar3 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_canvasViewController_1002e6eb0);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*(code *)puVar1)(uVar3,PTR_s_view_1002e6900);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  _objc_msgSend_stret(local_50,param_1,PTR_s_canvasViewFrame_1002e97c0);
  (*(code *)puVar1)(uVar4,PTR_s_setFrame__1002e6500);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  (*(code *)puVar2)(uVar3);
  puVar2 = PTR_s_view_1002e6900;
  uVar3 = (*(code *)puVar1)(param_1,PTR_s_view_1002e6900);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*(code *)puVar1)(param_1,PTR_s_canvasViewController_1002e6eb0);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)puVar1)(uVar4,puVar2);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)puVar1)(uVar3,PTR_s_addSubview__1002e6920,uVar5);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar5);
  (*(code *)puVar2)(uVar4);
  (*(code *)puVar2)(uVar3);
  uVar3 = (*(code *)puVar1)(param_1,PTR_s_windowController_1002e7378);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*(code *)puVar1)(uVar3,PTR_s_overlayViewController_1002e7080);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)puVar1)(uVar4,PTR_s_view_1002e6900);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  (*(code *)puVar2)(uVar3);
  uVar3 = (*(code *)puVar1)(uVar5,PTR_s_superview_1002e6df8);
  lVar6 = _objc_retainAutoreleasedReturnValue(uVar3);
  if (lVar6 != 0) {
    (*(code *)puVar1)(uVar5,PTR_s_removeFromSuperview_1002e7280);
    (*(code *)puVar1)(lVar6,PTR_s_addSubview__1002e6920,uVar5);
  }
  uVar3 = (*(code *)puVar1)(param_1,PTR_s_view_1002e6900);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*(code *)puVar1)(uVar3,PTR_s_window_1002e6878);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar7 = (*(code *)puVar1)(param_1,PTR_s_canvasViewController_1002e6eb0);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  uVar8 = (*(code *)puVar1)(uVar7,PTR_s_canvasView_1002e6c08);
  uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
  (*(code *)puVar1)(uVar4,PTR_s_makeFirstResponder__1002e6e58,uVar8);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar8);
  (*(code *)puVar2)(uVar7);
  (*(code *)puVar2)(uVar4);
  (*(code *)puVar2)(uVar3);
  uVar3 = (*(code *)puVar1)(param_1,PTR_s_dragViewController_1002e6c80);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*(code *)puVar1)(uVar3,PTR_s_view_1002e6900);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)puVar1)(uVar4,PTR_s_removeFromSuperview_1002e7280);
  (*(code *)puVar2)(uVar4);
  (*(code *)puVar2)(uVar3);
  (*(code *)puVar1)(param_1,PTR_s_setDragViewController__1002e97e8,0);
  (*(code *)puVar2)(lVar6);
  (*(code *)puVar2)(uVar5);
  return;
}



// ===== windowController  @ 0x1000562d6 =====

/* Function Stack Size: 0x10 bytes */

ID ContentViewController::windowController(ID param_1,SEL param_2)

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



// ===== document  @ 0x100056350 =====

/* Function Stack Size: 0x10 bytes */

ID ContentViewController::document(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  
  uVar1 = _objc_loadWeakRetained(param_1 + _document);
  IVar2 = _objc_autoreleaseReturnValue(uVar1);
  return IVar2;
}



// ===== dragViewController  @ 0x100056369 =====

/* Function Stack Size: 0x10 bytes */

ID ContentViewController::dragViewController(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + _dragViewController);
}



// ===== setDragViewController:  @ 0x10005637a =====

/* Function Stack Size: 0x18 bytes */

void ContentViewController::setDragViewController_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = _dragViewController;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = uVar3;
  (*(code *)PTR__objc_release_10027d590)(uVar1);
  return;
}



// ===== canvasViewController  @ 0x1000563a6 =====

/* Function Stack Size: 0x10 bytes */

ID ContentViewController::canvasViewController(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + _canvasViewController);
}



// ===== setCanvasViewController:  @ 0x1000563b7 =====

/* Function Stack Size: 0x18 bytes */

void ContentViewController::setCanvasViewController_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = _canvasViewController;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = uVar3;
  (*(code *)PTR__objc_release_10027d590)(uVar1);
  return;
}



// ===== videoControlsView  @ 0x1000563e3 =====

/* Function Stack Size: 0x10 bytes */

ID ContentViewController::videoControlsView(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + _videoControlsView);
}



// ===== setVideoControlsView:  @ 0x1000563f4 =====

/* Function Stack Size: 0x18 bytes */

void ContentViewController::setVideoControlsView_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = _videoControlsView;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = uVar3;
  (*(code *)PTR__objc_release_10027d590)(uVar1);
  return;
}



// ===== .cxx_destruct  @ 0x100056420 =====

/* Function Stack Size: 0x10 bytes */

void ContentViewController::_cxx_destruct(ID param_1,SEL param_2)

{
  _objc_storeStrong(_videoControlsView + param_1,0);
  _objc_storeStrong(_canvasViewController + param_1,0);
  _objc_storeStrong(_dragViewController + param_1,0);
  _objc_destroyWeak(param_1 + _document);
  return;
}



