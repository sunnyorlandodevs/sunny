// ===== init  @ 0x1000403fa =====

/* Function Stack Size: 0x10 bytes */

ID Document::init(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  objc_super local_48;
  undefined1 local_38 [8];
  
  local_48.super_class = (class_t *)PTR_Document_1002ef8b8;
  local_48.receiver = param_1;
  IVar3 = _objc_msgSendSuper2(&local_48,PTR_s_init_1002e6538);
  puVar1 = PTR__objc_msgSend_10027d560;
  if (IVar3 != 0) {
    uVar4 = (*(code *)PTR__objc_msgSend_10027d560)
                      (PTR__OBJC_CLASS___NSArray_1002eeaa8,PTR_s_arrayWithObjects_count__1002e6568,
                       local_38,0);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar6 = (*(code *)puVar1)(uVar5,PTR_s_mutableCopy_1002e6730);
    uVar4 = *(undefined8 *)(IVar3 + _graphics);
    *(undefined8 *)(IVar3 + _graphics) = uVar6;
    puVar2 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar4);
    (*(code *)puVar2)(uVar5);
    uVar4 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSNotificationCenter_1002eead0,
                              PTR_s_defaultCenter_1002e65d0);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar4 = *(undefined8 *)PTR__NSUndoManagerCheckpointNotification_10027d288;
    uVar6 = (*(code *)puVar1)(IVar3,PTR_s_undoManager_1002e6bc8);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)PTR__objc_msgSend_10027d560)
              (uVar5,PTR_s_addObserver_selector_name_object_1002e69a0,IVar3,
               PTR_s_observeUndoManagerCheckpoint__1002e8e80,uVar4,uVar6);
    (*(code *)puVar2)(uVar6);
    (*(code *)puVar2)(uVar5);
  }
  return IVar3;
}



// ===== dealloc  @ 0x100040505 =====

/* Function Stack Size: 0x10 bytes */

void Document::dealloc(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  objc_super local_38;
  
  _NSLog(&cf_dealloc___,param_1);
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar3 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_graphics_1002e6d18);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)puVar1)(param_1,PTR_s_stopObservingGraphics__1002e8e88,uVar3);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar3);
  uVar3 = (*(code *)puVar1)(param_1,PTR_s_image_1002e69f0);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)puVar1)(param_1,PTR_s_stopObservingImage__1002e8e90,uVar3);
  (*(code *)puVar2)(uVar3);
  uVar3 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSNotificationCenter_1002eead0,
                            PTR_s_defaultCenter_1002e65d0);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)puVar1)(uVar3,PTR_s_removeObserver__1002e69b0,param_1);
  (*(code *)puVar2)(uVar3);
  local_38.super_class = (class_t *)PTR_Document_1002ef8b8;
  local_38.receiver = param_1;
  _objc_msgSendSuper2(&local_38,PTR_s_dealloc_1002e63c0);
  return;
}



// ===== makeWindowControllers  @ 0x1000405f0 =====

/* Function Stack Size: 0x10 bytes */

void Document::makeWindowControllers(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_R14;
  objc_super local_68;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  undefined8 local_38;
  
  puVar2 = PTR_s_documentType_1002e6f10;
  lVar3 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_documentType_1002e6f10);
  if (lVar3 == 0) {
    uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_image_1002e69f0);
    unaff_R14 = _objc_retainAutoreleasedReturnValue(uVar4);
    if (unaff_R14 != 0) {
      bVar1 = true;
      goto LAB_100040641;
    }
LAB_10004068e:
    local_58 = PTR___NSConcreteStackBlock_10027d330;
    local_50 = 0xc2000000;
    local_4c = 0;
    local_48 = FUN_10004078c;
    local_40 = &DAT_10027fbf0;
    local_38 = (*(code *)PTR__objc_retain_10027d598)(param_1);
    _dispatch_async(PTR___dispatch_main_q_10027d378,&local_58);
    (*(code *)PTR__objc_release_10027d590)(local_38);
  }
  else {
    bVar1 = false;
LAB_100040641:
    lVar3 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,puVar2);
    if (lVar3 == 1) {
      uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_video_1002e8078);
      lVar3 = _objc_retainAutoreleasedReturnValue(uVar4);
      (*(code *)PTR__objc_release_10027d590)(lVar3);
      if (bVar1) {
        (*(code *)PTR__objc_release_10027d590)(unaff_R14);
      }
      if (lVar3 == 0) goto LAB_10004068e;
    }
    else if (bVar1) {
      (*(code *)PTR__objc_release_10027d590)(unaff_R14);
    }
    local_68.super_class = (class_t *)PTR_Document_1002ef8b8;
    local_68.receiver = param_1;
    _objc_msgSendSuper2(&local_68,PTR_s_makeWindowControllers_1002e8bc0);
    puVar2 = PTR__objc_msgSend_10027d560;
    uVar4 = (*(code *)PTR__objc_msgSend_10027d560)
                      (PTR__OBJC_CLASS___NSStoryboard_1002eeb58,
                       PTR_s_storyboardWithName_bundle__1002e6928,&cf_Storyboard,0);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar5 = (*(code *)puVar2)(uVar4,PTR_s_instantiateInitialController_1002e8e98);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)puVar2)(param_1,PTR_s_addWindowController__1002e8ea0,uVar5);
    puVar2 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar5);
    (*(code *)puVar2)(uVar4);
  }
  return;
}



// ===== setInputType:  @ 0x1000407c0 =====

/* Function Stack Size: 0x18 bytes */

void Document::setInputType_(ID param_1,SEL param_2,long_long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_s_image_1002e69f0;
  puVar1 = PTR__objc_msgSend_10027d560;
  if (param_3 != 2) {
    if (param_3 != 5) goto LAB_100040889;
    uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_image_1002e69f0);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar5 = (*(code *)puVar1)(uVar4,puVar2);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    cVar3 = (*(code *)puVar1)(uVar5,PTR_s_isWindowSnapshot_1002e8ea8);
    puVar1 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar5);
    (*(code *)puVar1)(uVar4);
    param_3 = 1;
    if (cVar3 == '\0') goto LAB_100040889;
  }
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,puVar2);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)puVar1)(uVar4,PTR_s_setHasShadow__1002e7248,1);
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  param_3 = 2;
LAB_100040889:
  *(long_long *)(param_1 + _inputType) = param_3;
  return;
}



// ===== dataSignalOfType:  @ 0x1000408a3 =====

/* Function Stack Size: 0x18 bytes */

ID Document::dataSignalOfType_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ID IVar16;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  uVar4 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  lVar5 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_documentType_1002e6f10);
  puVar3 = PTR_RACSignal_1002eee10;
  puVar2 = PTR_s_cachedExportData_1002e8eb0;
  puVar1 = PTR__objc_retain_10027d598;
  if (lVar5 == 1) {
    uVar6 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_cachedExportData_1002e8eb0);
    lVar5 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)PTR__objc_release_10027d590)(lVar5);
    puVar3 = PTR_RACSignal_1002eee10;
    puVar1 = PTR__objc_msgSend_10027d560;
    if (lVar5 == 0) {
      uVar6 = (*(code *)PTR__objc_msgSend_10027d560)
                        (PTR_RACSignal_1002eee10,PTR_s_return__1002e82f0,param_1);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar6);
      puVar3 = PTR_s_deliverOnMainThread_1002e8328;
      uVar6 = (*(code *)puVar1)(uVar7,PTR_s_deliverOnMainThread_1002e8328);
      uVar8 = _objc_retainAutoreleasedReturnValue(uVar6);
      uVar6 = (*(code *)puVar1)(uVar8,PTR_s_doNext__1002e7d28,&PTR___NSConcreteGlobalBlock_10027fc70
                               );
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar6);
      puVar2 = PTR_s_flattenMap__1002e7d90;
      uVar6 = (*(code *)puVar1)(uVar9,PTR_s_flattenMap__1002e7d90,
                                &PTR___NSConcreteGlobalBlock_10027fcb0);
      uVar10 = _objc_retainAutoreleasedReturnValue(uVar6);
      uVar6 = (*(code *)puVar1)(PTR_RACScheduler_1002eeec0,PTR_s_scheduler_1002e8308);
      uVar11 = _objc_retainAutoreleasedReturnValue(uVar6);
      uVar6 = (*(code *)puVar1)(uVar10,PTR_s_deliverOn__1002e8310,uVar11);
      uVar12 = _objc_retainAutoreleasedReturnValue(uVar6);
      uVar6 = (*(code *)puVar1)(uVar12,puVar2,&PTR___NSConcreteGlobalBlock_10027fcf0);
      uVar13 = _objc_retainAutoreleasedReturnValue(uVar6);
      uVar6 = (*(code *)puVar1)(uVar13,puVar3);
      uVar14 = _objc_retainAutoreleasedReturnValue(uVar6);
      uVar6 = (*(code *)puVar1)(uVar14,PTR_s_doNext__1002e7d28,
                                &PTR___NSConcreteGlobalBlock_10027fd30);
      uVar15 = _objc_retainAutoreleasedReturnValue(uVar6);
      uVar6 = (*(code *)puVar1)(uVar15,PTR_s_map__1002e7290,&PTR___NSConcreteGlobalBlock_10027fd70);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      puVar1 = PTR__objc_release_10027d590;
      (*(code *)PTR__objc_release_10027d590)(uVar15);
      (*(code *)puVar1)(uVar14);
      (*(code *)puVar1)(uVar13);
      (*(code *)puVar1)(uVar12);
      (*(code *)puVar1)(uVar11);
      (*(code *)puVar1)(uVar10);
      (*(code *)puVar1)(uVar9);
      (*(code *)puVar1)(uVar8);
      (*(code *)puVar1)(uVar7);
    }
    else {
      uVar6 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,puVar2);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar6);
      uVar6 = (*(code *)puVar1)(puVar3,PTR_s_return__1002e82f0,uVar7);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      (*(code *)PTR__objc_release_10027d590)(uVar7);
    }
  }
  else {
    local_60 = PTR___NSConcreteStackBlock_10027d330;
    local_58 = 0xc2000000;
    local_54 = 0;
    local_50 = FUN_100040b6f;
    local_48 = &DAT_10027fc20;
    local_40 = (*(code *)PTR__objc_retain_10027d598)(param_1);
    local_38 = (*(code *)puVar1)(uVar4);
    uVar6 = (*(code *)PTR__objc_msgSend_10027d560)(puVar3,PTR_s_createSignal__1002e7d80,&local_60);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    puVar1 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(local_38);
    (*(code *)puVar1)(local_40);
  }
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  IVar16 = _objc_autoreleaseReturnValue(uVar6);
  return IVar16;
}



