// ===== encodeWithCoder:  @ 0x10006c4ec =====

/* Function Stack Size: 0x18 bytes */

void HistoryItem::encodeWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_s_link_1002e7940;
  uVar4 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar5 = (*(code *)PTR__objc_msgSend_10027d560)(param_1,puVar2);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)puVar1)(param_3,PTR_s_encodeObject_forKey__1002e72f0,uVar5,&cf_link);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar5);
  uVar5 = (*(code *)puVar1)(param_1,PTR_s_serviceType_1002e8870);
  puVar3 = PTR_s_encodeInteger_forKey__1002e9f10;
  (*(code *)puVar1)(param_3,PTR_s_encodeInteger_forKey__1002e9f10,uVar5,&cf_serviceType);
  uVar5 = (*(code *)puVar1)(param_1,PTR_s_linkType_1002e7990);
  (*(code *)puVar1)(param_3,puVar3,uVar5,&cf_linkType);
  uVar5 = (*(code *)puVar1)(param_1,PTR_s_filename_1002e74b8);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)puVar1)(param_3,PTR_s_encodeObject_forKey__1002e72f0,uVar5,&cf_filename);
  (*(code *)puVar2)(uVar4);
  (*(code *)puVar2)(uVar5);
  return;
}



// ===== initWithCoder:  @ 0x10006c5e6 =====

/* Function Stack Size: 0x18 bytes */

ID HistoryItem::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  objc_super local_40;
  
  uVar4 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  local_40.super_class = (class_t *)PTR_HistoryItem_1002ef9e0;
  local_40.receiver = param_1;
  IVar5 = _objc_msgSendSuper2(&local_40,PTR_s_init_1002e6538);
  puVar1 = PTR__objc_msgSend_10027d560;
  if (IVar5 != 0) {
    uVar6 = (*(code *)PTR__objc_msgSend_10027d560)
                      (uVar4,PTR_s_decodeIntegerForKey__1002e9f18,&cf_serviceType);
    *(undefined8 *)(IVar5 + _serviceType) = uVar6;
    puVar3 = PTR_s_decodeObjectForKey__1002e7308;
    uVar6 = (*(code *)puVar1)(uVar4,PTR_s_decodeObjectForKey__1002e7308,&cf_filename);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar6);
    uVar6 = *(undefined8 *)(IVar5 + _filename);
    *(undefined8 *)(IVar5 + _filename) = uVar7;
    puVar2 = PTR__objc_release_10027d590;
    (*(code *)PTR__objc_release_10027d590)(uVar6);
    uVar6 = (*(code *)puVar1)(uVar4,puVar3,&cf_link);
    uVar7 = _objc_retainAutoreleasedReturnValue(uVar6);
    uVar6 = *(undefined8 *)(IVar5 + _link);
    *(undefined8 *)(IVar5 + _link) = uVar7;
    (*(code *)puVar2)(uVar6);
    uVar6 = (*(code *)puVar1)(uVar4,PTR_s_decodeIntegerForKey__1002e9f18,&cf_linkType);
    *(undefined8 *)(IVar5 + _linkType) = uVar6;
  }
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  return IVar5;
}



// ===== filename  @ 0x10006c6f3 =====

/* Function Stack Size: 0x10 bytes */

ID HistoryItem::filename(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + _filename);
}



// ===== setFilename:  @ 0x10006c704 =====

/* Function Stack Size: 0x18 bytes */

void HistoryItem::setFilename_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = _filename;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = uVar3;
  (*(code *)PTR__objc_release_10027d590)(uVar1);
  return;
}



// ===== serviceType  @ 0x10006c730 =====

/* Function Stack Size: 0x10 bytes */

long_long HistoryItem::serviceType(ID param_1,SEL param_2)

{
  return *(long_long *)(param_1 + _serviceType);
}



// ===== setServiceType:  @ 0x10006c741 =====

/* Function Stack Size: 0x18 bytes */

void HistoryItem::setServiceType_(ID param_1,SEL param_2,long_long param_3)

{
  *(long_long *)(param_1 + _serviceType) = param_3;
  return;
}



// ===== linkType  @ 0x10006c752 =====

/* Function Stack Size: 0x10 bytes */

long_long HistoryItem::linkType(ID param_1,SEL param_2)

{
  return *(long_long *)(param_1 + _linkType);
}



// ===== setLinkType:  @ 0x10006c763 =====

/* Function Stack Size: 0x18 bytes */

void HistoryItem::setLinkType_(ID param_1,SEL param_2,long_long param_3)

{
  *(long_long *)(param_1 + _linkType) = param_3;
  return;
}



// ===== link  @ 0x10006c774 =====

/* Function Stack Size: 0x10 bytes */

int HistoryItem::link(char *param_1,char *param_2)

{
  return (int)*(undefined8 *)(param_1 + _link);
}



// ===== setLink:  @ 0x10006c785 =====

/* Function Stack Size: 0x18 bytes */

void HistoryItem::setLink_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = _link;
  uVar3 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = uVar3;
  (*(code *)PTR__objc_release_10027d590)(uVar1);
  return;
}



// ===== .cxx_destruct  @ 0x10006c7b1 =====

/* Function Stack Size: 0x10 bytes */

void HistoryItem::_cxx_destruct(ID param_1,SEL param_2)

{
  _objc_storeStrong(_link + param_1,0);
  _objc_storeStrong(param_1 + _filename,0);
  return;
}



