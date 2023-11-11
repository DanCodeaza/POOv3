object AlimentarForm3: TAlimentarForm3
  Left = 0
  Top = 0
  Caption = 'AlimentarForm3'
  ClientHeight = 433
  ClientWidth = 622
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Label1: TLabel
    Left = 41
    Top = 26
    Width = 34
    Height = 15
    Caption = 'Label1'
  end
  object Label2: TLabel
    Left = 41
    Top = 169
    Width = 34
    Height = 15
    Caption = 'Label2'
  end
  object Label3: TLabel
    Left = 41
    Top = 301
    Width = 34
    Height = 15
    Caption = 'Label3'
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
    Width = 185
    Height = 105
    Caption = 'RadioGroup1'
    TabOrder = 3
  end
  object RadioGroup2: TRadioGroup
    Left = 41
    Top = 190
    Width = 185
    Height = 105
    Caption = 'RadioGroup2'
    TabOrder = 4
  end
  object RadioGroup3: TRadioGroup
    Left = 41
    Top = 329
    Width = 185
    Height = 105
    Caption = 'RadioGroup3'
    TabOrder = 5
  end
end