// ===== dataOfType:error:  @ 0x1000413c1 =====

/* Function Stack Size: 0x20 bytes */

ID Document::dataOfType_error_(ID param_1,SEL param_2,ID param_3,ID *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ID IVar12;
  long lVar13;
  cfstringStruct *local_68;
  cfstringStruct *pcStack_60;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  lVar13 = *(long *)PTR____stack_chk_guard_10027d368;
  local_38 = lVar13;
  uVar6 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  cVar5 = (*(code *)PTR__objc_msgSend_10027d560)
                    (uVar6,PTR_s_isEqualToString__1002e6410,PTR_cf_se_razola_glui_1002f8a88);
  puVar2 = PTR_s_documentType_1002e6f10;
  puVar1 = PTR__objc_msgSend_10027d560;
  if (cVar5 == '\0') {
    lVar10 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_documentType_1002e6f10);
    if (lVar10 == 0) {
      uVar7 = (*(code *)PTR__objc_msgSend_10027d560)
                        (param_1,PTR_s_annotationImageDataForTypeName_w_1002e8ec0,uVar6,1);
      lVar10 = _objc_retainAutoreleasedReturnValue(uVar7);
      puVar2 = PTR__OBJC_CLASS___NSError_1002eeef8;
      puVar1 = PTR__objc_msgSend_10027d560;
      if (lVar10 != 0) goto LAB_1000417c7;
      uVar7 = *(undefined8 *)PTR__NSCocoaErrorDomain_10027d0a8;
      local_48 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_10027d198;
      local_40 = *(undefined8 *)PTR__NSLocalizedFailureReasonErrorKey_10027d1a0;
      local_68 = &cf_Couldnotsavefile_;
      pcStack_60 = &cf_Anunexpectederroroccured_;
      uVar8 = (*(code *)PTR__objc_msgSend_10027d560)
                        (PTR__OBJC_CLASS___NSDictionary_1002eeb78,
                         PTR_s_dictionaryWithObjects_forKeys_co_1002e6978,&local_68,&local_48,2);
      uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
      uVar7 = (*(code *)puVar1)(puVar2,PTR_s_errorWithDomain_code_userInfo__1002e8548,uVar7,0x200,
                                uVar8);
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      IVar12 = _objc_autorelease(uVar7);
      *param_4 = IVar12;
      puVar1 = PTR__objc_release_10027d590;
      (*(code *)PTR__objc_release_10027d590)(uVar8);
      (*(code *)puVar1)(0);
      lVar13 = *(long *)PTR____stack_chk_guard_10027d368;
    }
    else {
      lVar11 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,puVar2);
      lVar10 = 0;
      if (lVar11 != 1) goto LAB_1000417c7;
      uVar7 = (*(code *)PTR__objc_msgSend_10027d560)
                        (PTR__OBJC_CLASS___NSError_1002eeef8,
                         PTR_s_annotateErrorWithCode_descriptio_1002e8ec8,0x2b,
                         &
                         cf__DocumentdataOfType_error__calledonvideodocumenttype_MustusedataSignalOfType_
                        );
      uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
      IVar12 = _objc_autorelease(uVar7);
      *param_4 = IVar12;
    }
    lVar10 = 0;
  }
  else {
    uVar7 = (*(code *)PTR__objc_msgSend_10027d560)
                      (PTR__OBJC_CLASS___NSMutableDictionary_1002eecd8,PTR_s_dictionary_1002e7328);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
    puVar2 = PTR__OBJC_CLASS___NSKeyedArchiver_1002eed38;
    uVar8 = (*(code *)puVar1)(param_1,PTR_s_graphics_1002e6d18);
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
    uVar9 = (*(code *)puVar1)(puVar2,PTR_s_archivedDataWithRootObject__1002e8010,uVar8);
    uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
    (*(code *)puVar1)(uVar7,PTR_s_setObject_forKey__1002e65b0,uVar9,&cf_graphics);
    puVar2 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar9);
    (*(code *)puVar2)(uVar8);
    puVar2 = PTR__OBJC_CLASS___NSKeyedArchiver_1002eed38;
    uVar8 = (*(code *)puVar1)(param_1,PTR_s_export_1002e6c50);
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
    uVar9 = (*(code *)puVar1)(puVar2,PTR_s_archivedDataWithRootObject__1002e8010,uVar8);
    uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
    (*(code *)puVar1)(uVar7,PTR_s_setObject_forKey__1002e65b0,uVar9,&cf_export);
    puVar2 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar9);
    (*(code *)puVar2)(uVar8);
    puVar2 = PTR__OBJC_CLASS___NSKeyedArchiver_1002eed38;
    uVar8 = (*(code *)puVar1)(param_1,PTR_s_image_1002e69f0);
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
    uVar9 = (*(code *)puVar1)(puVar2,PTR_s_archivedDataWithRootObject__1002e8010,uVar8);
    uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
    puVar4 = PTR_s_setObject_forKey__1002e65b0;
    (*(code *)puVar1)(uVar7,PTR_s_setObject_forKey__1002e65b0,uVar9,&cf_image);
    puVar2 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar9);
    (*(code *)puVar2)(uVar8);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1002eeaa0;
    uVar8 = (*(code *)puVar1)(param_1,PTR_s_inputType_1002e8018);
    puVar3 = PTR_s_numberWithInteger__1002e6560;
    uVar8 = (*(code *)puVar1)(puVar2,PTR_s_numberWithInteger__1002e6560,uVar8);
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
    (*(code *)puVar1)(uVar7,puVar4,uVar8,&cf_inputType);
    puVar2 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar8);
    uVar8 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSNumber_1002eeaa0,puVar3,2);
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
    (*(code *)puVar1)(uVar7,PTR_s_setObject_forKey__1002e65b0,uVar8,&cf_version);
    (*(code *)puVar2)(uVar8);
    local_50 = 0;
    uVar8 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSPropertyListSerialization_1002ef060,
                              PTR_s_dataWithPropertyList_format_opti_1002e8ef0,uVar7,200,0,&local_50
                             );
    lVar10 = _objc_retainAutoreleasedReturnValue(uVar8);
    lVar13 = *(long *)PTR____stack_chk_guard_10027d368;
    (*(code *)puVar2)(uVar7);
  }
