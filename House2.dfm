object HouseForm2: THouseForm2
  Left = 0
  Top = 0
  Caption = 'HouseForm2'
  ClientHeight = 683
  ClientWidth = 1085
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  OnResize = FormResize
  TextHeight = 15
  object Previous: TButton
    Left = 752
    Top = 504
    Width = 75
    Height = 25
    Caption = 'Back'
    TabOrder = 0
    OnClick = PreviousClick
  end
  object Next: TButton
    Left = 857
    Top = 504
    Width = 75
    Height = 25
    Caption = 'Next'
    TabOrder = 1
    OnClick = NextClick
  end
  object Exit: TButton
    Left = 970
    Top = 504
    Width = 75
    Height = 25
    Caption = 'Exit'
    TabOrder = 2
    OnClick = ExitClick
  end
  object Button1: TButton
    Left = 784
    Top = 568
    Width = 25
    Height = 25
    Caption = '1'
    TabOrder = 3
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 887
    Top = 568
    Width = 25
    Height = 25
    Caption = '2'
    TabOrder = 4
  end
  object Button3: TButton
    Left = 970
    Top = 568
    Width = 25
    Height = 25
    Caption = '3'
    TabOrder = 5
    OnClick = Button3Click
  end
  object RadioGroup1: TRadioGroup
    Left = 112
    Top = 64
    Width = 353
    Height = 105
    Caption = 'How often do you recycle household waste?'
    Items.Strings = (
      'Always'
      'Often'
      'Occasionally'
      'Rarely/Never')
    TabOrder = 6
  end
  object RadioGroup2: TRadioGroup
    Left = 112
    Top = 184
    Width = 353
    Height = 105
    Caption = 'What is the average thermostat setting in your home?'
    Items.Strings = (
      '68'#176'F (20'#176'C) or lower'
      '69-72'#176'F (20-22'#176'C)'
      '73-76'#176'F (23-24'#176'C)'
      '77'#176'F (25'#176'C) or higher')
    TabOrder = 7
  end
  object RadioGroup3: TRadioGroup
    Left = 112
    Top = 312
    Width = 353
    Height = 105
    Caption = 'Do you have a rainwater harvesting system in place?'
    Items.Strings = (
      'Yes, and I use it regularly'
      'Yes, but I rarely use it'
      'No, but I'#39'm considering it'
      'No, and I'#39'm not interested')
    TabOrder = 8
  end
  object RadioGroup4: TRadioGroup
    Left = 112
    Top = 448
    Width = 353
    Height = 105
    Caption = 'How often do you air-dry your clothes instead of using a dryer?'
    Items.Strings = (
      'Always'
      'Often'
      'Occasionally'
      'Rarely/Never')
    TabOrder = 9
  end
end
