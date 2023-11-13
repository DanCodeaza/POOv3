object AlimentarForm3: TAlimentarForm3
  Left = 0
  Top = 0
  Caption = 'AlimentarForm3'
  ClientHeight = 582
  ClientWidth = 622
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  OnResize = FormResize
  TextHeight = 15
  object Label1: TLabel
    Left = 41
    Top = 26
    Width = 287
    Height = 15
    Caption = 'How do you describe your coffee or tea consumption?'
  end
  object Label2: TLabel
    Left = 41
    Top = 169
    Width = 341
    Height = 15
    Caption = 'How often do you consume local seasonal fruits and vegetables?'
  end
  object Label3: TLabel
    Left = 41
    Top = 301
    Width = 427
    Height = 15
    Caption = 
      'Would you be more responsible with the planet and CO2 emission a' +
      'fter our quiz?'
  end
  object Label4: TLabel
    Left = 348
    Top = 190
    Width = 124
    Height = 15
    Caption = 'Did you enjoy our quiz?'
  end
  object Previous: TButton
    Left = 377
    Top = 400
    Width = 75
    Height = 25
    Caption = 'Back'
    TabOrder = 0
    OnClick = PreviousClick
  end
  object Next: TButton
    Left = 458
    Top = 400
    Width = 75
    Height = 25
    Caption = 'Next'
    TabOrder = 1
    OnClick = NextClick
  end
  object Exit: TButton
    Left = 539
    Top = 400
    Width = 75
    Height = 25
    Caption = 'Exit'
    TabOrder = 2
    OnClick = ExitClick
  end
  object RadioGroup1: TRadioGroup
    Left = 41
    Top = 47
    Width = 224
    Height = 105
    Items.Strings = (
      'With single-use capsules'
      'I use a reusable filter'
      'I don'#39't consume coffee or tea')
    TabOrder = 3
  end
  object RadioGroup2: TRadioGroup
    Left = 41
    Top = 190
    Width = 224
    Height = 105
    Items.Strings = (
      'Always'
      'Sometimes'
      'Rarely or never')
    TabOrder = 4
  end
  object RadioGroup3: TRadioGroup
    Left = 41
    Top = 329
    Width = 224
    Height = 105
    Items.Strings = (
      'Yes!'#11
      'I consider I am already responsible!')
    TabOrder = 5
  end
  object RadioGroup4: TRadioGroup
    Left = 348
    Top = 211
    Width = 224
    Height = 105
    Items.Strings = (
      'Yes!'
      'First option!')
    TabOrder = 6
  end
end