LAB_1000417c7:
  (*(code *)PTR__objc_release_10027d590)(uVar6);
  if (lVar13 == local_38) {
    IVar12 = _objc_autoreleaseReturnValue(lVar10);
    return IVar12;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



// ===== annotationImageDataForTypeName:withImage:  @ 0x1000417f2 =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Function Stack Size: 0x1c bytes */

ID Document::annotationImageDataForTypeName_withImage_
             (ID param_1,SEL param_2,ID param_3,char param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ID IVar13;
  undefined *puVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double local_38;
  
  puVar2 = PTR__OBJC_CLASS___NSUserDefaults_1002eeab0;
  puVar14 = PTR_s_standardUserDefaults_1002e6570;
  uVar4 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar5 = (*(code *)PTR__objc_msgSend_10027d560)(puVar2,puVar14);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  cVar3 = (*(code *)puVar1)(uVar5,PTR_s_boolForKey__1002e6680,
                            PTR_cf_kDisableAutoScalingKey_1002f8938);
  (*(code *)PTR__objc_release_10027d590)(uVar5);
  puVar14 = PTR_s_image_1002e69f0;
  if (cVar3 == '\0') {
    local_38 = DAT_100170c08;
  }
  else {
    uVar5 = (*(code *)puVar1)(param_1,PTR_s_image_1002e69f0);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    local_38 = (double)(*(code *)puVar1)(uVar5,PTR_s_PPI_1002e7448);
    local_38 = local_38 / _DAT_100170f98;
    (*(code *)PTR__objc_release_10027d590)(uVar5);
  }
  uVar5 = (*(code *)puVar1)(param_1,puVar14);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  cVar3 = (*(code *)puVar1)(uVar5,PTR_s_hasShadow_1002e8330);
  puVar14 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar5);
  puVar2 = PTR_s_image_1002e69f0;
  dVar15 = DAT_100170fe0 * local_38;
  dVar17 = dVar15;
  dVar19 = dVar15;
  if (cVar3 == '\0') {
    dVar17 = *(double *)(PTR__NSZeroPoint_10027d308 + 8);
    dVar19 = *(double *)PTR__NSZeroPoint_10027d308;
  }
  dVar18 = dVar17;
  uVar5 = (*(code *)puVar1)(param_1,PTR_s_image_1002e69f0);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar6 = (*(code *)puVar1)(uVar5,puVar2);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  dVar16 = (double)(*(code *)puVar1)(uVar6,PTR_s_size_1002e66a8);
  (*(code *)puVar14)(uVar6);
  (*(code *)puVar14)(uVar5);
  uVar5 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSBitmapImageRep_1002eeeb0,PTR_s_alloc_1002e64e8);
  uVar5 = (*(code *)puVar1)(uVar5,PTR_s_initWithBitmapDataPlanes_pixelsW_1002e8ef8,0,
                            (long)(dVar19 + dVar19 + local_38 * dVar16),
                            (long)(dVar17 + dVar17 + local_38 * dVar18),8,4,1,0,
                            *(undefined8 *)PTR__NSCalibratedRGBColorSpace_10027d0a0,0,0);
  (*(code *)puVar1)(PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98,PTR_s_saveGraphicsState_1002e6a70)
  ;
  puVar2 = PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98;
  uVar6 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98,
                            PTR_s_graphicsContextWithBitmapImageRe_1002e8f00,uVar5);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  (*(code *)puVar1)(puVar2,PTR_s_setCurrentContext__1002e8f08,uVar6);
  (*(code *)puVar14)(uVar6);
  if ((local_38 != DAT_100170c08) || (NAN(local_38) || NAN(DAT_100170c08))) {
    uVar6 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSAffineTransform_1002eeb10,
                              PTR_s_transform_1002e66c8);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)puVar1)(local_38,uVar6,PTR_s_scaleBy__1002e66d8);
    (*(code *)puVar1)(uVar6,PTR_s_concat_1002e8f10);
    (*(code *)PTR__objc_release_10027d590)(uVar6);
  }
  puVar14 = PTR_s_image_1002e69f0;
  uVar6 = (*(code *)puVar1)(param_1,PTR_s_image_1002e69f0);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  cVar3 = (*(code *)puVar1)(uVar6,PTR_s_hasShadow_1002e8330);
  (*(code *)PTR__objc_release_10027d590)(uVar6);
  if (cVar3 != '\0') {
    uVar6 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSAffineTransform_1002eeb10,
                              PTR_s_transform_1002e66c8);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)puVar1)(dVar19,dVar17,uVar7,PTR_s_translateXBy_yBy__1002e66d0);
    (*(code *)puVar1)(uVar7,PTR_s_concat_1002e8f10);
    uVar6 = (*(code *)puVar1)(param_1,PTR_s_graphics_1002e6d18);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    puVar14 = PTR__OBJC_CLASS___NSPredicate_1002eebf8;
    uVar8 = (*(code *)puVar1)(PTR_Overlay_1002eeec8,PTR_s_class_1002e6a28);
    uVar8 = (*(code *)puVar1)(puVar14,PTR_s_predicateWithFormat__1002e6d40,&cf_selfisKindOfClass___,
                              uVar8);
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
    uVar9 = (*(code *)puVar1)(uVar6,PTR_s_filteredArrayUsingPredicate__1002e6d48,uVar8);
    uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
    puVar14 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar8);
    (*(code *)puVar14)(uVar6);
    lVar10 = (*(code *)puVar1)(uVar9,PTR_s_count_1002e6488);
    uVar6 = *(undefined8 *)(&DAT_1001712f0 + (ulong)(lVar10 == 0) * 8);
    uVar8 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98,
                              PTR_s_currentContext_1002e6a60);
    uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
    uVar8 = _objc_retainAutorelease(uVar8);
    uVar11 = (*(code *)puVar1)(uVar8,PTR_s_graphicsPort_1002e6a68);
    uVar6 = (*(code *)puVar1)(0,uVar6,PTR__OBJC_CLASS___NSColor_1002eea80,
                              PTR_s_colorWithWhite_alpha__1002e6508);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    uVar6 = _objc_retainAutorelease(uVar6);
    uVar12 = (*(code *)puVar1)(uVar6,PTR_s_CGColor_1002e7270);
    _CGContextSetShadowWithColor(0,0,dVar15,uVar11,uVar12);
    (*(code *)puVar14)(uVar6);
    (*(code *)puVar14)(uVar8);
    (*(code *)puVar14)(uVar9);
    (*(code *)puVar14)(uVar7);
    puVar14 = PTR_s_image_1002e69f0;
  }
  puVar2 = PTR_CanvasView_1002ef068;
  if (param_4 != '\0') {
    uVar6 = (*(code *)puVar1)(param_1,puVar14);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)puVar1)(puVar2,PTR_s_drawImage__1002e8f18,uVar6);
    (*(code *)PTR__objc_release_10027d590)(uVar6);
  }
  uVar6 = (*(code *)puVar1)(param_1,puVar14);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  cVar3 = (*(code *)puVar1)(uVar6,PTR_s_hasShadow_1002e8330);
  (*(code *)PTR__objc_release_10027d590)(uVar6);
  if (cVar3 != '\0') {
    uVar6 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98,
                              PTR_s_currentContext_1002e6a60);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    uVar6 = _objc_retainAutorelease(uVar6);
    uVar7 = (*(code *)puVar1)(uVar6,PTR_s_graphicsPort_1002e6a68);
    _CGContextSetShadowWithColor(0,0,0,uVar7,0);
    (*(code *)PTR__objc_release_10027d590)(uVar6);
  }
  puVar2 = PTR_CanvasView_1002ef068;
  uVar6 = (*(code *)puVar1)(param_1,PTR_s_graphics_1002e6d18);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  puVar14 = PTR_s_image_1002e69f0;
  uVar7 = (*(code *)puVar1)(param_1,PTR_s_image_1002e69f0);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  uVar8 = (*(code *)puVar1)(uVar7,puVar14);
  uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
  (*(code *)puVar1)(uVar8,PTR_s_size_1002e66a8);
  (*(code *)puVar1)(puVar2,PTR_s_drawGraphics_size__1002e8f20,uVar6);
  puVar14 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar8);
  (*(code *)puVar14)(uVar7);
  (*(code *)puVar14)(uVar6);
  (*(code *)puVar1)(PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98,
                    PTR_s_restoreGraphicsState_1002e6ab0);
  uVar6 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSColorSpace_1002ef070,PTR_s_sRGBColorSpace_1002e8f28)
  ;
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  uVar7 = (*(code *)puVar1)(uVar5,PTR_s_bitmapImageRepByConvertingToColo_1002e8f30,uVar6,0);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  (*(code *)puVar14)(uVar5);
  (*(code *)puVar14)(uVar6);
  (*(code *)puVar1)(dVar16,dVar18,uVar7,PTR_s_setSize__1002e8348);
  uVar5 = (*(code *)puVar1)(param_1,PTR_s_imageFileTypeFromUTIString__1002e8f38,uVar4);
  (*(code *)puVar14)(uVar4);
  uVar4 = (*(code *)puVar1)(uVar7,PTR_s_representationUsingType_properti_1002e8f40,uVar5,0);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)puVar14)(uVar7);
  IVar13 = _objc_autoreleaseReturnValue(uVar4);
  return IVar13;
}



// ===== readFromData:ofType:error:  @ 0x100041eb8 =====

/* Function Stack Size: 0x28 bytes */

char Document::readFromData_ofType_error_(ID param_1,SEL param_2,ID param_3,ID param_4,ID *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  uVar5 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  cVar4 = (*(code *)PTR__objc_msgSend_10027d560)
                    (param_4,PTR_s_isEqualToString__1002e6410,PTR_cf_se_razola_glui_1002f8a88);
  if (cVar4 == '\0') {
    cVar4 = '\0';
  }
  else {
    uVar6 = (*(code *)PTR__objc_msgSend_10027d560)
                      (PTR__OBJC_CLASS___NSPropertyListSerialization_1002ef060,
                       PTR_s_propertyListWithData_options_for_1002e8f48,uVar5,0,0,0);
    lVar7 = _objc_retainAutoreleasedReturnValue(uVar6);
    puVar2 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1002eed30;
    puVar1 = PTR__objc_msgSend_10027d560;
    if (lVar7 != 0) {
      uVar6 = (*(code *)PTR__objc_msgSend_10027d560)(lVar7,PTR_s_objectForKey__1002e6550,&cf_image);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      uVar8 = (*(code *)puVar1)(puVar2,PTR_s_unarchiveObjectWithData__1002e6f00,uVar6);
      uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
      (*(code *)puVar1)(param_1,PTR_s_setImage__1002e6448,uVar8);
      puVar2 = PTR__objc_release_10027d590;
      (*(code *)PTR__objc_release_10027d590)(uVar8);
      (*(code *)puVar2)(uVar6);
      puVar3 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1002eed30;
      uVar6 = (*(code *)puVar1)(lVar7,PTR_s_objectForKey__1002e6550,&cf_export);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      uVar8 = (*(code *)puVar1)(puVar3,PTR_s_unarchiveObjectWithData__1002e6f00,uVar6);
      uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
      (*(code *)puVar1)(param_1,PTR_s_setExport__1002e8f50,uVar8);
      (*(code *)puVar2)(uVar8);
      (*(code *)puVar2)(uVar6);
      uVar6 = (*(code *)puVar1)(param_1,PTR_s_export_1002e6c50);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      (*(code *)puVar1)(uVar6,PTR_s_setDocument__1002e6c30,param_1);
      (*(code *)puVar2)(uVar6);
      puVar3 = PTR_s_objectForKey__1002e6550;
      uVar6 = (*(code *)puVar1)(lVar7,PTR_s_objectForKey__1002e6550,&cf_inputType);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      uVar8 = (*(code *)puVar1)(uVar6,PTR_s_integerValue_1002e6740);
      *(undefined8 *)(param_1 + _inputType) = uVar8;
      (*(code *)puVar2)(uVar6);
      puVar2 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1002eed30;
      uVar6 = (*(code *)puVar1)(lVar7,puVar3,&cf_graphics);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      uVar8 = (*(code *)puVar1)(puVar2,PTR_s_unarchiveObjectWithData__1002e6f00,uVar6);
      uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
      puVar2 = PTR__objc_release_10027d590;
      (*(code *)PTR__objc_release_10027d590)(uVar6);
      uVar6 = (*(code *)puVar1)(param_1,PTR_s_undoManager_1002e6bc8);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      (*(code *)puVar1)(uVar6,PTR_s_disableUndoRegistration_1002e8f58);
      (*(code *)puVar2)(uVar6);
      puVar3 = PTR__OBJC_CLASS___NSIndexSet_1002eebc8;
      uVar6 = (*(code *)puVar1)(uVar8,PTR_s_count_1002e6488);
      uVar6 = (*(code *)puVar1)(puVar3,PTR_s_indexSetWithIndexesInRange__1002e8f60,0,uVar6);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      (*(code *)puVar1)(param_1,PTR_s_insertGraphics_atIndexes__1002e8f68,uVar8,uVar6);
      (*(code *)puVar2)(uVar6);
      uVar6 = (*(code *)puVar1)(param_1,PTR_s_undoManager_1002e6bc8);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      (*(code *)puVar1)(uVar6,PTR_s_enableUndoRegistration_1002e8f70);
      puVar1 = PTR__objc_release_10027d590;
      (*(code *)PTR__objc_release_10027d590)(uVar6);
      (*(code *)puVar1)(uVar8);
    }
    (*(code *)PTR__objc_release_10027d590)(lVar7);
    cVar4 = '\x01';
  }
  (*(code *)PTR__objc_release_10027d590)(uVar5);
  return cVar4;
}



