object AlimentarForm2: TAlimentarForm2
  Left = 0
  Top = 0
  Caption = 'AlimentarForm2'
  ClientHeight = 545
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
    Left = 48
    Top = 40
    Width = 141
    Height = 15
    Caption = 'How often do you eat out?'
  end
  object Label2: TLabel
    Left = 48
    Top = 172
    Width = 159
    Height = 15
    Caption = 'Do you usually cook at home?'
  end
  object Label3: TLabel
    Left = 48
    Top = 296
    Width = 204
    Height = 15
    Caption = 'Do you frequently consume fast-food?'
  end
  object Label4: TLabel
    Left = 41
    Top = 428
    Width = 188
    Height = 15
    Caption = 'Do you consume organic products?'
  end
  object Previous: TButton
    Left = 375
    Top = 400
    Width = 75
    Height = 25
    Caption = 'Back'
    TabOrder = 0
    OnClick = PreviousClick
  end
  object Next: TButton
    Left = 456
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
    Top = 61
    Width = 248
    Height = 105
    Items.Strings = (
      'Rarely, only on special occasions.'
      'Weekly.'
      'At least once every two days.')
    TabOrder = 3
  end
  object RadioGroup2: TRadioGroup
    Left = 41
    Top = 193
    Width = 248
    Height = 105
    Items.Strings = (
      'Yes, everything I eat is cooked at home.'
      'I prefer to use catering services.')
    TabOrder = 4
  end
  object RadioGroup3: TRadioGroup
    Left = 41
    Top = 317
    Width = 248
    Height = 105
    Items.Strings = (
      'Yes, frequently'
      'Occasionally'
      'No, never')
    TabOrder = 5
  end
  object RadioGroup4: TRadioGroup
    Left = 41
    Top = 449
    Width = 185
    Height = 105
    Items.Strings = (
      'Yes, exclusively'
      'Yes, sometimes'
      'No, never')
    TabOrder = 6
  end
end
