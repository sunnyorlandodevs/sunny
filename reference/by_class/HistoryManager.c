// ===== init  @ 0x100023c92 =====

/* Function Stack Size: 0x10 bytes */

ID HistoryManager::init(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  objc_super local_38;
  undefined1 local_28 [8];
  
  local_38.super_class = (class_t *)PTR_HistoryManager_1002ef7f8;
  local_38.receiver = param_1;
  IVar2 = _objc_msgSendSuper2(&local_38,PTR_s_init_1002e6538);
  puVar1 = PTR__objc_msgSend_10027d560;
  if (IVar2 != 0) {
    uVar3 = (*(code *)PTR__objc_msgSend_10027d560)
                      (PTR__OBJC_CLASS___NSUserDefaults_1002eeab0,
                       PTR_s_standardUserDefaults_1002e6570);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
    uVar4 = (*(code *)puVar1)(uVar3,PTR_s_objectForKey__1002e6550,PTR_cf_recentUploads_1002f8850);
    lVar5 = _objc_retainAutoreleasedReturnValue(uVar4);
    (*(code *)PTR__objc_release_10027d590)(uVar3);
    if (lVar5 == 0) {
      uVar3 = (*(code *)PTR__objc_msgSend_10027d560)
                        (PTR__OBJC_CLASS___NSArray_1002eeaa8,PTR_s_arrayWithObjects_count__1002e6568
                         ,local_28,0);
    }
    else {
      uVar3 = (*(code *)PTR__objc_msgSend_10027d560)
                        (PTR__OBJC_CLASS___NSKeyedUnarchiver_1002eed30,
                         PTR_s_unarchiveObjectWithData__1002e6f00,lVar5);
    }
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar3);
    uVar3 = *(undefined8 *)(IVar2 + _recentUploads);
    *(undefined8 *)(IVar2 + _recentUploads) = uVar4;
    (*(code *)PTR__objc_release_10027d590)(uVar3);
    (*(code *)PTR__objc_release_10027d590)(lVar5);
  }
  return IVar2;
}



// ===== addItem:  @ 0x100023d81 =====

/* Function Stack Size: 0x18 bytes */

void HistoryManager::addItem_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *pcVar7;
  
  uVar6 = *(undefined8 *)(param_1 + _recentUploads);
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  pcVar7 = (code *)PTR__objc_msgSend_10027d560;
  uVar4 = (*(code *)PTR__objc_msgSend_10027d560)(uVar6,PTR_s_mutableCopy_1002e6730);
  (*pcVar7)(uVar4,PTR_s_insertObject_atIndex__1002e8008,param_3,0);
  (*(code *)PTR__objc_release_10027d590)(uVar3);
  uVar5 = (*pcVar7)(uVar4,PTR_s_count_1002e6488);
  uVar6 = uVar4;
  if (5 < uVar5) {
    uVar6 = (*pcVar7)(uVar4,PTR_s_subarrayWithRange__1002e7790,0,5);
    uVar3 = _objc_retainAutoreleasedReturnValue(uVar6);
    uVar6 = (*pcVar7)(uVar3,PTR_s_mutableCopy_1002e6730);
    puVar1 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar4);
    (*(code *)puVar1)(uVar3);
    pcVar7 = (code *)PTR__objc_msgSend_10027d560;
  }
  (*pcVar7)(param_1,PTR_s_willChangeValueForKey__1002e7cc8,PTR_cf_recentUploads_1002f8850);
  lVar2 = _recentUploads;
  uVar3 = *(undefined8 *)(param_1 + _recentUploads);
  *(undefined8 *)(param_1 + _recentUploads) = uVar6;
  uVar6 = (*(code *)PTR__objc_retain_10027d598)(uVar6);
  (*(code *)PTR__objc_release_10027d590)(uVar3);
  (*pcVar7)(param_1,PTR_s_didChangeValueForKey__1002e7cd0,PTR_cf_recentUploads_1002f8850);
  uVar3 = (*pcVar7)(PTR__OBJC_CLASS___NSUserDefaults_1002eeab0,PTR_s_standardUserDefaults_1002e6570)
  ;
  uVar3 = _objc_retainAutoreleasedReturnValue(uVar3);
  uVar4 = (*pcVar7)(PTR__OBJC_CLASS___NSKeyedArchiver_1002eed38,
                    PTR_s_archivedDataWithRootObject__1002e8010,*(undefined8 *)(param_1 + lVar2));
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*pcVar7)(uVar3,PTR_s_setObject_forKey__1002e65b0,uVar4,PTR_cf_recentUploads_1002f8850);
  (*(code *)PTR__objc_release_10027d590)(uVar6);
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  (*(code *)PTR__objc_release_10027d590)(uVar3);
  return;
}



// ===== clearHistory  @ 0x100023f0a =====

/* Function Stack Size: 0x10 bytes */

void HistoryManager::clearHistory(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 local_38 [8];
  
  puVar1 = PTR__objc_msgSend_10027d560;
  (*(code *)PTR__objc_msgSend_10027d560)
            (param_1,PTR_s_willChangeValueForKey__1002e7cc8,PTR_cf_recentUploads_1002f8850);
  uVar4 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSArray_1002eeaa8,
                            PTR_s_arrayWithObjects_count__1002e6568,local_38,0);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar4);
  lVar3 = _recentUploads;
  uVar4 = *(undefined8 *)(param_1 + _recentUploads);
  *(undefined8 *)(param_1 + _recentUploads) = uVar5;
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  (*(code *)puVar1)(param_1,PTR_s_didChangeValueForKey__1002e7cd0,PTR_cf_recentUploads_1002f8850);
  uVar4 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSUserDefaults_1002eeab0,
                            PTR_s_standardUserDefaults_1002e6570);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  uVar5 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSKeyedArchiver_1002eed38,
                            PTR_s_archivedDataWithRootObject__1002e8010,
                            *(undefined8 *)(param_1 + lVar3));
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)puVar1)(uVar4,PTR_s_setObject_forKey__1002e65b0,uVar5,PTR_cf_recentUploads_1002f8850);
  (*(code *)puVar2)(uVar5);
  (*(code *)puVar2)(uVar4);
  return;
}



// ===== recentUploads  @ 0x100023fed =====

/* Function Stack Size: 0x10 bytes */

ID HistoryManager::recentUploads(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + _recentUploads);
}



// ===== .cxx_destruct  @ 0x100023ffe =====

/* Function Stack Size: 0x10 bytes */

void HistoryManager::_cxx_destruct(ID param_1,SEL param_2)

{
  _objc_storeStrong(param_1 + _recentUploads,0);
  return;
}