// ===== canCloseDocumentWithDelegate:shouldCloseSelector:contextInfo:  @ 0x1000421a2 =====

/* Function Stack Size: 0x28 bytes */

void Document::canCloseDocumentWithDelegate_shouldCloseSelector_contextInfo_
               (ID param_1,SEL param_2,ID param_3,SEL param_4,void *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  undefined8 local_50;
  undefined8 local_48;
  SEL local_40;
  void *local_38;
  
  lVar5 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  cVar4 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_isDocumentEdited_1002e8f78);
  puVar1 = PTR__objc_msgSend_10027d560;
  if (cVar4 != '\0') {
    uVar6 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_windowControllers_1002e8f80);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    lVar7 = (*(code *)puVar1)(uVar6,PTR_s_count_1002e6488);
    (*(code *)PTR__objc_release_10027d590)(uVar6);
    puVar1 = PTR__NSApp_10027d058;
    if (lVar7 != 0) {
      cVar4 = (*(code *)PTR__objc_msgSend_10027d560)
                        (*(undefined8 *)PTR__NSApp_10027d058,PTR_s_isActive_1002e6c60);
      if (cVar4 == '\0') {
        (*(code *)PTR__objc_msgSend_10027d560)
                  (*(undefined8 *)puVar1,PTR_s_activateIgnoringOtherApps__1002e68b8,1);
      }
      puVar1 = PTR__objc_msgSend_10027d560;
      uVar6 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_windowControllers_1002e8f80);
      uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
      uVar8 = (*(code *)puVar1)(uVar6,PTR_s_objectAtIndexedSubscript__1002e6400,0);
      uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
      uVar9 = (*(code *)puVar1)(uVar8,PTR_s_window_1002e6878);
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      (*(code *)puVar1)(uVar9,PTR_s_makeKeyAndOrderFront__1002e68c0,0);
      puVar2 = PTR__objc_release_10027d590;
      (*(code *)PTR__objc_release_10027d590)(uVar9);
      (*(code *)puVar2)(uVar8);
      (*(code *)puVar2)(uVar6);
      puVar1 = PTR__objc_msgSend_10027d560;
      uVar6 = (*(code *)PTR__objc_msgSend_10027d560)
                        (PTR__OBJC_CLASS___NSAlert_1002eec88,PTR_s_alloc_1002e64e8);
      uVar6 = (*(code *)puVar1)(uVar6,PTR_s_init_1002e6538);
      puVar3 = PTR_s_addButtonWithTitle__1002e7178;
      uVar8 = (*(code *)puVar1)(uVar6,PTR_s_addButtonWithTitle__1002e7178,&cf_Discard);
      uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
      (*(code *)puVar2)(uVar8);
      uVar8 = (*(code *)puVar1)(uVar6,puVar3,&cf_Cancel);
      uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
      (*(code *)puVar2)(uVar8);
      (*(code *)puVar1)(uVar6,PTR_s_setMessageText__1002e7180,&cf_Discardimage_);
      (*(code *)puVar1)(uVar6,PTR_s_setInformativeText__1002e7188,&cf_Yourchangeswillbelost_);
      (*(code *)puVar1)(uVar6,PTR_s_setAlertStyle__1002e7190,1);
      uVar8 = (*(code *)puVar1)(param_1,PTR_s_windowControllers_1002e8f80);
      uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
      uVar9 = (*(code *)puVar1)(uVar8,PTR_s_objectAtIndexedSubscript__1002e6400,0);
      uVar9 = _objc_retainAutoreleasedReturnValue(uVar9);
      uVar10 = (*(code *)puVar1)(uVar9,PTR_s_window_1002e6878);
      uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
      puVar1 = PTR__objc_retain_10027d598;
      local_70 = PTR___NSConcreteStackBlock_10027d330;
      local_68 = 0xc2000000;
      local_64 = 0;
      local_60 = FUN_1000424d5;
      local_58 = &DAT_10027fd90;
      local_50 = (*(code *)PTR__objc_retain_10027d598)(lVar5);
      local_40 = param_4;
      local_48 = (*(code *)puVar1)(param_1);
      local_38 = param_5;
      (*(code *)PTR__objc_msgSend_10027d560)
                (uVar6,PTR_s_beginSheetModalForWindow_complet_1002e7e10,uVar10,&local_70);
      puVar1 = PTR__objc_release_10027d590;
      (*(code *)PTR__objc_release_10027d590)(uVar10);
      (*(code *)puVar1)(uVar9);
      (*(code *)puVar1)(uVar8);
      (*(code *)puVar1)(local_48);
      (*(code *)puVar1)(local_50);
      (*(code *)puVar1)(uVar6);
      goto LAB_1000424bd;
    }
  }
  if ((lVar5 != 0) && (param_4 != (SEL)0x0)) {
    pcVar11 = (code *)(*(code *)PTR__objc_msgSend_10027d560)
                                (lVar5,PTR_s_methodForSelector__1002e6e88,param_4);
    if (pcVar11 != (code *)0x0) {
      (*pcVar11)(lVar5,param_4,param_1,1,param_5);
    }
  }
LAB_1000424bd:
  (*(code *)PTR__objc_release_10027d590)(lVar5);
  return;
}



// ===== displayName  @ 0x10004258a =====

/* Function Stack Size: 0x10 bytes */

ID Document::displayName(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID IVar4;
  
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar2 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_export_1002e6c50);
  uVar2 = _objc_retainAutoreleasedReturnValue(uVar2);
  uVar3 = (*(code *)puVar1)(uVar2,PTR_s_filename_1002e74b8);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  (*(code *)PTR__objc_release_10027d590)(uVar2);
  IVar4 = _objc_autoreleaseReturnValue(uVar3);
  return IVar4;
}



// ===== readVideoFromURL:inputType:  @ 0x1000425da =====

/* Function Stack Size: 0x20 bytes */

