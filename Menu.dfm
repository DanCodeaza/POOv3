object MenuForm: TMenuForm
  Left = 0
  Top = 0
  Caption = 'Menu'
  ClientHeight = 398
  ClientWidth = 526
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Label1: TLabel
    Left = 24
    Top = 32
    Width = 1280
    Height = 15
    Caption = 
      'Elevated CO2 levels contribute to global warming, resulting in m' +
      'ore frequent and severe climate events such as hurricanes, heatw' +
      'aves, and extreme weather conditions. This poses a direct threat' +
      ' to ecosystems, wildlife, and human communities.'
    WordWrap = True
  end
  object ACIndividual: TButton
    Left = 64
    Top = 128
    Width = 201
    Height = 25
    Caption = 'Calculate your individul footprint'
    TabOrder = 0
  end
  object ACHouse: TButton
    Left = 64
    Top = 176
    Width = 201
    Height = 25
    Caption = 'Calculate your house footprint'
    TabOrder = 1
  end
  object ACAlimentar: TButton
    Left = 64
    Top = 224
    Width = 201
    Height = 25
    Caption = 'Calculate your feed footprint'
    TabOrder = 2
    OnClick = ACAlimentarClick
  end
  object TellMeMore: TButton
    Left = 40
    Top = 280
    Width = 217
    Height = 25
    Caption = 'More information about CO2 influence'
    TabOrder = 3
    OnClick = TellMeMoreClick
  end
  object Exit: TButton
    Left = 40
    Top = 328
    Width = 75
    Height = 25
    Caption = 'Exit'
    TabOrder = 4
    OnClick = ExitClick
  end
end
