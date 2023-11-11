object AlimentarForm1: TAlimentarForm1
  Left = 0
  Top = 0
  Caption = 'AlimentarForm1'
  ClientHeight = 442
  ClientWidth = 628
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Label1: TLabel
    Left = 32
    Top = 24
    Width = 374
    Height = 15
    Caption = 
      'Where do you usually purchase the majority of the food you consu' +
      'me?'
  end
  object Label2: TLabel
    Left = 32
    Top = 152
    Width = 206
    Height = 15
    Caption = 'What is your diet mainly composed of?'
  end
  object Label3: TLabel
    Left = 32
    Top = 283
    Width = 267
    Height = 15
    Caption = 'Label3How processed are the foods you consume?'
  end
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
    Width = 281
    Height = 105
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
    Items.Strings = (
      'Meat and animal products'
      'Vegetables and cereals')
    TabOrder = 4
  end
  object RadioGroup3: TRadioGroup
    Tag = 3
    Left = 32
    Top = 304
    Width = 249
    Height = 105
    Items.Strings = (
      'The food comes directly from the farm.'
      'The food is largely processed.'
      'I only consume processed foods.')
    TabOrder = 5
  end
end