void Document::readVideoFromURL_inputType_(ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 in_R8;
  undefined8 in_R9;
  code *pcVar11;
  long local_38;
  
  uVar5 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  *(undefined8 *)(param_1 + _documentType) = 1;
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar6 = (*(code *)PTR__objc_msgSend_10027d560)(PTR_Video_1002ef078,PTR_s_alloc_1002e64e8);
  uVar7 = (*(code *)puVar1)(PTR__OBJC_CLASS___AVAsset_1002ef080,PTR_s_assetWithURL__1002e8f88,uVar5)
  ;
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  uVar8 = (*(code *)puVar1)(uVar6,PTR_s_initWithAsset__1002e8f90,uVar7);
  uVar6 = *(undefined8 *)(param_1 + _video);
  *(undefined8 *)(param_1 + _video) = uVar8;
  pcVar11 = (code *)PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar6);
  (*pcVar11)(uVar7);
  uVar6 = (*(code *)puVar1)(PTR__OBJC_CLASS___AVAssetImageGenerator_1002ef088,PTR_s_alloc_1002e64e8)
  ;
  uVar7 = (*(code *)puVar1)(param_1,PTR_s_video_1002e8078);
  uVar7 = _objc_retainAutoreleasedReturnValue(uVar7);
  uVar8 = (*(code *)puVar1)(uVar7,PTR_s_asset_1002e8080);
  uVar8 = _objc_retainAutoreleasedReturnValue(uVar8);
  uVar6 = (*(code *)puVar1)(uVar6,PTR_s_initWithAsset__1002e8f90,uVar8);
  (*pcVar11)(uVar8);
  (*pcVar11)(uVar7);
  local_38 = 0;
  uVar7 = (*(code *)puVar1)(uVar6,PTR_s_copyCGImageAtTime_actualTime_err_1002e8f98,0,&local_38,in_R8
                            ,in_R9,*(undefined8 *)PTR__kCMTimeZero_10027d458,
                            *(undefined8 *)(PTR__kCMTimeZero_10027d458 + 8),
                            *(undefined8 *)(PTR__kCMTimeZero_10027d458 + 0x10));
  lVar4 = local_38;
  puVar3 = PTR_Image_1002ef090;
  if (local_38 == 0) {
    (*(code *)PTR__objc_retain_10027d598)(0);
    puVar2 = PTR_s_alloc_1002e64e8;
    uVar8 = (*(code *)puVar1)(puVar3,PTR_s_alloc_1002e64e8);
    uVar9 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSImage_1002eea70,puVar2);
    uVar10 = (*(code *)puVar1)(param_1,PTR_s_video_1002e8078);
    uVar10 = _objc_retainAutoreleasedReturnValue(uVar10);
    (*(code *)puVar1)(uVar10,PTR_s_displaySize_1002e6800);
    uVar7 = (*(code *)puVar1)(uVar9,PTR_s_initWithCGImage_size__1002e8fa0,uVar7);
    uVar8 = (*(code *)puVar1)(uVar8,PTR_s_initWithImage__1002e8fa8,uVar7);
    pcVar11 = (code *)PTR__objc_release_10027d590;
    (*(code *)puVar1)(param_1,PTR_s_setImage__1002e6448,uVar8);
    (*pcVar11)(uVar8);
    (*pcVar11)(uVar7);
    (*pcVar11)(uVar10);
  }
  else {
    uVar7 = (*(code *)PTR__objc_retain_10027d598)(local_38);
    _NSLog(&cf_Errorcreatingthumbnail__,uVar7);
  }
  (*(code *)PTR__objc_msgSend_10027d560)
            (param_1,PTR_s_commonSetupForURL_inputType__1002e8fb0,uVar5,param_4);
  (*pcVar11)(lVar4);
  (*pcVar11)(uVar6);
  (*pcVar11)(uVar5);
  return;
}



// ===== readImageFromURL:inputType:  @ 0x100042859 =====

/* Function Stack Size: 0x20 bytes */

void Document::readImageFromURL_inputType_(ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *(undefined8 *)(param_1 + _documentType) = 0;
  puVar3 = PTR_Image_1002ef090;
  puVar2 = PTR_s_alloc_1002e64e8;
  uVar4 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar5 = (*(code *)PTR__objc_msgSend_10027d560)(puVar3,puVar2);
  uVar6 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSImage_1002eea70,puVar2);
  uVar6 = (*(code *)puVar1)(uVar6,PTR_s_initWithContentsOfURL__1002e8fb8,uVar4);
  uVar5 = (*(code *)puVar1)(uVar5,PTR_s_initWithImage__1002e8fa8,uVar6);
  (*(code *)puVar1)(param_1,PTR_s_setImage__1002e6448,uVar5);
  puVar1 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar5);
  (*(code *)puVar1)(uVar6);
  (*(code *)PTR__objc_msgSend_10027d560)
            (param_1,PTR_s_commonSetupForURL_inputType__1002e8fb0,uVar4,param_4);
  (*(code *)puVar1)(uVar4);
  return;
}



// ===== commonSetupForURL:inputType:  @ 0x10004292f =====

/* Function Stack Size: 0x20 bytes */

void Document::commonSetupForURL_inputType_(ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_Export_1002eee30;
  puVar1 = PTR_s_alloc_1002e64e8;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(puVar2,puVar1);
  uVar5 = (*(code *)PTR__objc_msgSend_10027d560)(param_3,PTR_s_lastPathComponent_1002e75f8);
  (*(code *)PTR__objc_release_10027d590)(uVar3);
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar5 = (*(code *)PTR__objc_msgSend_10027d560)
                    (uVar3,PTR_s_stringByDeletingPathExtension_1002e8fc0);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar4 = (*(code *)PTR__objc_msgSend_10027d560)
                    (uVar4,PTR_s_initWithDocument_filename__1002e8fc8,param_1,uVar5);
  (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_setExport__1002e8f50,uVar4);
  puVar1 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  (*(code *)puVar1)(uVar5);
  (*(code *)puVar1)(uVar3);
  (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_setInputType__1002e8020,param_4);
  return;
}



// ===== imageFileTypeFromUTIString:  @ 0x100042a19 =====

/* Function Stack Size: 0x18 bytes */

unsigned_long_long Document::imageFileTypeFromUTIString_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  char cVar2;
  undefined8 uVar3;
  unsigned_long_long uVar4;
  
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  puVar1 = PTR_s_isEqualToString__1002e6410;
  cVar2 = (*(code *)PTR__objc_msgSend_10027d560)
                    (uVar3,PTR_s_isEqualToString__1002e6410,*(undefined8 *)PTR__kUTTypePNG_10027d510
                    );
  uVar4 = 4;
  if (cVar2 == '\0') {
    cVar2 = (*(code *)PTR__objc_msgSend_10027d560)
                      (uVar3,puVar1,*(undefined8 *)PTR__kUTTypeJPEG_10027d508);
    uVar4 = (ulong)(cVar2 == '\0') + 3;
  }
  (*(code *)PTR__objc_release_10027d590)(uVar3);
  return uVar4;
}



// ===== setImage:  @ 0x100042a8d =====

/* Function Stack Size: 0x18 bytes */

void Document::setImage_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR__objc_retain_10027d598;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar1 = *(undefined8 *)(param_1 + _image);
  *(undefined8 *)(param_1 + _image) = uVar3;
  uVar3 = (*(code *)puVar2)(uVar3);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar1);
  (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_startObservingImage__1002e8fd0,uVar3);
  (*(code *)puVar2)(uVar3);
  return;
}



// ===== mutableGraphics  @ 0x100042e5e =====

/* Function Stack Size: 0x10 bytes */

ID Document::mutableGraphics(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = (*(code *)PTR__objc_msgSend_10027d560)
                    (param_1,PTR_s_mutableArrayValueForKey__1002e8fe8,&cf_graphics);
  return IVar1;
}



// ===== insertGraphics:atIndexes:  @ 0x100042e77 =====

/* Function Stack Size: 0x20 bytes */

void Document::insertGraphics_atIndexes_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR__objc_retain_10027d598;
  uVar4 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar6 = *(undefined8 *)(param_1 + _graphics);
  uVar5 = (*(code *)puVar1)(param_4);
  puVar1 = PTR__objc_msgSend_10027d560;
  (*(code *)PTR__objc_msgSend_10027d560)(uVar6,PTR_s_insertObjects_atIndexes__1002e8ff0,uVar4,uVar5)
  ;
  uVar6 = (*(code *)puVar1)(param_1,PTR_s_undoManager_1002e6bc8);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  (*(code *)puVar1)(uVar6,PTR_s_registerUndoWithTarget_selector__1002e9000,param_1,
                    PTR_s_removeGraphicsAtIndexes__1002e8ff8,param_4);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar5);
  uVar5 = (*(code *)puVar1)(param_1,PTR_s_undoManager_1002e6bc8);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  cVar3 = (*(code *)puVar1)(uVar5,PTR_s_isUndoRegistrationEnabled_1002e9008);
  (*(code *)puVar2)(uVar5);
  puVar1 = PTR__objc_msgSend_10027d560;
  if (cVar3 != '\0') {
    uVar5 = (*(code *)PTR__objc_msgSend_10027d560)
                      (param_1,PTR_s_undoGroupInsertedGraphics_1002e9010);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)puVar1)(uVar5,PTR_s_addObjectsFromArray__1002e6f30,uVar4);
    (*(code *)PTR__objc_release_10027d590)(uVar5);
  }
  (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_startObservingGraphics__1002e9018,uVar4);
  puVar1 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar6);
  (*(code *)puVar1)(uVar4);
  return;
}



// ===== removeGraphicsAtIndexes:  @ 0x100042fc3 =====

/* Function Stack Size: 0x18 bytes */

void Document::removeGraphicsAtIndexes_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_s_objectsAtIndexes__1002e6d28;
  uVar4 = *(undefined8 *)(param_1 + _graphics);
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(uVar4,puVar2,uVar3);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)puVar1)(param_1,PTR_s_stopObservingGraphics__1002e8e88,uVar4);
  uVar5 = (*(code *)puVar1)(param_1,PTR_s_undoManager_1002e6bc8);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar6 = (*(code *)puVar1)(uVar5,PTR_s_prepareWithInvocationTarget__1002e9020,param_1);
  uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
  (*(code *)PTR__objc_msgSend_10027d560)
            (uVar6,PTR_s_insertGraphics_atIndexes__1002e8f68,uVar4,uVar3);
  puVar1 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar6);
  (*(code *)puVar1)(uVar5);
  (*(code *)PTR__objc_msgSend_10027d560)
            (*(undefined8 *)(param_1 + _graphics),PTR_s_removeObjectsAtIndexes__1002e9028,uVar3);
  (*(code *)puVar1)(uVar3);
  (*(code *)puVar1)(uVar4);
  return;
}



// ===== observeUndoManagerCheckpoint:  @ 0x1000430b6 =====

/* Function Stack Size: 0x18 bytes */

