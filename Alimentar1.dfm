object AlimentarForm1: TAlimentarForm1
  Left = 0
  Top = 0
  Caption = 'AlimentarForm1'
  ClientHeight = 513
  ClientWidth = 592
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  OnResize = FormResize
  TextHeight = 15
  object Previous: TButton
    Left = 368
    Top = 409
    Width = 75
    Height = 25
    Caption = 'Back'
    TabOrder = 0
    OnClick = PreviousClick
  end
  object Next: TButton
    Left = 456
    Top = 409
    Width = 75
    Height = 25
    Caption = 'Next'
    TabOrder = 1
    OnClick = NextClick
  end
  object Exit: TButton
    Left = 545
    Top = 409
    Width = 75
    Height = 25
    Caption = 'Exit'
    TabOrder = 2
    OnClick = ExitClick
  end
  object RadioGroup1: TRadioGroup
    Tag = 1
    Left = 32
    Top = 41
    Width = 401
    Height = 105
    Caption = 
      'Where do you usually purchase the majority of the food you consu' +
      'me?'
    Items.Strings = (
      'International supermarkets'
      'Stores with products from your native country'
      'Local producers')
    TabOrder = 3
  end
  object RadioGroup2: TRadioGroup
    Tag = 2
    Left = 32
    Top = 172
    Width = 185
    Height = 85
    Caption = 'What is your diet mainly composed of?'
    Items.Strings = (
      'Meat and animal products'
      'Vegetables and cereals')
    TabOrder = 4
  end
  object RadioGroup3: TRadioGroup
    Tag = 3
    Left = 32
    Top = 304
    Width = 313
    Height = 105
    Caption = 'How processed are the foods you consume?'
    Items.Strings = (
      'The food comes directly from the farm.'
      'The food is largely processed.'
      'I only consume processed foods.')
    TabOrder = 5
  end
  object RadioGroup4: TRadioGroup
    Left = 32
    Top = 440
    Width = 297
    Height = 105
    Caption = 'Do you choose to buy in bulk to reduce packaging?'
    Items.Strings = (
      'Always'
      'Sometimes'
      'Rarely or never')
    TabOrder = 6
  end
  object Button1: TButton
    Left = 304
    Top = 488
    Width = 25
    Height = 25
    Caption = '1'
    TabOrder = 7
  end
  object Button2: TButton
    Left = 384
    Top = 488
    Width = 25
    Height = 25
    Caption = '2'
    TabOrder = 8
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 472
    Top = 488
    Width = 25
    Height = 25
    Caption = '3'
    TabOrder = 9
    OnClick = Button3Click
  end
end
