<?php
/**
 * @file
 * The setting form for ealert module.
 */


function ealert_page_form($form, &$form_state)
{

  $form['ealert_settings'] = array(
    '#type' => 'fieldset',
    '#title' => t('E-aler'),
    '#collapsible' => FALSE,
    '#collapsed' => FALSE,
    '#description' => 'Setting header and footer of ealert file',
  );

  $form['ealert_settings']['ealert_header'] = array(
    '#type' => 'textarea',
    '#title' => 'Header of ealert file',
    '#rows' => 20,
    '#default_value' => variable_get('ealert_header'),
    '#description' => 'Header of ealert file.'
  );
  $form['ealert_settings']['ealert_footer'] = array(
    '#type' => 'textarea',
    '#title' => 'Footer of ealert file',
    '#rows' => 20,
    '#default_value' => variable_get('ealert_footer'),
    '#description' => 'Header of ealert file.'
  );
  
  $form['ealert_settings']['ealert_member'] = array(
    '#type' => 'textfield',
    '#title' => 'Member name',
    '#default_value' => variable_get('ealert_member'),
    '#description' => 'The name of member, this helps to create google analytic code.'
  );
  $form['ealert_settings']['ealert_district'] = array(
    '#type' => 'textfield',
    '#title' => 'District',
    '#default_value' => variable_get('ealert_district'),
    '#description' => 'The name of member, this helps to create google analytic code.'
  );
  
  return system_settings_form($form);
}