void Document::observeUndoManagerCheckpoint_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__objc_msgSend_10027d560;
  (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_setUndoGroupOldPropertiesPerGrap_1002e9030,0)
  ;
  (*(code *)puVar1)(param_1,PTR_s_setUndoGroupInsertedGraphics__1002e9038,0);
  (*(code *)puVar1)(param_1,PTR_s_setCachedExportData__1002e8ee8,0);
  return;
}



// ===== undoGroupInsertedGraphics  @ 0x1000430f7 =====

/* Function Stack Size: 0x10 bytes */

ID Document::undoGroupInsertedGraphics(ID param_1,SEL param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID IVar5;
  long lVar6;
  
  lVar2 = _undoGroupInsertedGraphics;
  puVar1 = PTR__objc_msgSend_10027d560;
  lVar6 = *(long *)(param_1 + _undoGroupInsertedGraphics);
  if (lVar6 == 0) {
    uVar3 = (*(code *)PTR__objc_msgSend_10027d560)
                      (PTR__OBJC_CLASS___NSMutableSet_1002eed08,PTR_s_alloc_1002e64e8);
    uVar4 = (*(code *)puVar1)(uVar3,PTR_s_init_1002e6538);
    uVar3 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = uVar4;
    (*(code *)PTR__objc_release_10027d590)(uVar3);
    lVar6 = *(long *)(param_1 + lVar2);
  }
  IVar5 = _objc_retainAutoreleaseReturnValue(lVar6);
  return IVar5;
}



// ===== setGraphicProperties:  @ 0x10004315a =====

/* Function Stack Size: 0x18 bytes */

void Document::setGraphicProperties_(ID param_1,SEL param_2,ID param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  uVar4 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  puVar2 = PTR__objc_msgSend_10027d560;
  uVar5 = (*(code *)PTR__objc_msgSend_10027d560)(uVar4,PTR_s_keyEnumerator_1002e9040);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  uVar6 = (*(code *)puVar2)(uVar5,PTR_s_nextObject_1002e8588);
  lVar7 = _objc_retainAutoreleasedReturnValue(uVar6);
  puVar3 = PTR__objc_release_10027d590;
  pcVar1 = (code *)PTR__objc_release_10027d590;
  while (PTR__objc_release_10027d590 = pcVar1, lVar7 != 0) {
    uVar6 = (*(code *)puVar2)(uVar4,PTR_s_objectForKey__1002e6550,lVar7);
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)puVar2)(lVar7,PTR_s_setValuesForKeysWithDictionary__1002e9048,uVar6);
    (*(code *)puVar3)(uVar6);
    uVar6 = (*(code *)puVar2)(uVar5,PTR_s_nextObject_1002e8588);
    lVar8 = _objc_retainAutoreleasedReturnValue(uVar6);
    (*(code *)puVar3)(lVar7);
    lVar7 = lVar8;
    pcVar1 = (code *)PTR__objc_release_10027d590;
  }
  (*pcVar1)(uVar5);
  (*pcVar1)(uVar4);
  return;
}



// ===== startObservingGraphics:  @ 0x10004323a =====

/* Function Stack Size: 0x18 bytes */

