// ===== isPro  @ 0x100060eec =====

/* Function Stack Size: 0x10 bytes */

char PurchaseManager::isPro(ID param_1,SEL param_2)

{
  return '\x01';
}



// ===== upgradeToProWithTransaction:  @ 0x10006157e =====

/* Function Stack Size: 0x18 bytes */

void PurchaseManager::upgradeToProWithTransaction_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar4 = (*(code *)PTR__objc_retain_10027d598)(param_3);
  puVar3 = PTR_s_standardUserDefaults_1002e6570;
  puVar1 = PTR__objc_msgSend_10027d560;
  uVar5 = (*(code *)PTR__objc_msgSend_10027d560)
                    (PTR__OBJC_CLASS___NSUserDefaults_1002eeab0,PTR_s_standardUserDefaults_1002e6570
                    );
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)puVar1)(uVar5,PTR_s_setBool_forKey__1002e68e8,1,&cf_com_driftt_mac_annotate_pro);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar5);
  uVar5 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSUserDefaults_1002eeab0,puVar3);
  uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
  (*(code *)puVar1)(uVar5,PTR_s_synchronize_1002e8a28);
  (*(code *)puVar2)(uVar5);
  if (lVar4 != 0) {
    uVar5 = (*(code *)puVar1)(PTR__OBJC_CLASS___SKPaymentQueue_1002ef1b0,
                              PTR_s_defaultQueue_1002e9b08);
    uVar5 = _objc_retainAutoreleasedReturnValue(uVar5);
    (*(code *)puVar1)(uVar5,PTR_s_finishTransaction__1002e9b48,lVar4);
    (*(code *)PTR__objc_release_10027d590)(uVar5);
  }
  (*(code *)PTR__objc_release_10027d590)(lVar4);
  return;
}



// ===== drawContentsInView:isBeingCreated:isBeingEdited:  @ 0x10005ab0d =====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Function Stack Size: 0x20 bytes */

void Shape::drawContentsInView_isBeingCreated_isBeingEdited_
               (ID param_1,SEL param_2,ID param_3,char param_4,char param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  double dVar7;
  undefined4 local_48;
  undefined4 local_38;
  
  puVar1 = PTR__objc_msgSend_10027d560;
  (*(code *)PTR__objc_msgSend_10027d560)
            (PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98,PTR_s_saveGraphicsState_1002e6a70);
  dVar7 = (double)(*(code *)puVar1)(PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98,
                                    PTR_s_currentContextScaleFactor_1002e86c8);
  cVar3 = (*(code *)puVar1)(param_1,PTR_s_hasShadow_1002e8330);
  if (cVar3 != '\0') {
    uVar4 = (*(code *)puVar1)(PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98,
                              PTR_s_currentContext_1002e6a60);
    uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
    uVar4 = _objc_retainAutorelease(uVar4);
    uVar5 = (*(code *)puVar1)(uVar4,PTR_s_graphicsPort_1002e6a68);
    local_48 = (uint)_DAT_100170c70 ^ SUB84(dVar7,0);
    uVar6 = _CGColorCreateGenericRGB(0,0,0,DAT_100170dc0);
    local_38 = SUB84(dVar7 + dVar7,0);
    _CGContextSetShadowWithColor(0,local_48,local_38,uVar5,uVar6);
    (*(code *)PTR__objc_release_10027d590)(uVar4);
  }
  uVar4 = (*(code *)puVar1)(param_1,PTR_s_color_1002e84d0);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)puVar1)(uVar4,PTR_s_set_1002e6510);
  puVar2 = PTR__objc_release_10027d590;
  (*(code *)PTR__objc_release_10027d590)(uVar4);
  uVar4 = (*(code *)puVar1)(param_1,PTR_s_drawingPath_1002e84e0);
  uVar4 = _objc_retainAutoreleasedReturnValue(uVar4);
  (*(code *)puVar1)(uVar4,PTR_s_stroke_1002e6a90);
  (*(code *)puVar2)(uVar4);
  (*(code *)puVar1)(PTR__OBJC_CLASS___NSGraphicsContext_1002eeb98,
                    PTR_s_restoreGraphicsState_1002e6ab0);
  return;
}