void Document::startObservingGraphics_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong local_1d0;
  undefined8 local_1b8;
  long lStack_1b0;
  long *local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  long lStack_170;
  long *local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined1 local_138 [128];
  undefined1 local_b8 [128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10027d368;
  uVar5 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = (long *)0x0;
  uStack_160 = 0;
  local_178 = 0;
  lStack_170 = 0;
  local_1d0 = (*(code *)PTR__objc_msgSend_10027d560)
                        (uVar5,PTR_s_countByEnumeratingWithState_obje_1002e63e0,&local_178,local_b8,
                         0x10);
  if (local_1d0 != 0) {
    lVar1 = *local_168;
    do {
      uVar9 = 0;
      do {
        if (*local_168 != lVar1) {
          _objc_enumerationMutation(uVar5);
        }
        puVar4 = PTR__objc_msgSend_10027d560;
        uVar2 = *(undefined8 *)(lStack_170 + uVar9 * 8);
        uVar6 = (*(code *)PTR__objc_msgSend_10027d560)
                          (uVar2,PTR_s_keysForValuesToObserveForUndo_1002e9050);
        uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
        local_188 = 0;
        uStack_180 = 0;
        local_198 = 0;
        uStack_190 = 0;
        local_1a8 = (long *)0x0;
        uStack_1a0 = 0;
        local_1b8 = 0;
        lStack_1b0 = 0;
        uVar7 = (*(code *)puVar4)(uVar6,PTR_s_countByEnumeratingWithState_obje_1002e63e0,&local_1b8,
                                  local_138,0x10);
        if (uVar7 != 0) {
          lVar3 = *local_1a8;
          do {
            uVar8 = 0;
            do {
              if (*local_1a8 != lVar3) {
                _objc_enumerationMutation(uVar6);
              }
              (*(code *)PTR__objc_msgSend_10027d560)
                        (uVar2,PTR_s_addObserver_forKeyPath_options_c_1002e63b0,param_1,
                         *(undefined8 *)(lStack_1b0 + uVar8 * 8),3,PTR_LOOP_1002f8aa0);
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar7);
            uVar7 = (*(code *)PTR__objc_msgSend_10027d560)
                              (uVar6,PTR_s_countByEnumeratingWithState_obje_1002e63e0,&local_1b8,
                               local_138,0x10);
          } while (uVar7 != 0);
        }
        (*(code *)PTR__objc_msgSend_10027d560)
                  (uVar2,PTR_s_addObserver_forKeyPath_options_c_1002e63b0,param_1,
                   PTR_cf_keysForValuesToObserveForUndo_1002f8ae8,3,PTR_LOOP_1002f8aa8);
        (*(code *)PTR__objc_release_10027d590)(uVar6);
        uVar9 = uVar9 + 1;
      } while (uVar9 < local_1d0);
      local_1d0 = (*(code *)PTR__objc_msgSend_10027d560)
                            (uVar5,PTR_s_countByEnumeratingWithState_obje_1002e63e0,&local_178,
                             local_b8,0x10);
    } while (local_1d0 != 0);
  }
  (*(code *)PTR__objc_release_10027d590)(uVar5);
  if (*(long *)PTR____stack_chk_guard_10027d368 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



// ===== stopObservingGraphics:  @ 0x1000434b3 =====

/* Function Stack Size: 0x18 bytes */

void Document::stopObservingGraphics_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong local_1d0;
  undefined8 local_1b8;
  long lStack_1b0;
  long *local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  long lStack_170;
  long *local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined1 local_138 [128];
  undefined1 local_b8 [128];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10027d368;
  uVar5 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  local_148 = 0;
  uStack_140 = 0;
  local_158 = 0;
  uStack_150 = 0;
  local_168 = (long *)0x0;
  uStack_160 = 0;
  local_178 = 0;
  lStack_170 = 0;
  local_1d0 = (*(code *)PTR__objc_msgSend_10027d560)
                        (uVar5,PTR_s_countByEnumeratingWithState_obje_1002e63e0,&local_178,local_b8,
                         0x10);
  if (local_1d0 != 0) {
    lVar1 = *local_168;
    do {
      uVar9 = 0;
      do {
        if (*local_168 != lVar1) {
          _objc_enumerationMutation(uVar5);
        }
        puVar4 = PTR__objc_msgSend_10027d560;
        uVar2 = *(undefined8 *)(lStack_170 + uVar9 * 8);
        uVar6 = (*(code *)PTR__objc_msgSend_10027d560)
                          (uVar2,PTR_s_keysForValuesToObserveForUndo_1002e9050);
        uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
        local_188 = 0;
        uStack_180 = 0;
        local_198 = 0;
        uStack_190 = 0;
        local_1a8 = (long *)0x0;
        uStack_1a0 = 0;
        local_1b8 = 0;
        lStack_1b0 = 0;
        uVar7 = (*(code *)puVar4)(uVar6,PTR_s_countByEnumeratingWithState_obje_1002e63e0,&local_1b8,
                                  local_138,0x10);
        if (uVar7 != 0) {
          lVar3 = *local_1a8;
          do {
            uVar8 = 0;
            do {
              if (*local_1a8 != lVar3) {
                _objc_enumerationMutation(uVar6);
              }
              (*(code *)PTR__objc_msgSend_10027d560)
                        (uVar2,PTR_s_removeObserver_forKeyPath__1002e9058,param_1,
                         *(undefined8 *)(lStack_1b0 + uVar8 * 8));
              uVar8 = uVar8 + 1;
            } while (uVar8 < uVar7);
            uVar7 = (*(code *)PTR__objc_msgSend_10027d560)
                              (uVar6,PTR_s_countByEnumeratingWithState_obje_1002e63e0,&local_1b8,
                               local_138,0x10);
          } while (uVar7 != 0);
        }
        (*(code *)PTR__objc_msgSend_10027d560)
                  (uVar2,PTR_s_removeObserver_forKeyPath__1002e9058,param_1,
                   PTR_cf_keysForValuesToObserveForUndo_1002f8ae8);
        (*(code *)PTR__objc_release_10027d590)(uVar6);
        uVar9 = uVar9 + 1;
      } while (uVar9 < local_1d0);
      local_1d0 = (*(code *)PTR__objc_msgSend_10027d560)
                            (uVar5,PTR_s_countByEnumeratingWithState_obje_1002e63e0,&local_178,
                             local_b8,0x10);
    } while (local_1d0 != 0);
  }
  (*(code *)PTR__objc_release_10027d590)(uVar5);
  if (*(long *)PTR____stack_chk_guard_10027d368 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



// ===== startObservingImage:  @ 0x10004370e =====

/* Function Stack Size: 0x18 bytes */

void Document::startObservingImage_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_LOOP_1002f8ab0;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  puVar1 = PTR__objc_msgSend_10027d560;
  (*(code *)PTR__objc_msgSend_10027d560)
            (param_3,PTR_s_addObserver_forKeyPath_options_c_1002e63b0,param_1,&cf_image,3,puVar2);
  (*(code *)puVar1)(param_3,PTR_s_addObserver_forKeyPath_options_c_1002e63b0,param_1,&cf_scale,3,
                    PTR_LOOP_1002f8ab0);
  (*(code *)PTR__objc_release_10027d590)(uVar3);
  return;
}



// ===== stopObservingImage:  @ 0x100043797 =====

/* Function Stack Size: 0x18 bytes */

void Document::stopObservingImage_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_LOOP_1002f8ab0;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  puVar1 = PTR__objc_msgSend_10027d560;
  (*(code *)PTR__objc_msgSend_10027d560)
            (param_3,PTR_s_removeObserver_forKeyPath_contex_1002e63b8,param_1,&cf_image,puVar2);
  (*(code *)puVar1)(param_3,PTR_s_removeObserver_forKeyPath_contex_1002e63b8,param_1,&cf_scale,
                    PTR_LOOP_1002f8ab0);
  (*(code *)PTR__objc_release_10027d590)(uVar3);
  return;
}



// ===== observeValueForKeyPath:ofObject:change:context:  @ 0x100043814 =====

/* Function Stack Size: 0x30 bytes */

void Document::observeValueForKeyPath_ofObject_change_context_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,void *param_6)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  objc_super local_40;
  
  puVar2 = PTR__objc_retain_10027d598;
  uVar6 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar7 = (*(code *)puVar2)(param_4);
  uVar8 = (*(code *)puVar2)(param_5);
  puVar4 = PTR_s_isEqualTo__1002e7028;
  puVar3 = PTR_s_objectForKey__1002e6550;
  puVar2 = PTR__objc_msgSend_10027d560;
  if (PTR_LOOP_1002f8aa8 == param_6) {
    uVar11 = (*(code *)PTR__objc_msgSend_10027d560)
                       (uVar8,PTR_s_objectForKey__1002e6550,
                        *(undefined8 *)PTR__NSKeyValueChangeOldKey_10027d180);
    uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
    uVar12 = (*(code *)puVar2)(uVar8,puVar3,*(undefined8 *)PTR__NSKeyValueChangeNewKey_10027d170);
    uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
    uVar13 = (*(code *)puVar2)(uVar11,PTR_s_objectEnumerator_1002e8580);
    uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
    uVar14 = (*(code *)puVar2)(uVar13,PTR_s_nextObject_1002e8588);
    lVar9 = _objc_retainAutoreleasedReturnValue(uVar14);
    puVar3 = PTR_s_containsObject__1002e6ea0;
    while (lVar9 != 0) {
      cVar5 = (*(code *)PTR__objc_msgSend_10027d560)(uVar12,puVar3,lVar9);
      if (cVar5 == '\0') {
        (*(code *)PTR__objc_msgSend_10027d560)
                  (uVar7,PTR_s_removeObserver_forKeyPath__1002e9058,param_1,lVar9);
      }
      uVar14 = (*(code *)PTR__objc_msgSend_10027d560)(uVar13,PTR_s_nextObject_1002e8588);
      lVar10 = _objc_retainAutoreleasedReturnValue(uVar14);
      (*(code *)PTR__objc_release_10027d590)(lVar9);
      lVar9 = lVar10;
    }
    uVar14 = (*(code *)puVar2)(uVar12,PTR_s_objectEnumerator_1002e8580);
    uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
    uVar15 = (*(code *)puVar2)(uVar14,PTR_s_nextObject_1002e8588);
    lVar9 = _objc_retainAutoreleasedReturnValue(uVar15);
    (*(code *)PTR__objc_release_10027d590)(0);
    puVar2 = PTR_s_containsObject__1002e6ea0;
    pcVar1 = (code *)PTR__objc_release_10027d590;
    while (PTR__objc_release_10027d590 = pcVar1, lVar9 != 0) {
      cVar5 = (*(code *)PTR__objc_msgSend_10027d560)(uVar11,puVar2,lVar9);
      if (cVar5 == '\0') {
        (*(code *)PTR__objc_msgSend_10027d560)
                  (uVar7,PTR_s_addObserver_forKeyPath_options_c_1002e63b0,param_1,lVar9,3,
                   PTR_LOOP_1002f8aa0);
      }
      uVar15 = (*(code *)PTR__objc_msgSend_10027d560)(uVar14,PTR_s_nextObject_1002e8588);
      lVar10 = _objc_retainAutoreleasedReturnValue(uVar15);
      (*(code *)PTR__objc_release_10027d590)(lVar9);
      lVar9 = lVar10;
      pcVar1 = (code *)PTR__objc_release_10027d590;
    }
    (*pcVar1)(uVar14);
    (*pcVar1)(uVar13);
    (*pcVar1)(uVar12);
    (*pcVar1)(uVar11);
  }
  else if (PTR_LOOP_1002f8aa0 == param_6) {
    uVar11 = (*(code *)PTR__objc_retain_10027d598)(uVar7);
    puVar2 = PTR__objc_msgSend_10027d560;
    uVar12 = (*(code *)PTR__objc_msgSend_10027d560)
                       (param_1,PTR_s_undoGroupInsertedGraphics_1002e9010);
    uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
    cVar5 = (*(code *)puVar2)(uVar12,PTR_s_containsObject__1002e6ea0,uVar11);
    (*(code *)PTR__objc_release_10027d590)(uVar12);
    puVar3 = PTR_s_objectForKey__1002e6550;
    if (cVar5 == '\0') {
      uVar12 = (*(code *)puVar2)(uVar8,PTR_s_objectForKey__1002e6550,
                                 *(undefined8 *)PTR__NSKeyValueChangeNewKey_10027d170);
      uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
      uVar13 = (*(code *)puVar2)(uVar8,puVar3,*(undefined8 *)PTR__NSKeyValueChangeOldKey_10027d180);
      uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
      cVar5 = (*(code *)puVar2)(uVar12,PTR_s_isEqualTo__1002e7028,uVar13);
      if (cVar5 == '\0') {
        uVar14 = (*(code *)PTR__objc_msgSend_10027d560)
                           (param_1,PTR_s_undoGroupOldPropertiesPerGraphic_1002e9060);
        lVar9 = _objc_retainAutoreleasedReturnValue(uVar14);
        (*(code *)PTR__objc_release_10027d590)(lVar9);
        if (lVar9 == 0) {
          uVar14 = (*(code *)puVar2)(PTR__OBJC_CLASS___NSMapTable_1002ef098,PTR_s_alloc_1002e64e8);
          uVar14 = (*(code *)puVar2)(uVar14,PTR_s_init_1002e6538);
          (*(code *)puVar2)(param_1,PTR_s_setUndoGroupOldPropertiesPerGrap_1002e9030,uVar14);
          (*(code *)PTR__objc_release_10027d590)(uVar14);
          uVar14 = (*(code *)puVar2)(param_1,PTR_s_undoManager_1002e6bc8);
          uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
          uVar15 = (*(code *)puVar2)(param_1,PTR_s_undoGroupOldPropertiesPerGraphic_1002e9060);
          uVar15 = _objc_retainAutoreleasedReturnValue(uVar15);
          (*(code *)puVar2)(uVar14,PTR_s_registerUndoWithTarget_selector__1002e9000,param_1,
                            PTR_s_setGraphicProperties__1002e9068,uVar15);
          puVar3 = PTR__objc_release_10027d590;
          (*(code *)PTR__objc_release_10027d590)(uVar15);
          (*(code *)puVar3)(uVar14);
        }
        uVar14 = (*(code *)puVar2)(param_1,PTR_s_undoGroupOldPropertiesPerGraphic_1002e9060);
        uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
        uVar15 = (*(code *)puVar2)(uVar14,PTR_s_objectForKey__1002e6550,uVar11);
        lVar9 = _objc_retainAutoreleasedReturnValue(uVar15);
        (*(code *)PTR__objc_release_10027d590)(uVar14);
        if (lVar9 == 0) {
          uVar14 = (*(code *)puVar2)(PTR__OBJC_CLASS___NSMutableDictionary_1002eecd8,
                                     PTR_s_alloc_1002e64e8);
          lVar9 = (*(code *)puVar2)(uVar14,PTR_s_init_1002e6538);
          uVar14 = (*(code *)puVar2)(param_1,PTR_s_undoGroupOldPropertiesPerGraphic_1002e9060);
          uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
          (*(code *)puVar2)(uVar14,PTR_s_setObject_forKey__1002e65b0,lVar9,uVar11);
          (*(code *)PTR__objc_release_10027d590)(uVar14);
        }
        uVar14 = (*(code *)PTR__objc_msgSend_10027d560)(lVar9,PTR_s_objectForKey__1002e6550,uVar6);
        lVar10 = _objc_retainAutoreleasedReturnValue(uVar14);
        (*(code *)PTR__objc_release_10027d590)(lVar10);
        if (lVar10 == 0) {
          (*(code *)PTR__objc_msgSend_10027d560)
                    (lVar9,PTR_s_setObject_forKey__1002e65b0,uVar13,uVar6);
        }
        (*(code *)PTR__objc_release_10027d590)(lVar9);
      }
      puVar2 = PTR__objc_release_10027d590;
      (*(code *)PTR__objc_release_10027d590)(uVar13);
      (*(code *)puVar2)(uVar12);
    }
    (*(code *)PTR__objc_release_10027d590)(uVar11);
  }
  else if (PTR_LOOP_1002f8ab0 == param_6) {
    cVar5 = (*(code *)PTR__objc_msgSend_10027d560)(uVar6,PTR_s_isEqualTo__1002e7028,&cf_image);
    puVar2 = PTR__objc_msgSend_10027d560;
    if (cVar5 == '\0') {
      cVar5 = (*(code *)PTR__objc_msgSend_10027d560)(uVar6,puVar4,&cf_scale);
      puVar2 = PTR__objc_msgSend_10027d560;
      if (cVar5 != '\0') {
        uVar11 = (*(code *)PTR__objc_msgSend_10027d560)
                           (uVar8,PTR_s_objectForKey__1002e6550,
                            *(undefined8 *)PTR__NSKeyValueChangeOldKey_10027d180);
        uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
        uVar12 = (*(code *)puVar2)(param_1,PTR_s_undoManager_1002e6bc8);
        uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
        uVar13 = (*(code *)puVar2)(param_1,PTR_s_image_1002e69f0);
        uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
        (*(code *)puVar2)(uVar12,PTR_s_registerUndoWithTarget_selector__1002e9000,uVar13,
                          PTR_s_setScale__1002e6990,uVar11);
        puVar2 = PTR__objc_release_10027d590;
        (*(code *)PTR__objc_release_10027d590)(uVar13);
        (*(code *)puVar2)(uVar12);
        (*(code *)puVar2)(uVar11);
      }
    }
    else {
      uVar11 = (*(code *)PTR__objc_msgSend_10027d560)
                         (uVar8,PTR_s_objectForKey__1002e6550,
                          *(undefined8 *)PTR__NSKeyValueChangeOldKey_10027d180);
      uVar11 = _objc_retainAutoreleasedReturnValue(uVar11);
      uVar12 = (*(code *)puVar2)(param_1,PTR_s_undoManager_1002e6bc8);
      uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
      uVar13 = (*(code *)puVar2)(param_1,PTR_s_image_1002e69f0);
      uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
      (*(code *)PTR__objc_msgSend_10027d560)
                (uVar12,PTR_s_registerUndoWithTarget_selector__1002e9000,uVar13,
                 PTR_s_setImage__1002e6448,uVar11);
      puVar2 = PTR__objc_release_10027d590;
      (*(code *)PTR__objc_release_10027d590)(uVar13);
      (*(code *)puVar2)(uVar12);
      puVar2 = PTR__objc_msgSend_10027d560;
      uVar12 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_undoManager_1002e6bc8);
      uVar12 = _objc_retainAutoreleasedReturnValue(uVar12);
      puVar3 = PTR_s_image_1002e69f0;
      uVar13 = (*(code *)puVar2)(param_1,PTR_s_image_1002e69f0);
      uVar13 = _objc_retainAutoreleasedReturnValue(uVar13);
      puVar4 = PTR__OBJC_CLASS___NSNumber_1002eeaa0;
      uVar14 = (*(code *)puVar2)(param_1,puVar3);
      uVar14 = _objc_retainAutoreleasedReturnValue(uVar14);
      cVar5 = (*(code *)puVar2)(uVar14,PTR_s_hasShadow_1002e8330);
      uVar15 = (*(code *)puVar2)(puVar4,PTR_s_numberWithBool__1002e71e8,(int)cVar5);
      uVar15 = _objc_retainAutoreleasedReturnValue(uVar15);
      (*(code *)puVar2)(uVar12,PTR_s_registerUndoWithTarget_selector__1002e9000,uVar13,
                        PTR_s_setHasShadow__1002e7248,uVar15);
      puVar2 = PTR__objc_release_10027d590;
      (*(code *)PTR__objc_release_10027d590)(uVar15);
      (*(code *)puVar2)(uVar14);
      (*(code *)puVar2)(uVar13);
      (*(code *)puVar2)(uVar12);
      (*(code *)puVar2)(uVar11);
    }
  }
  else {
    local_40.super_class = (class_t *)PTR_Document_1002ef8b8;
    local_40.receiver = param_1;
    _objc_msgSendSuper2(&local_40,PTR_s_observeValueForKeyPath_ofObject__1002e63d0,uVar6,uVar7,uVar8
                        ,param_6);
  }
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar8);
  (*(code *)puVar2)(uVar7);
  (*(code *)puVar2)(uVar6);
  return;
}



// ===== autosave  @ 0x100043f6d =====

/* Function Stack Size: 0x10 bytes */

void Document::autosave(ID param_1,SEL param_2)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_documentType_1002e6f10);
  puVar1 = PTR__objc_msgSend_10027d560;
  if (lVar2 == 1) {
    return;
  }
  (*(code *)PTR__objc_msgSend_10027d560)(param_1,PTR_s_updateChangeCount__1002e7cd8,0);
  (*(code *)puVar1)(param_1,PTR_s_autosaveDocumentWithDelegate_did_1002e9078,param_1,
                    PTR_s_document_didAutosave_contextInfo_1002e9070,0);
  return;
}



// ===== document:didAutosave:contextInfo:  @ 0x100043fc5 =====

/* Function Stack Size: 0x24 bytes */

void Document::document_didAutosave_contextInfo_
               (ID param_1,SEL param_2,ID param_3,char param_4,void *param_5)

{
  if (param_4 != '\0') {
    (*(code *)PTR__objc_msgSend_10027d560)(param_3,PTR_s_updateChangeCount__1002e7cd8,2);
    return;
  }
  return;
}



// ===== documentType  @ 0x100043fe8 =====

/* Function Stack Size: 0x10 bytes */

unsigned_long_long Document::documentType(ID param_1,SEL param_2)

{
  return *(unsigned_long_long *)(param_1 + _documentType);
}



// ===== graphics  @ 0x100043ff9 =====

/* Function Stack Size: 0x10 bytes */

ID Document::graphics(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + _graphics);
}



// ===== image  @ 0x10004400a =====

/* Function Stack Size: 0x10 bytes */

ID Document::image(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + _image);
}



// ===== video  @ 0x10004401b =====

/* Function Stack Size: 0x10 bytes */

ID Document::video(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + _video);
}



// ===== export  @ 0x10004402c =====

/* Function Stack Size: 0x10 bytes */

ID Document::export(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + _export);
}



// ===== setExport:  @ 0x10004403d =====

/* Function Stack Size: 0x18 bytes */

void Document::setExport_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = _export;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = uVar3;
  (*(code *)PTR__objc_release_10027d590)(uVar1);
  return;
}



// ===== inputType  @ 0x100044069 =====

/* Function Stack Size: 0x10 bytes */

long_long Document::inputType(ID param_1,SEL param_2)

{
  return *(long_long *)(param_1 + _inputType);
}



// ===== cachedExportData  @ 0x10004407a =====

/* Function Stack Size: 0x10 bytes */

ID Document::cachedExportData(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + _cachedExportData);
}



// ===== setCachedExportData:  @ 0x10004408b =====

/* Function Stack Size: 0x18 bytes */

void Document::setCachedExportData_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = _cachedExportData;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = uVar3;
  (*(code *)PTR__objc_release_10027d590)(uVar1);
  return;
}



// ===== isExporting  @ 0x1000440b7 =====

/* Function Stack Size: 0x10 bytes */

char Document::isExporting(ID param_1,SEL param_2)

{
  return *(char *)(param_1 + _isExporting);
}



// ===== setIsExporting:  @ 0x1000440c8 =====

/* Function Stack Size: 0x14 bytes */

void Document::setIsExporting_(ID param_1,SEL param_2,char param_3)

{
  *(char *)(param_1 + _isExporting) = param_3;
  return;
}



// ===== setUndoGroupInsertedGraphics:  @ 0x1000440d8 =====

/* Function Stack Size: 0x18 bytes */

void Document::setUndoGroupInsertedGraphics_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = _undoGroupInsertedGraphics;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = uVar3;
  (*(code *)PTR__objc_release_10027d590)(uVar1);
  return;
}



// ===== undoGroupOldPropertiesPerGraphic  @ 0x100044104 =====

/* Function Stack Size: 0x10 bytes */

ID Document::undoGroupOldPropertiesPerGraphic(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + _undoGroupOldPropertiesPerGraphic);
}



// ===== setUndoGroupOldPropertiesPerGraphic:  @ 0x100044115 =====

/* Function Stack Size: 0x18 bytes */

void Document::setUndoGroupOldPropertiesPerGraphic_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = _undoGroupOldPropertiesPerGraphic;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = uVar3;
  (*(code *)PTR__objc_release_10027d590)(uVar1);
  return;
}



// ===== .cxx_destruct  @ 0x100044141 =====

/* Function Stack Size: 0x10 bytes */

void Document::_cxx_destruct(ID param_1,SEL param_2)

{
  _objc_storeStrong(_undoGroupOldPropertiesPerGraphic + param_1,0);
  _objc_storeStrong(_undoGroupInsertedGraphics + param_1,0);
  _objc_storeStrong(_cachedExportData + param_1,0);
  _objc_storeStrong(_export + param_1,0);
  _objc_storeStrong(_video + param_1,0);
  _objc_storeStrong(_image + param_1,0);
  _objc_storeStrong(param_1 + _graphics,0);
  return;
}



